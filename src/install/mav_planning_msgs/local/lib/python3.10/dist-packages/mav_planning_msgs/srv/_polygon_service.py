# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mav_planning_msgs:srv/PolygonService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PolygonService_Request(type):
    """Metaclass of message 'PolygonService_Request'."""

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
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.srv.PolygonService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__polygon_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__polygon_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__polygon_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__polygon_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__polygon_service__request

            from mav_planning_msgs.msg import PolygonWithHolesStamped
            if PolygonWithHolesStamped.__class__._TYPE_SUPPORT is None:
                PolygonWithHolesStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PolygonService_Request(metaclass=Metaclass_PolygonService_Request):
    """Message class 'PolygonService_Request'."""

    __slots__ = [
        '_polygon',
    ]

    _fields_and_field_types = {
        'polygon': 'mav_planning_msgs/PolygonWithHolesStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['mav_planning_msgs', 'msg'], 'PolygonWithHolesStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from mav_planning_msgs.msg import PolygonWithHolesStamped
        self.polygon = kwargs.get('polygon', PolygonWithHolesStamped())

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
        if self.polygon != other.polygon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from mav_planning_msgs.msg import PolygonWithHolesStamped
            assert \
                isinstance(value, PolygonWithHolesStamped), \
                "The 'polygon' field must be a sub message of type 'PolygonWithHolesStamped'"
        self._polygon = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PolygonService_Response(type):
    """Metaclass of message 'PolygonService_Response'."""

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
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.srv.PolygonService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__polygon_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__polygon_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__polygon_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__polygon_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__polygon_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PolygonService_Response(metaclass=Metaclass_PolygonService_Response):
    """Message class 'PolygonService_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_PolygonService(type):
    """Metaclass of service 'PolygonService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.srv.PolygonService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__polygon_service

            from mav_planning_msgs.srv import _polygon_service
            if _polygon_service.Metaclass_PolygonService_Request._TYPE_SUPPORT is None:
                _polygon_service.Metaclass_PolygonService_Request.__import_type_support__()
            if _polygon_service.Metaclass_PolygonService_Response._TYPE_SUPPORT is None:
                _polygon_service.Metaclass_PolygonService_Response.__import_type_support__()


class PolygonService(metaclass=Metaclass_PolygonService):
    from mav_planning_msgs.srv._polygon_service import PolygonService_Request as Request
    from mav_planning_msgs.srv._polygon_service import PolygonService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
