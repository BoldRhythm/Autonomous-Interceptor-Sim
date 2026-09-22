# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SetpointConfig.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetpointConfig(type):
    """Metaclass of message 'SetpointConfig'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MESSAGE_VERSION': 0,
        'TYPE_INVALID': 0,
        'TYPE_DIRECT_ACTUATORS': 1,
        'TYPE_MULTICOPTER_GOTO': 2,
        'TYPE_FIXEDWING_LATERAL_LONGITUDINAL': 3,
        'TYPE_TRAJECTORY': 4,
        'TYPE_RATES': 5,
        'TYPE_ATTITUDE': 6,
        'TYPE_ROVER_POSITION': 7,
        'TYPE_ROVER_SPEED_ATTITUDE': 8,
        'TYPE_ROVER_SPEED_RATE': 9,
        'TYPE_ROVER_SPEED_STEERING': 10,
        'TYPE_ROVER_THROTTLE_ATTITUDE': 11,
        'TYPE_ROVER_THROTTLE_RATE': 12,
        'TYPE_ROVER_THROTTLE_STEERING': 13,
        'TYPE_TRAJECTORY_6DOF': 14,
        'TYPE_THRUST_AND_TORQUE': 15,
        'TYPE_POSITION_TRIPLET': 16,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.SetpointConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__setpoint_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__setpoint_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__setpoint_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__setpoint_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__setpoint_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MESSAGE_VERSION': cls.__constants['MESSAGE_VERSION'],
            'TYPE_INVALID': cls.__constants['TYPE_INVALID'],
            'TYPE_DIRECT_ACTUATORS': cls.__constants['TYPE_DIRECT_ACTUATORS'],
            'TYPE_MULTICOPTER_GOTO': cls.__constants['TYPE_MULTICOPTER_GOTO'],
            'TYPE_FIXEDWING_LATERAL_LONGITUDINAL': cls.__constants['TYPE_FIXEDWING_LATERAL_LONGITUDINAL'],
            'TYPE_TRAJECTORY': cls.__constants['TYPE_TRAJECTORY'],
            'TYPE_RATES': cls.__constants['TYPE_RATES'],
            'TYPE_ATTITUDE': cls.__constants['TYPE_ATTITUDE'],
            'TYPE_ROVER_POSITION': cls.__constants['TYPE_ROVER_POSITION'],
            'TYPE_ROVER_SPEED_ATTITUDE': cls.__constants['TYPE_ROVER_SPEED_ATTITUDE'],
            'TYPE_ROVER_SPEED_RATE': cls.__constants['TYPE_ROVER_SPEED_RATE'],
            'TYPE_ROVER_SPEED_STEERING': cls.__constants['TYPE_ROVER_SPEED_STEERING'],
            'TYPE_ROVER_THROTTLE_ATTITUDE': cls.__constants['TYPE_ROVER_THROTTLE_ATTITUDE'],
            'TYPE_ROVER_THROTTLE_RATE': cls.__constants['TYPE_ROVER_THROTTLE_RATE'],
            'TYPE_ROVER_THROTTLE_STEERING': cls.__constants['TYPE_ROVER_THROTTLE_STEERING'],
            'TYPE_TRAJECTORY_6DOF': cls.__constants['TYPE_TRAJECTORY_6DOF'],
            'TYPE_THRUST_AND_TORQUE': cls.__constants['TYPE_THRUST_AND_TORQUE'],
            'TYPE_POSITION_TRIPLET': cls.__constants['TYPE_POSITION_TRIPLET'],
        }

    @property
    def MESSAGE_VERSION(self):
        """Message constant 'MESSAGE_VERSION'."""
        return Metaclass_SetpointConfig.__constants['MESSAGE_VERSION']

    @property
    def TYPE_INVALID(self):
        """Message constant 'TYPE_INVALID'."""
        return Metaclass_SetpointConfig.__constants['TYPE_INVALID']

    @property
    def TYPE_DIRECT_ACTUATORS(self):
        """Message constant 'TYPE_DIRECT_ACTUATORS'."""
        return Metaclass_SetpointConfig.__constants['TYPE_DIRECT_ACTUATORS']

    @property
    def TYPE_MULTICOPTER_GOTO(self):
        """Message constant 'TYPE_MULTICOPTER_GOTO'."""
        return Metaclass_SetpointConfig.__constants['TYPE_MULTICOPTER_GOTO']

    @property
    def TYPE_FIXEDWING_LATERAL_LONGITUDINAL(self):
        """Message constant 'TYPE_FIXEDWING_LATERAL_LONGITUDINAL'."""
        return Metaclass_SetpointConfig.__constants['TYPE_FIXEDWING_LATERAL_LONGITUDINAL']

    @property
    def TYPE_TRAJECTORY(self):
        """Message constant 'TYPE_TRAJECTORY'."""
        return Metaclass_SetpointConfig.__constants['TYPE_TRAJECTORY']

    @property
    def TYPE_RATES(self):
        """Message constant 'TYPE_RATES'."""
        return Metaclass_SetpointConfig.__constants['TYPE_RATES']

    @property
    def TYPE_ATTITUDE(self):
        """Message constant 'TYPE_ATTITUDE'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ATTITUDE']

    @property
    def TYPE_ROVER_POSITION(self):
        """Message constant 'TYPE_ROVER_POSITION'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_POSITION']

    @property
    def TYPE_ROVER_SPEED_ATTITUDE(self):
        """Message constant 'TYPE_ROVER_SPEED_ATTITUDE'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_SPEED_ATTITUDE']

    @property
    def TYPE_ROVER_SPEED_RATE(self):
        """Message constant 'TYPE_ROVER_SPEED_RATE'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_SPEED_RATE']

    @property
    def TYPE_ROVER_SPEED_STEERING(self):
        """Message constant 'TYPE_ROVER_SPEED_STEERING'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_SPEED_STEERING']

    @property
    def TYPE_ROVER_THROTTLE_ATTITUDE(self):
        """Message constant 'TYPE_ROVER_THROTTLE_ATTITUDE'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_THROTTLE_ATTITUDE']

    @property
    def TYPE_ROVER_THROTTLE_RATE(self):
        """Message constant 'TYPE_ROVER_THROTTLE_RATE'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_THROTTLE_RATE']

    @property
    def TYPE_ROVER_THROTTLE_STEERING(self):
        """Message constant 'TYPE_ROVER_THROTTLE_STEERING'."""
        return Metaclass_SetpointConfig.__constants['TYPE_ROVER_THROTTLE_STEERING']

    @property
    def TYPE_TRAJECTORY_6DOF(self):
        """Message constant 'TYPE_TRAJECTORY_6DOF'."""
        return Metaclass_SetpointConfig.__constants['TYPE_TRAJECTORY_6DOF']

    @property
    def TYPE_THRUST_AND_TORQUE(self):
        """Message constant 'TYPE_THRUST_AND_TORQUE'."""
        return Metaclass_SetpointConfig.__constants['TYPE_THRUST_AND_TORQUE']

    @property
    def TYPE_POSITION_TRIPLET(self):
        """Message constant 'TYPE_POSITION_TRIPLET'."""
        return Metaclass_SetpointConfig.__constants['TYPE_POSITION_TRIPLET']


