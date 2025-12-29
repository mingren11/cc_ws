# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ai_msgs:msg/Target.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Target(type):
    """Metaclass of message 'Target'."""

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
                'ai_msgs.msg.Target')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target

            from ai_msgs.msg import Attribute
            if Attribute.__class__._TYPE_SUPPORT is None:
                Attribute.__class__.__import_type_support__()

            from ai_msgs.msg import Capture
            if Capture.__class__._TYPE_SUPPORT is None:
                Capture.__class__.__import_type_support__()

            from ai_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from ai_msgs.msg import Roi
            if Roi.__class__._TYPE_SUPPORT is None:
                Roi.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Target(metaclass=Metaclass_Target):
    """Message class 'Target'."""

    __slots__ = [
        '_type',
        '_track_id',
        '_rois',
        '_attributes',
        '_points',
        '_captures',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'track_id': 'uint64',
        'rois': 'sequence<ai_msgs/Roi>',
        'attributes': 'sequence<ai_msgs/Attribute>',
        'points': 'sequence<ai_msgs/Point>',
        'captures': 'sequence<ai_msgs/Capture>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ai_msgs', 'msg'], 'Roi')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ai_msgs', 'msg'], 'Attribute')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ai_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ai_msgs', 'msg'], 'Capture')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.track_id = kwargs.get('track_id', int())
        self.rois = kwargs.get('rois', [])
        self.attributes = kwargs.get('attributes', [])
        self.points = kwargs.get('points', [])
        self.captures = kwargs.get('captures', [])

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
        if self.track_id != other.track_id:
            return False
        if self.rois != other.rois:
            return False
        if self.attributes != other.attributes:
            return False
        if self.points != other.points:
            return False
        if self.captures != other.captures:
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
    def track_id(self):
        """Message field 'track_id'."""
        return self._track_id

    @track_id.setter
    def track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'track_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._track_id = value

    @builtins.property
    def rois(self):
        """Message field 'rois'."""
        return self._rois

    @rois.setter
    def rois(self, value):
        if __debug__:
            from ai_msgs.msg import Roi
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
                 all(isinstance(v, Roi) for v in value) and
                 True), \
                "The 'rois' field must be a set or sequence and each value of type 'Roi'"
        self._rois = value

    @builtins.property
    def attributes(self):
        """Message field 'attributes'."""
        return self._attributes

    @attributes.setter
    def attributes(self, value):
        if __debug__:
            from ai_msgs.msg import Attribute
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
                 all(isinstance(v, Attribute) for v in value) and
                 True), \
                "The 'attributes' field must be a set or sequence and each value of type 'Attribute'"
        self._attributes = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from ai_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def captures(self):
        """Message field 'captures'."""
        return self._captures

    @captures.setter
    def captures(self, value):
        if __debug__:
            from ai_msgs.msg import Capture
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
                 all(isinstance(v, Capture) for v in value) and
                 True), \
                "The 'captures' field must be a set or sequence and each value of type 'Capture'"
        self._captures = value
