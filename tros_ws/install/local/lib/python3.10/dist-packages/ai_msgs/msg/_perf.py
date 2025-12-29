# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ai_msgs:msg/Perf.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Perf(type):
    """Metaclass of message 'Perf'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ai_msgs.msg.Perf')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__perf
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__perf
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__perf
            cls._TYPE_SUPPORT = module.type_support_msg__msg__perf
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__perf

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Perf(metaclass=Metaclass_Perf):
    """Message class 'Perf'."""

    __slots__ = [
        '_type',
        '_stamp_start',
        '_stamp_end',
        '_time_ms_duration',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'stamp_start': 'builtin_interfaces/Time',
        'stamp_end': 'builtin_interfaces/Time',
        'time_ms_duration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        from builtin_interfaces.msg import Time
        self.stamp_start = kwargs.get('stamp_start', Time())
        from builtin_interfaces.msg import Time
        self.stamp_end = kwargs.get('stamp_end', Time())
        self.time_ms_duration = kwargs.get('time_ms_duration', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.type != other.type:
            return False
        if self.stamp_start != other.stamp_start:
            return False
        if self.stamp_end != other.stamp_end:
            return False
        if self.time_ms_duration != other.time_ms_duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def stamp_start(self):
        """Message field 'stamp_start'."""
        return self._stamp_start

    @stamp_start.setter
    def stamp_start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp_start' field must be a sub message of type 'Time'"
        self._stamp_start = value

    @builtins.property
    def stamp_end(self):
        """Message field 'stamp_end'."""
        return self._stamp_end

    @stamp_end.setter
    def stamp_end(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp_end' field must be a sub message of type 'Time'"
        self._stamp_end = value

    @builtins.property
    def time_ms_duration(self):
        """Message field 'time_ms_duration'."""
        return self._time_ms_duration

    @time_ms_duration.setter
    def time_ms_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_ms_duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_ms_duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_ms_duration = value
