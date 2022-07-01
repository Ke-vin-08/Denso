# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from bcap_service/bcapRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import bcap_service.msg

class bcapRequest(genpy.Message):
  _md5sum = "e2e62a99900f0dacb6b7c7114cde3983"
  _type = "bcap_service/bcapRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 func_id
variant[] vntArgs

================================================================================
MSG: bcap_service/variant
int16 vt
string value
"""
  __slots__ = ['func_id','vntArgs']
  _slot_types = ['int32','bcap_service/variant[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       func_id,vntArgs

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(bcapRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.func_id is None:
        self.func_id = 0
      if self.vntArgs is None:
        self.vntArgs = []
    else:
      self.func_id = 0
      self.vntArgs = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.func_id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.vntArgs)
      buff.write(_struct_I.pack(length))
      for val1 in self.vntArgs:
        _x = val1.vt
        buff.write(_get_struct_h().pack(_x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.vntArgs is None:
        self.vntArgs = None
      end = 0
      start = end
      end += 4
      (self.func_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vntArgs = []
      for i in range(0, length):
        val1 = bcap_service.msg.variant()
        start = end
        end += 2
        (val1.vt,) = _get_struct_h().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.vntArgs.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.func_id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.vntArgs)
      buff.write(_struct_I.pack(length))
      for val1 in self.vntArgs:
        _x = val1.vt
        buff.write(_get_struct_h().pack(_x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.vntArgs is None:
        self.vntArgs = None
      end = 0
      start = end
      end += 4
      (self.func_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vntArgs = []
      for i in range(0, length):
        val1 = bcap_service.msg.variant()
        start = end
        end += 2
        (val1.vt,) = _get_struct_h().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.vntArgs.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_h = None
def _get_struct_h():
    global _struct_h
    if _struct_h is None:
        _struct_h = struct.Struct("<h")
    return _struct_h
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from bcap_service/bcapResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import bcap_service.msg

class bcapResponse(genpy.Message):
  _md5sum = "71670d22c1b3a79073449b5cc4047e38"
  _type = "bcap_service/bcapResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 HRESULT
variant vntRet

================================================================================
MSG: bcap_service/variant
int16 vt
string value
"""
  __slots__ = ['HRESULT','vntRet']
  _slot_types = ['int32','bcap_service/variant']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       HRESULT,vntRet

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(bcapResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.HRESULT is None:
        self.HRESULT = 0
      if self.vntRet is None:
        self.vntRet = bcap_service.msg.variant()
    else:
      self.HRESULT = 0
      self.vntRet = bcap_service.msg.variant()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_ih().pack(_x.HRESULT, _x.vntRet.vt))
      _x = self.vntRet.value
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.vntRet is None:
        self.vntRet = bcap_service.msg.variant()
      end = 0
      _x = self
      start = end
      end += 6
      (_x.HRESULT, _x.vntRet.vt,) = _get_struct_ih().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.vntRet.value = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.vntRet.value = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_ih().pack(_x.HRESULT, _x.vntRet.vt))
      _x = self.vntRet.value
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.vntRet is None:
        self.vntRet = bcap_service.msg.variant()
      end = 0
      _x = self
      start = end
      end += 6
      (_x.HRESULT, _x.vntRet.vt,) = _get_struct_ih().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.vntRet.value = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.vntRet.value = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_ih = None
def _get_struct_ih():
    global _struct_ih
    if _struct_ih is None:
        _struct_ih = struct.Struct("<ih")
    return _struct_ih
class bcap(object):
  _type          = 'bcap_service/bcap'
  _md5sum = 'd7da50225be5d246d6e3baaab811da16'
  _request_class  = bcapRequest
  _response_class = bcapResponse