# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_msg:msg/SmartAudioData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SmartAudioData(type):
    """Metaclass of message 'SmartAudioData'."""

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
            module = import_type_support('audio_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'audio_msg.msg.SmartAudioData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__smart_audio_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__smart_audio_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__smart_audio_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__smart_audio_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__smart_audio_data

            from audio_msg.msg import AudioEventType
            if AudioEventType.__class__._TYPE_SUPPORT is None:
                AudioEventType.__class__.__import_type_support__()

            from audio_msg.msg import SmartAudioFrameType
            if SmartAudioFrameType.__class__._TYPE_SUPPORT is None:
                SmartAudioFrameType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmartAudioData(metaclass=Metaclass_SmartAudioData):
    """Message class 'SmartAudioData'."""

    __slots__ = [
        '_frame_type',
        '_event_type',
        '_cmd_word',
        '_data',
        '_doa_theta',
    ]

    _fields_and_field_types = {
        'frame_type': 'audio_msg/SmartAudioFrameType',
        'event_type': 'audio_msg/AudioEventType',
        'cmd_word': 'string',
        'data': 'sequence<uint8>',
        'doa_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['audio_msg', 'msg'], 'SmartAudioFrameType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audio_msg', 'msg'], 'AudioEventType'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from audio_msg.msg import SmartAudioFrameType
        self.frame_type = kwargs.get('frame_type', SmartAudioFrameType())
        from audio_msg.msg import AudioEventType
        self.event_type = kwargs.get('event_type', AudioEventType())
        self.cmd_word = kwargs.get('cmd_word', str())
        self.data = array.array('B', kwargs.get('data', []))
        self.doa_theta = kwargs.get('doa_theta', float())

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
        if self.frame_type != other.frame_type:
            return False
        if self.event_type != other.event_type:
            return False
        if self.cmd_word != other.cmd_word:
            return False
        if self.data != other.data:
            return False
        if self.doa_theta != other.doa_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame_type(self):
        """Message field 'frame_type'."""
        return self._frame_type

    @frame_type.setter
    def frame_type(self, value):
        if __debug__:
            from audio_msg.msg import SmartAudioFrameType
            assert \
                isinstance(value, SmartAudioFrameType), \
                "The 'frame_type' field must be a sub message of type 'SmartAudioFrameType'"
        self._frame_type = value

    @builtins.property
    def event_type(self):
        """Message field 'event_type'."""
        return self._event_type

    @event_type.setter
    def event_type(self, value):
        if __debug__:
            from audio_msg.msg import AudioEventType
            assert \
                isinstance(value, AudioEventType), \
                "The 'event_type' field must be a sub message of type 'AudioEventType'"
        self._event_type = value

    @builtins.property
    def cmd_word(self):
        """Message field 'cmd_word'."""
        return self._cmd_word

    @cmd_word.setter
    def cmd_word(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cmd_word' field must be of type 'str'"
        self._cmd_word = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)

    @builtins.property
    def doa_theta(self):
        """Message field 'doa_theta'."""
        return self._doa_theta

    @doa_theta.setter
    def doa_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'doa_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'doa_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._doa_theta = value
