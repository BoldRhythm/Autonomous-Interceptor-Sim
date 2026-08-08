# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FailureInjection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'unit'
# Member 'instance_mask'
# Member 'failure_type'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FailureInjection(type):
    """Metaclass of message 'FailureInjection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAX_FAILURES': 4,
        'FAILURE_UNIT_SENSOR_GYRO': 0,
        'FAILURE_UNIT_SENSOR_ACCEL': 1,
        'FAILURE_UNIT_SENSOR_MAG': 2,
        'FAILURE_UNIT_SENSOR_BARO': 3,
        'FAILURE_UNIT_SENSOR_GPS': 4,
        'FAILURE_UNIT_SENSOR_OPTICAL_FLOW': 5,
        'FAILURE_UNIT_SENSOR_VIO': 6,
        'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR': 7,
        'FAILURE_UNIT_SENSOR_AIRSPEED': 8,
        'FAILURE_UNIT_SYSTEM_BATTERY': 100,
        'FAILURE_UNIT_SYSTEM_MOTOR': 101,
        'FAILURE_UNIT_SYSTEM_SERVO': 102,
        'FAILURE_UNIT_SYSTEM_AVOIDANCE': 103,
        'FAILURE_UNIT_SYSTEM_RC_SIGNAL': 104,
        'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL': 105,
        'FAILURE_UNIT_SYSTEM_ESC': 106,
        'FAILURE_TYPE_OK': 0,
        'FAILURE_TYPE_OFF': 1,
        'FAILURE_TYPE_STUCK': 2,
        'FAILURE_TYPE_GARBAGE': 3,
        'FAILURE_TYPE_WRONG': 4,
        'FAILURE_TYPE_SLOW': 5,
        'FAILURE_TYPE_DELAYED': 6,
        'FAILURE_TYPE_INTERMITTENT': 7,
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
                'px4_msgs.msg.FailureInjection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__failure_injection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__failure_injection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__failure_injection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__failure_injection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__failure_injection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAX_FAILURES': cls.__constants['MAX_FAILURES'],
            'FAILURE_UNIT_SENSOR_GYRO': cls.__constants['FAILURE_UNIT_SENSOR_GYRO'],
            'FAILURE_UNIT_SENSOR_ACCEL': cls.__constants['FAILURE_UNIT_SENSOR_ACCEL'],
            'FAILURE_UNIT_SENSOR_MAG': cls.__constants['FAILURE_UNIT_SENSOR_MAG'],
            'FAILURE_UNIT_SENSOR_BARO': cls.__constants['FAILURE_UNIT_SENSOR_BARO'],
            'FAILURE_UNIT_SENSOR_GPS': cls.__constants['FAILURE_UNIT_SENSOR_GPS'],
            'FAILURE_UNIT_SENSOR_OPTICAL_FLOW': cls.__constants['FAILURE_UNIT_SENSOR_OPTICAL_FLOW'],
            'FAILURE_UNIT_SENSOR_VIO': cls.__constants['FAILURE_UNIT_SENSOR_VIO'],
            'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR': cls.__constants['FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'],
            'FAILURE_UNIT_SENSOR_AIRSPEED': cls.__constants['FAILURE_UNIT_SENSOR_AIRSPEED'],
            'FAILURE_UNIT_SYSTEM_BATTERY': cls.__constants['FAILURE_UNIT_SYSTEM_BATTERY'],
            'FAILURE_UNIT_SYSTEM_MOTOR': cls.__constants['FAILURE_UNIT_SYSTEM_MOTOR'],
            'FAILURE_UNIT_SYSTEM_SERVO': cls.__constants['FAILURE_UNIT_SYSTEM_SERVO'],
            'FAILURE_UNIT_SYSTEM_AVOIDANCE': cls.__constants['FAILURE_UNIT_SYSTEM_AVOIDANCE'],
            'FAILURE_UNIT_SYSTEM_RC_SIGNAL': cls.__constants['FAILURE_UNIT_SYSTEM_RC_SIGNAL'],
            'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL': cls.__constants['FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'],
            'FAILURE_UNIT_SYSTEM_ESC': cls.__constants['FAILURE_UNIT_SYSTEM_ESC'],
            'FAILURE_TYPE_OK': cls.__constants['FAILURE_TYPE_OK'],
            'FAILURE_TYPE_OFF': cls.__constants['FAILURE_TYPE_OFF'],
            'FAILURE_TYPE_STUCK': cls.__constants['FAILURE_TYPE_STUCK'],
            'FAILURE_TYPE_GARBAGE': cls.__constants['FAILURE_TYPE_GARBAGE'],
            'FAILURE_TYPE_WRONG': cls.__constants['FAILURE_TYPE_WRONG'],
            'FAILURE_TYPE_SLOW': cls.__constants['FAILURE_TYPE_SLOW'],
            'FAILURE_TYPE_DELAYED': cls.__constants['FAILURE_TYPE_DELAYED'],
            'FAILURE_TYPE_INTERMITTENT': cls.__constants['FAILURE_TYPE_INTERMITTENT'],
        }

    @property
    def MAX_FAILURES(self):
        """Message constant 'MAX_FAILURES'."""
        return Metaclass_FailureInjection.__constants['MAX_FAILURES']

    @property
    def FAILURE_UNIT_SENSOR_GYRO(self):
        """Message constant 'FAILURE_UNIT_SENSOR_GYRO'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_GYRO']

    @property
    def FAILURE_UNIT_SENSOR_ACCEL(self):
        """Message constant 'FAILURE_UNIT_SENSOR_ACCEL'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_ACCEL']

    @property
    def FAILURE_UNIT_SENSOR_MAG(self):
        """Message constant 'FAILURE_UNIT_SENSOR_MAG'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_MAG']

    @property
    def FAILURE_UNIT_SENSOR_BARO(self):
        """Message constant 'FAILURE_UNIT_SENSOR_BARO'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_BARO']

    @property
    def FAILURE_UNIT_SENSOR_GPS(self):
        """Message constant 'FAILURE_UNIT_SENSOR_GPS'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_GPS']

    @property
    def FAILURE_UNIT_SENSOR_OPTICAL_FLOW(self):
        """Message constant 'FAILURE_UNIT_SENSOR_OPTICAL_FLOW'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_OPTICAL_FLOW']

    @property
    def FAILURE_UNIT_SENSOR_VIO(self):
        """Message constant 'FAILURE_UNIT_SENSOR_VIO'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_VIO']

    @property
    def FAILURE_UNIT_SENSOR_DISTANCE_SENSOR(self):
        """Message constant 'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_DISTANCE_SENSOR']

    @property
    def FAILURE_UNIT_SENSOR_AIRSPEED(self):
        """Message constant 'FAILURE_UNIT_SENSOR_AIRSPEED'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SENSOR_AIRSPEED']

    @property
    def FAILURE_UNIT_SYSTEM_BATTERY(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_BATTERY'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_BATTERY']

    @property
    def FAILURE_UNIT_SYSTEM_MOTOR(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_MOTOR'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_MOTOR']

    @property
    def FAILURE_UNIT_SYSTEM_SERVO(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_SERVO'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_SERVO']

    @property
    def FAILURE_UNIT_SYSTEM_AVOIDANCE(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_AVOIDANCE'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_AVOIDANCE']

    @property
    def FAILURE_UNIT_SYSTEM_RC_SIGNAL(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_RC_SIGNAL'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_RC_SIGNAL']

    @property
    def FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL']

    @property
    def FAILURE_UNIT_SYSTEM_ESC(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_ESC'."""
        return Metaclass_FailureInjection.__constants['FAILURE_UNIT_SYSTEM_ESC']

    @property
    def FAILURE_TYPE_OK(self):
        """Message constant 'FAILURE_TYPE_OK'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_OK']

    @property
    def FAILURE_TYPE_OFF(self):
        """Message constant 'FAILURE_TYPE_OFF'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_OFF']

    @property
    def FAILURE_TYPE_STUCK(self):
        """Message constant 'FAILURE_TYPE_STUCK'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_STUCK']

    @property
    def FAILURE_TYPE_GARBAGE(self):
        """Message constant 'FAILURE_TYPE_GARBAGE'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_GARBAGE']

    @property
    def FAILURE_TYPE_WRONG(self):
        """Message constant 'FAILURE_TYPE_WRONG'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_WRONG']

    @property
    def FAILURE_TYPE_SLOW(self):
        """Message constant 'FAILURE_TYPE_SLOW'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_SLOW']

    @property
    def FAILURE_TYPE_DELAYED(self):
        """Message constant 'FAILURE_TYPE_DELAYED'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_DELAYED']

    @property
    def FAILURE_TYPE_INTERMITTENT(self):
        """Message constant 'FAILURE_TYPE_INTERMITTENT'."""
        return Metaclass_FailureInjection.__constants['FAILURE_TYPE_INTERMITTENT']


class FailureInjection(metaclass=Metaclass_FailureInjection):
    """
    Message class 'FailureInjection'.

    Constants:
      MAX_FAILURES
      FAILURE_UNIT_SENSOR_GYRO
      FAILURE_UNIT_SENSOR_ACCEL
      FAILURE_UNIT_SENSOR_MAG
      FAILURE_UNIT_SENSOR_BARO
      FAILURE_UNIT_SENSOR_GPS
      FAILURE_UNIT_SENSOR_OPTICAL_FLOW
      FAILURE_UNIT_SENSOR_VIO
      FAILURE_UNIT_SENSOR_DISTANCE_SENSOR
      FAILURE_UNIT_SENSOR_AIRSPEED
      FAILURE_UNIT_SYSTEM_BATTERY
      FAILURE_UNIT_SYSTEM_MOTOR
      FAILURE_UNIT_SYSTEM_SERVO
      FAILURE_UNIT_SYSTEM_AVOIDANCE
      FAILURE_UNIT_SYSTEM_RC_SIGNAL
      FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL
      FAILURE_UNIT_SYSTEM_ESC
      FAILURE_TYPE_OK
      FAILURE_TYPE_OFF
      FAILURE_TYPE_STUCK
      FAILURE_TYPE_GARBAGE
      FAILURE_TYPE_WRONG
      FAILURE_TYPE_SLOW
      FAILURE_TYPE_DELAYED
      FAILURE_TYPE_INTERMITTENT
    """

    __slots__ = [
        '_timestamp',
        '_count',
        '_unit',
        '_instance_mask',
        '_failure_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'count': 'uint8',
        'unit': 'uint8[4]',
        'instance_mask': 'uint16[4]',
        'failure_type': 'uint8[4]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
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
        self.count = kwargs.get('count', int())
        if 'unit' not in kwargs:
            self.unit = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.unit = kwargs.get('unit')
        if 'instance_mask' not in kwargs:
            self.instance_mask = numpy.zeros(4, dtype=numpy.uint16)
        else:
            self.instance_mask = kwargs.get('instance_mask')
        if 'failure_type' not in kwargs:
            self.failure_type = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.failure_type = kwargs.get('failure_type')

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
        if self.count != other.count:
            return False
        if any(self.unit != other.unit):
            return False
        if any(self.instance_mask != other.instance_mask):
            return False
        if any(self.failure_type != other.failure_type):
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

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'count' field must be an unsigned integer in [0, 255]"
        self._count = value

    @builtins.property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'unit' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 4, \
                    "The 'unit' numpy.ndarray() must have a size of 4"
                self._unit = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'unit' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._unit = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def instance_mask(self):
        """Message field 'instance_mask'."""
        return self._instance_mask

    @instance_mask.setter
    def instance_mask(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint16, \
                    "The 'instance_mask' numpy.ndarray() must have the dtype of 'numpy.uint16'"
                assert value.size == 4, \
                    "The 'instance_mask' numpy.ndarray() must have a size of 4"
                self._instance_mask = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'instance_mask' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._instance_mask = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def failure_type(self):
        """Message field 'failure_type'."""
        return self._failure_type

    @failure_type.setter
    def failure_type(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'failure_type' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 4, \
                    "The 'failure_type' numpy.ndarray() must have a size of 4"
                self._failure_type = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'failure_type' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._failure_type = numpy.array(value, dtype=numpy.uint8)
