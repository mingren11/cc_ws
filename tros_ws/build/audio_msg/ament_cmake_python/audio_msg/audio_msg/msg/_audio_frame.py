# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_msg:msg/AudioFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioFrame(type):
    """Metaclass of message 'AudioFrame'."""

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
                'audio_msg.msg.AudioFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_frame

            from audio_msg.msg import AudioFrameType
            if AudioFrameType.__class__._TYPE_SUPPORT is None:
                AudioFrameType.__class__.__import_type_support__()

            from audio_msg.msg import SmartAudioData
            if SmartAudioData.__class__._TYPE_SUPPORT is None:
                SmartAudioData.__class__.__import_type_support__()

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


class AudioFrame(metaclass=Metaclass_AudioFrame):
    """Message class 'AudioFrame'."""

    __slots__ = [
        '_index',
        '_pts',
        '_frame_type',
        '_data',
        '_smart_audio',
    ]

    _fields_and_field_types = {
        'index': 'uint32',
        'pts': 'builtin_interfaces/Time',
        'frame_type': 'audio_msg/AudioFrameType',
        'data': 'sequence<uint8>',
        'smart_audio': 'audio_msg/SmartAudioData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audio_msg', 'msg'], 'AudioFrameType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audio_msg', 'msg'], 'SmartAudioData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', int())
        from builtin_interfaces.msg import Time
        self.pts = kwargs.get('pts', Time())
        from audio_msg.msg import AudioFrameType
        self.frame_type = kwargs.get('frame_type', AudioFrameType())
        self.data = array.array('B', kwargs.get('data', []))
        from audio_msg.msg import SmartAudioData
        self.smart_audio = kwargs.get('smart_audio', SmartAudioData())

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
        if self.index != other.index:
            return False
        if self.pts != other.pts:
            return False
        if self.frame_type != other.frame_type:
            return False
        if self.data != other.data:
            return False
        if self.smart_audio != other.smart_audio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'index' field must be an unsigned integer in [0, 4294967295]"
        self._index = value

    @builtins.property
    def pts(self):
        """Message field 'pts'."""
        return self._pts

    @pts.setter
    def pts(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'pts' field must be a sub message of type 'Time'"
        self._pts = value

    @builtins.property
    def frame_type(self):
        """Message field 'frame_type'."""
        return self._frame_type

    @frame_type.setter
    def frame_type(self, value):
        if __debug__:
            from audio_msg.msg import AudioFrameType
            assert \
                isinstance(value, AudioFrameType), \
                "The 'frame_type' field must be a sub message of type 'AudioFrameType'"
        self._frame_type = value

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
    def smart_audio(self):
        """Message field 'smart_audio'."""
        return self._smart_audio

    @smart_audio.setter
    def smart_audio(self, value):
        if __debug__:
            from audio_msg.msg import SmartAudioData
            assert \
                isinstance(value, SmartAudioData), \
                "The 'smart_audio' field must be a sub message of type 'SmartAudioData'"
        self._smart_audio = value
