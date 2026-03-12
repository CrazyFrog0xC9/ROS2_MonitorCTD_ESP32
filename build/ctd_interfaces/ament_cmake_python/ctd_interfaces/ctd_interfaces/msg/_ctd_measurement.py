# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ctd_interfaces:msg/CtdMeasurement.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CtdMeasurement(type):
    """Metaclass of message 'CtdMeasurement'."""

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
            module = import_type_support('ctd_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ctd_interfaces.msg.CtdMeasurement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ctd_measurement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ctd_measurement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ctd_measurement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ctd_measurement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ctd_measurement

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


class CtdMeasurement(metaclass=Metaclass_CtdMeasurement):
    """Message class 'CtdMeasurement'."""

    __slots__ = [
        '_sensor_id',
        '_stamp',
        '_temperature',
        '_conductivity',
        '_pressure',
        '_salinity',
        '_valid',
        '_raw_line',
    ]

    _fields_and_field_types = {
        'sensor_id': 'string',
        'stamp': 'builtin_interfaces/Time',
        'temperature': 'float',
        'conductivity': 'float',
        'pressure': 'float',
        'salinity': 'float',
        'valid': 'boolean',
        'raw_line': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_id = kwargs.get('sensor_id', str())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.temperature = kwargs.get('temperature', float())
        self.conductivity = kwargs.get('conductivity', float())
        self.pressure = kwargs.get('pressure', float())
        self.salinity = kwargs.get('salinity', float())
        self.valid = kwargs.get('valid', bool())
        self.raw_line = kwargs.get('raw_line', str())

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.stamp != other.stamp:
            return False
        if self.temperature != other.temperature:
            return False
        if self.conductivity != other.conductivity:
            return False
        if self.pressure != other.pressure:
            return False
        if self.salinity != other.salinity:
            return False
        if self.valid != other.valid:
            return False
        if self.raw_line != other.raw_line:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_id' field must be of type 'str'"
        self._sensor_id = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def conductivity(self):
        """Message field 'conductivity'."""
        return self._conductivity

    @conductivity.setter
    def conductivity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conductivity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conductivity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conductivity = value

    @builtins.property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pressure = value

    @builtins.property
    def salinity(self):
        """Message field 'salinity'."""
        return self._salinity

    @salinity.setter
    def salinity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'salinity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'salinity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._salinity = value

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def raw_line(self):
        """Message field 'raw_line'."""
        return self._raw_line

    @raw_line.setter
    def raw_line(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'raw_line' field must be of type 'str'"
        self._raw_line = value
