# generated from rosidl_generator_py/resource/_idl.py.em
# with input from inspection_interfaces:msg/InspectionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InspectionStatus(type):
    """Metaclass of message 'InspectionStatus'."""

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
            module = import_type_support('inspection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'inspection_interfaces.msg.InspectionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inspection_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inspection_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inspection_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inspection_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inspection_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InspectionStatus(metaclass=Metaclass_InspectionStatus):
    """Message class 'InspectionStatus'."""

    __slots__ = [
        '_name',
        '_location_x',
        '_location_y',
        '_v',
        '_battery',
        '_status',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'location_x': 'double',
        'location_y': 'double',
        'v': 'double',
        'battery': 'int32',
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.location_x = kwargs.get('location_x', float())
        self.location_y = kwargs.get('location_y', float())
        self.v = kwargs.get('v', float())
        self.battery = kwargs.get('battery', int())
        self.status = kwargs.get('status', str())

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
        if self.name != other.name:
            return False
        if self.location_x != other.location_x:
            return False
        if self.location_y != other.location_y:
            return False
        if self.v != other.v:
            return False
        if self.battery != other.battery:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def location_x(self):
        """Message field 'location_x'."""
        return self._location_x

    @location_x.setter
    def location_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'location_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'location_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._location_x = value

    @builtins.property
    def location_y(self):
        """Message field 'location_y'."""
        return self._location_y

    @location_y.setter
    def location_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'location_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'location_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._location_y = value

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'battery' field must be an integer in [-2147483648, 2147483647]"
        self._battery = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value
