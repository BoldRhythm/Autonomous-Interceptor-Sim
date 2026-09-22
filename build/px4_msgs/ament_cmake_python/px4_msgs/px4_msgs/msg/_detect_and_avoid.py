# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/DetectAndAvoid.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectAndAvoid(type):
    """Metaclass of message 'DetectAndAvoid'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DAA_CONFLICT_LVL_NONE': 0,
        'DAA_CONFLICT_LVL_LOW': 1,
        'DAA_CONFLICT_LVL_MEDIUM': 2,
        'DAA_CONFLICT_LVL_HIGH': 3,
        'DAA_CONFLICT_LVL_CRITICAL': 4,
        'UNIQUE_ID_ENCODING_ICAO': 0,
        'UNIQUE_ID_ENCODING_ADSB_CALLSIGN': 1,
        'UNIQUE_ID_ENCODING_UAS_ID': 2,
        'ORB_QUEUE_LENGTH': 16,
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
                'px4_msgs.msg.DetectAndAvoid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detect_and_avoid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detect_and_avoid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detect_and_avoid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detect_and_avoid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detect_and_avoid

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DAA_CONFLICT_LVL_NONE': cls.__constants['DAA_CONFLICT_LVL_NONE'],
            'DAA_CONFLICT_LVL_LOW': cls.__constants['DAA_CONFLICT_LVL_LOW'],
            'DAA_CONFLICT_LVL_MEDIUM': cls.__constants['DAA_CONFLICT_LVL_MEDIUM'],
            'DAA_CONFLICT_LVL_HIGH': cls.__constants['DAA_CONFLICT_LVL_HIGH'],
            'DAA_CONFLICT_LVL_CRITICAL': cls.__constants['DAA_CONFLICT_LVL_CRITICAL'],
            'UNIQUE_ID_ENCODING_ICAO': cls.__constants['UNIQUE_ID_ENCODING_ICAO'],
            'UNIQUE_ID_ENCODING_ADSB_CALLSIGN': cls.__constants['UNIQUE_ID_ENCODING_ADSB_CALLSIGN'],
            'UNIQUE_ID_ENCODING_UAS_ID': cls.__constants['UNIQUE_ID_ENCODING_UAS_ID'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def DAA_CONFLICT_LVL_NONE(self):
        """Message constant 'DAA_CONFLICT_LVL_NONE'."""
        return Metaclass_DetectAndAvoid.__constants['DAA_CONFLICT_LVL_NONE']

    @property
    def DAA_CONFLICT_LVL_LOW(self):
        """Message constant 'DAA_CONFLICT_LVL_LOW'."""
        return Metaclass_DetectAndAvoid.__constants['DAA_CONFLICT_LVL_LOW']

    @property
    def DAA_CONFLICT_LVL_MEDIUM(self):
        """Message constant 'DAA_CONFLICT_LVL_MEDIUM'."""
        return Metaclass_DetectAndAvoid.__constants['DAA_CONFLICT_LVL_MEDIUM']

    @property
    def DAA_CONFLICT_LVL_HIGH(self):
        """Message constant 'DAA_CONFLICT_LVL_HIGH'."""
        return Metaclass_DetectAndAvoid.__constants['DAA_CONFLICT_LVL_HIGH']

    @property
    def DAA_CONFLICT_LVL_CRITICAL(self):
        """Message constant 'DAA_CONFLICT_LVL_CRITICAL'."""
        return Metaclass_DetectAndAvoid.__constants['DAA_CONFLICT_LVL_CRITICAL']

    @property
    def UNIQUE_ID_ENCODING_ICAO(self):
        """Message constant 'UNIQUE_ID_ENCODING_ICAO'."""
        return Metaclass_DetectAndAvoid.__constants['UNIQUE_ID_ENCODING_ICAO']

    @property
    def UNIQUE_ID_ENCODING_ADSB_CALLSIGN(self):
        """Message constant 'UNIQUE_ID_ENCODING_ADSB_CALLSIGN'."""
        return Metaclass_DetectAndAvoid.__constants['UNIQUE_ID_ENCODING_ADSB_CALLSIGN']

    @property
    def UNIQUE_ID_ENCODING_UAS_ID(self):
        """Message constant 'UNIQUE_ID_ENCODING_UAS_ID'."""
        return Metaclass_DetectAndAvoid.__constants['UNIQUE_ID_ENCODING_UAS_ID']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_DetectAndAvoid.__constants['ORB_QUEUE_LENGTH']


class DetectAndAvoid(metaclass=Metaclass_DetectAndAvoid):
    """
    Message class 'DetectAndAvoid'.

    Constants:
      DAA_CONFLICT_LVL_NONE
      DAA_CONFLICT_LVL_LOW
      DAA_CONFLICT_LVL_MEDIUM
      DAA_CONFLICT_LVL_HIGH
      DAA_CONFLICT_LVL_CRITICAL
      UNIQUE_ID_ENCODING_ICAO
      UNIQUE_ID_ENCODING_ADSB_CALLSIGN
      UNIQUE_ID_ENCODING_UAS_ID
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_unique_id',
        '_unique_id_encoding',
        '_conflict_level',
        '_aircraft_dist',
        '_aircraft_dist_hor',
        '_aircraft_dist_vert',
        '_expected_min_dist_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'unique_id': 'uint64',
        'unique_id_encoding': 'uint8',
        'conflict_level': 'uint8',
        'aircraft_dist': 'float',
        'aircraft_dist_hor': 'float',
        'aircraft_dist_vert': 'float',
        'expected_min_dist_time': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.unique_id = kwargs.get('unique_id', int())
        self.unique_id_encoding = kwargs.get('unique_id_encoding', int())
        self.conflict_level = kwargs.get('conflict_level', int())
        self.aircraft_dist = kwargs.get('aircraft_dist', float())
        self.aircraft_dist_hor = kwargs.get('aircraft_dist_hor', float())
        self.aircraft_dist_vert = kwargs.get('aircraft_dist_vert', float())
        self.expected_min_dist_time = kwargs.get('expected_min_dist_time', float())

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
        if self.unique_id != other.unique_id:
            return False
        if self.unique_id_encoding != other.unique_id_encoding:
            return False
        if self.conflict_level != other.conflict_level:
            return False
        if self.aircraft_dist != other.aircraft_dist:
            return False
        if self.aircraft_dist_hor != other.aircraft_dist_hor:
            return False
        if self.aircraft_dist_vert != other.aircraft_dist_vert:
            return False
        if self.expected_min_dist_time != other.expected_min_dist_time:
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
    def unique_id(self):
        """Message field 'unique_id'."""
        return self._unique_id

    @unique_id.setter
    def unique_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unique_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'unique_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._unique_id = value

    @builtins.property
    def unique_id_encoding(self):
        """Message field 'unique_id_encoding'."""
        return self._unique_id_encoding

    @unique_id_encoding.setter
    def unique_id_encoding(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unique_id_encoding' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'unique_id_encoding' field must be an unsigned integer in [0, 255]"
        self._unique_id_encoding = value

    @builtins.property
    def conflict_level(self):
        """Message field 'conflict_level'."""
        return self._conflict_level

    @conflict_level.setter
    def conflict_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'conflict_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'conflict_level' field must be an unsigned integer in [0, 255]"
        self._conflict_level = value

    @builtins.property
    def aircraft_dist(self):
        """Message field 'aircraft_dist'."""
        return self._aircraft_dist

    @aircraft_dist.setter
    def aircraft_dist(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'aircraft_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aircraft_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aircraft_dist = value

    @builtins.property
    def aircraft_dist_hor(self):
        """Message field 'aircraft_dist_hor'."""
        return self._aircraft_dist_hor

    @aircraft_dist_hor.setter
    def aircraft_dist_hor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'aircraft_dist_hor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aircraft_dist_hor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aircraft_dist_hor = value

    @builtins.property
    def aircraft_dist_vert(self):
        """Message field 'aircraft_dist_vert'."""
        return self._aircraft_dist_vert

    @aircraft_dist_vert.setter
    def aircraft_dist_vert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'aircraft_dist_vert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aircraft_dist_vert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aircraft_dist_vert = value

    @builtins.property
    def expected_min_dist_time(self):
        """Message field 'expected_min_dist_time'."""
        return self._expected_min_dist_time

    @expected_min_dist_time.setter
    def expected_min_dist_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'expected_min_dist_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'expected_min_dist_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._expected_min_dist_time = value
