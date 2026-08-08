#include <chrono>
#include <memory>
#include <vector>

#include <rclcpp/rclcpp.hpp>

#include <gz/transport/Node.hh>
#include <gz/msgs/marker.pb.h>
#include <gz/msgs/material.pb.h>
#include <px4_msgs/msg/vehicle_local_position.hpp>

using namespace std::chrono_literals;

class MarkerTest : public rclcpp::Node
{
public:

    MarkerTest() : Node("marker_test")
    {
        position_sub_ = create_subscription<
            px4_msgs::msg::VehicleLocalPosition>(
            "/fmu/out/vehicle_local_position",
            rclcpp::SensorDataQoS(),
            std::bind(
                &MarkerTest::positionCallback,
                this,
                std::placeholders::_1));

        timer_ = create_wall_timer(
            20ms,
            std::bind(&MarkerTest::publishMarker, this));

    }

private:

    rclcpp::Subscription<px4_msgs::msg::VehicleLocalPosition>::SharedPtr position_sub_;

    double x_ = 0.0;
    double y_ = 0.0;
    double z_ = 0.0;

    std::vector<gz::msgs::Vector3d> trajectory_points_;


    void AddPoint(gz::msgs::Marker &marker, double x, double y, double z) // Helper
    {
        auto *p = marker.add_point();

        p->set_x(x);
        p->set_y(y);
        p->set_z(z);
    }

    void positionCallback(const px4_msgs::msg::VehicleLocalPosition::SharedPtr msg) // Callback
    {
        x_ = msg->x;
        y_ = msg->y;
        z_ = msg->z;
        RCLCPP_INFO(
            get_logger(),
            "Position %.2f %.2f %.2f",
            x_,
            y_,
            z_);
    }

    void publishMarker()
    {
        gz::msgs::Marker marker;

        marker.set_ns("trajectory");
        marker.set_id(1);

        marker.set_action(gz::msgs::Marker::ADD_MODIFY);
        marker.set_type(gz::msgs::Marker::LINE_STRIP);

        marker.set_visibility(gz::msgs::Marker::GUI);

        auto *mat = marker.mutable_material();

        mat->mutable_diffuse()->set_r(0.0);
        mat->mutable_diffuse()->set_g(1.0);
        mat->mutable_diffuse()->set_b(0.0);
        mat->mutable_diffuse()->set_a(1.0);

        mat->mutable_ambient()->CopyFrom(mat->diffuse());

        // Line width
        marker.mutable_scale()->set_x(0.08);

        AddPoint(marker, x_, y_, z_);
        AddPoint(marker, x_ + 0.2, y_, z_);

		gz::msgs::Empty reply;
		bool executed = false;

		bool success = transport_node_.Request(
		    "/marker",
		    marker,
		    1000,
		    reply,
		    executed);

		RCLCPP_INFO(
		    get_logger(),
		    "Request sent: success=%d executed=%d",
		    success,
		    executed);

        RCLCPP_INFO(this->get_logger(), "Marker request sent.");
    }

    gz::transport::Node transport_node_;
    rclcpp::TimerBase::SharedPtr timer_;
};


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MarkerTest>());
    rclcpp::shutdown();
    return 0;
}
