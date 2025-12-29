# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_msg:msg/SmartAudioFrameType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SmartAudioFrameType(type):
    """Metaclass of message 'SmartAudioFrameType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SMART_AUDIO_TYPE_VOIP': 1,
        'SMART_AUDIO_TYPE_EVENT': 2,
        'SMART_AUDIO_TYPE_CMD_WORD': 3,
        'SMART_AUDIO_TYPE_WAKEUP_DATA': 4,
        'SMART_AUDIO_TYPE_DOA': 5,
        'SMART_AUDIO_TYPE_ASR_DATA': 6,
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
                'audio_msg.msg.SmartAudioFrameType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__smart_audio_frame_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__smart_audio_frame_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__smart_audio_frame_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__smart_audio_frame_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__smart_audio_frame_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SMART_AUDIO_TYPE_VOIP': cls.__constants['SMART_AUDIO_TYPE_VOIP'],
            'SMART_AUDIO_TYPE_EVENT': cls.__constants['SMART_AUDIO_TYPE_EVENT'],
            'SMART_AUDIO_TYPE_CMD_WORD': cls.__constants['SMART_AUDIO_TYPE_CMD_WORD'],
            'SMART_AUDIO_TYPE_WAKEUP_DATA': cls.__constants['SMART_AUDIO_TYPE_WAKEUP_DATA'],
            'SMART_AUDIO_TYPE_DOA': cls.__constants['SMART_AUDIO_TYPE_DOA'],
            'SMART_AUDIO_TYPE_ASR_DATA': cls.__constants['SMART_AUDIO_TYPE_ASR_DATA'],
        }

    @property
    def SMART_AUDIO_TYPE_VOIP(self):
        """Message constant 'SMART_AUDIO_TYPE_VOIP'."""
        return Metaclass_SmartAudioFrameType.__constants['SMART_AUDIO_TYPE_VOIP']

    @property
    def SMART_AUDIO_TYPE_EVENT(self):
        """Message constant 'SMART_AUDIO_TYPE_EVENT'."""
        return Metaclass_SmartAudioFrameType.__constants['SMART_AUDIO_TYPE_EVENT']

    @property
    def SMART_AUDIO_TYPE_CMD_WORD(self):
        """Message constant 'SMART_AUDIO_TYPE_CMD_WORD'."""
        return Metaclass_SmartAudioFrameType.__constants['SMART_AUDIO_TYPE_CMD_WORD']

    @property
    def SMART_AUDIO_TYPE_WAKEUP_DATA(self):
        """Message constant 'SMART_AUDIO_TYPE_WAKEUP_DATA'."""
        return Metaclass_SmartAudioFrameType.__constants['SMART_AUDIO_TYPE_WAKEUP_DATA']

    @property
    def SMART_AUDIO_TYPE_DOA(self):
        """Message constant 'SMART_AUDIO_TYPE_DOA'."""
        return Metaclass_SmartAudioFrameType.__constants['SMART_AUDIO_TYPE_DOA']

    @property
    def SMART_AUDIO_TYPE_ASR_DATA(self):
        """Message constant 'SMART_AUDIO_TYPE_ASR_DATA'."""
        return Metaclass_SmartAudioFrameType.__constants['SMART_AUDIO_TYPE_ASR_DATA']


class SmartAudioFrameType(metaclass=Metaclass_SmartAudioFrameType):
    """
    Message class 'SmartAudioFrameType'.

    Constants:
      SMART_AUDIO_TYPE_VOIP
      SMART_AUDIO_TYPE_EVENT
      SMART_AUDIO_TYPE_CMD_WORD
      SMART_AUDIO_TYPE_WAKEUP_DATA
      SMART_AUDIO_TYPE_DOA
      SMART_AUDIO_TYPE_ASR_DATA
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
