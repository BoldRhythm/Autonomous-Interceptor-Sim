# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SetpointConfigReply.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetpointConfigReply(type):
    """Metaclass of message 'SetpointConfigReply'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MESSAGE_VERSION': 0,
        'RESULT_SUCCESS': 0,
        'RESULT_FAILURE_OTHER': 1,
        'RESULT_UNSUPPORTED': 2,
        'RESULT_UNKNOWN_SETPOINT_TYPE': 3,
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
                'px4_msgs.msg.SetpointConfigReply')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__setpoint_config_reply
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__setpoint_config_reply
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__setpoint_config_reply
            cls._TYPE_SUPPORT = module.type_support_msg__msg__setpoint_config_reply
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__setpoint_config_reply

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MESSAGE_VERSION': cls.__constants['MESSAGE_VERSION'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_FAILURE_OTHER': cls.__constants['RESULT_FAILURE_OTHER'],
            'RESULT_UNSUPPORTED': cls.__constants['RESULT_UNSUPPORTED'],
            'RESULT_UNKNOWN_SETPOINT_TYPE': cls.__constants['RESULT_UNKNOWN_SETPOINT_TYPE'],
        }

    @property
    def MESSAGE_VERSION(self):
        """Message constant 'MESSAGE_VERSION'."""
        return Metaclass_SetpointConfigReply.__constants['MESSAGE_VERSION']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_SetpointConfigReply.__constants['RESULT_SUCCESS']

    @property
    def RESULT_FAILURE_OTHER(self):
        """Message constant 'RESULT_FAILURE_OTHER'."""
        return Metaclass_SetpointConfigReply.__constants['RESULT_FAILURE_OTHER']

    @property
    def RESULT_UNSUPPORTED(self):
        """Message constant 'RESULT_UNSUPPORTED'."""
        return Metaclass_SetpointConfigReply.__constants['RESULT_UNSUPPORTED']

    @property
    def RESULT_UNKNOWN_SETPOINT_TYPE(self):
        """Message constant 'RESULT_UNKNOWN_SETPOINT_TYPE'."""
        return Metaclass_SetpointConfigReply.__constants['RESULT_UNKNOWN_SETPOINT_TYPE']


class SetpointConfigReply(metaclass=Metaclass_SetpointConfigReply):
    """
    Message class 'SetpointConfigReply'.

    Constants:
      MESSAGE_VERSION
      RESULT_SUCCESS
      RESULT_FAILURE_OTHER
      RESULT_UNSUPPORTED
      RESULT_UNKNOWN_SETPOINT_TYPE
    """

    __slots__ = [
        '_timestamp',
        '_type',
        '_source_id',
        '_result',
        '_mode_req_angular_velocity',
        '_mode_req_attitude',
        '_mode_req_local_alt',
        '_mode_req_local_position',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'type': 'uint16',
        'source_id': 'uint8',
        'result': 'uint8',
        'mode_req_angular_velocity': 'boolean',
        'mode_req_attitude': 'boolean',
        'mode_req_local_alt': 'boolean',
        'mode_req_local_position': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.result = kwargs.get('result', int())
        self.mode_req_angular_velocity = kwargs.get('mode_req_angular_velocity', bool())
        self.mode_req_attitude = kwargs.get('mode_req_attitude', bool())
        self.mode_req_local_alt = kwargs.get('mode_req_local_alt', bool())
        self.mode_req_local_position = kwargs.get('mode_req_local_position', bool())

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
        if self.result != other.result:
            return False
        if self.mode_req_angular_velocity != other.mode_req_angular_velocity:
            return False
        if self.mode_req_attitude != other.mode_req_attitude:
            return False
        if self.mode_req_local_alt != other.mode_req_local_alt:
            return False
        if self.mode_req_local_position != other.mode_req_local_position:
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
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value

    @builtins.property
    def mode_req_angular_velocity(self):
        """Message field 'mode_req_angular_velocity'."""
        return self._mode_req_angular_velocity

    @mode_req_angular_velocity.setter
    def mode_req_angular_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_angular_velocity' field must be of type 'bool'"
        self._mode_req_angular_velocity = value

    @builtins.property
    def mode_req_attitude(self):
        """Message field 'mode_req_attitude'."""
        return self._mode_req_attitude

    @mode_req_attitude.setter
    def mode_req_attitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_attitude' field must be of type 'bool'"
        self._mode_req_attitude = value

    @builtins.property
    def mode_req_local_alt(self):
        """Message field 'mode_req_local_alt'."""
        return self._mode_req_local_alt

    @mode_req_local_alt.setter
    def mode_req_local_alt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_local_alt' field must be of type 'bool'"
        self._mode_req_local_alt = value

    @builtins.property
    def mode_req_local_position(self):
        """Message field 'mode_req_local_position'."""
        return self._mode_req_local_position

    @mode_req_local_position.setter
    def mode_req_local_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_local_position' field must be of type 'bool'"
        self._mode_req_local_position = value