class SetpointConfig(metaclass=Metaclass_SetpointConfig):
    """
    Message class 'SetpointConfig'.

    Constants:
      MESSAGE_VERSION
      TYPE_INVALID
      TYPE_DIRECT_ACTUATORS
      TYPE_MULTICOPTER_GOTO
      TYPE_FIXEDWING_LATERAL_LONGITUDINAL
      TYPE_TRAJECTORY
      TYPE_RATES
      TYPE_ATTITUDE
      TYPE_ROVER_POSITION
      TYPE_ROVER_SPEED_ATTITUDE
      TYPE_ROVER_SPEED_RATE
      TYPE_ROVER_SPEED_STEERING
      TYPE_ROVER_THROTTLE_ATTITUDE
      TYPE_ROVER_THROTTLE_RATE
      TYPE_ROVER_THROTTLE_STEERING
      TYPE_TRAJECTORY_6DOF
      TYPE_THRUST_AND_TORQUE
      TYPE_POSITION_TRIPLET
    """

    __slots__ = [
        '_timestamp',
        '_type',
        '_source_id',
        '_should_apply',
        '_timeout_ms',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'type': 'uint16',
        'source_id': 'uint8',
        'should_apply': 'boolean',
        'timeout_ms': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.type = kwargs.get('type', int())
        self.source_id = kwargs.get('source_id', int())
        self.should_apply = kwargs.get('should_apply', bool())
        self.timeout_ms = kwargs.get('timeout_ms', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.type != other.type:
            return False
        if self.source_id != other.source_id:
            return False
        if self.should_apply != other.should_apply:
            return False
        if self.timeout_ms != other.timeout_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'type' field must be an unsigned integer in [0, 65535]"
        self._type = value

    @builtins.property
    def source_id(self):
        """Message field 'source_id'."""
        return self._source_id

    @source_id.setter
    def source_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'source_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source_id' field must be an unsigned integer in [0, 255]"
        self._source_id = value

    @builtins.property
    def should_apply(self):
        """Message field 'should_apply'."""
        return self._should_apply

    @should_apply.setter
    def should_apply(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'should_apply' field must be of type 'bool'"
        self._should_apply = value

    @builtins.property
    def timeout_ms(self):
        """Message field 'timeout_ms'."""
        return self._timeout_ms

    @timeout_ms.setter
    def timeout_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'timeout_ms' field must be an unsigned integer in [0, 65535]"
        self._timeout_ms = value
