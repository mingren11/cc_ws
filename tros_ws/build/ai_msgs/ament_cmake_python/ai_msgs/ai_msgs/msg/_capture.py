# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ai_msgs:msg/Capture.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'features'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Capture(type):
    """Metaclass of message 'Capture'."""

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
                'ai_msgs.msg.Capture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__capture
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__capture
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__capture
            cls._TYPE_SUPPORT = module.type_support_msg__msg__capture
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__capture

            from ai_msgs.msg import DBResult
            if DBResult.__class__._TYPE_SUPPORT is None:
                DBResult.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Capture(metaclass=Metaclass_Capture):
    """Message class 'Capture'."""

    __slots__ = [
        '_header',
        '_img',
        '_features',
        '_db_result',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'img': 'sensor_msgs/Image',
        'features': 'sequence<float>',
        'db_result': 'ai_msgs/DBResult',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ai_msgs', 'msg'], 'DBResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import Image
        self.img = kwargs.get('img', Image())
        self.features = array.array('f', kwargs.get('features', []))
        from ai_msgs.msg import DBResult
        self.db_result = kwargs.get('db_result', DBResult())

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
        if self.header != other.header:
            return False
        if self.img != other.img:
            return False
        if self.features != other.features:
            return False
        if self.db_result != other.db_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def img(self):
        """Message field 'img'."""
        return self._img

    @img.setter
    def img(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'img' field must be a sub message of type 'Image'"
        self._img = value

    @builtins.property
    def features(self):
        """Message field 'features'."""
        return self._features

    @features.setter
    def features(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'features' array.array() must have the type code of 'f'"
            self._features = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'features' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._features = array.array('f', value)

    @builtins.property
    def db_result(self):
        """Message field 'db_result'."""
        return self._db_result

    @db_result.setter
    def db_result(self, value):
        if __debug__:
            from ai_msgs.msg import DBResult
            assert \
                isinstance(value, DBResult), \
                "The 'db_result' field must be a sub message of type 'DBResult'"
        self._db_result = value
