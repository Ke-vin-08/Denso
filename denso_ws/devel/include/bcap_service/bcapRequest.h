// Generated by gencpp from file bcap_service/bcapRequest.msg
// DO NOT EDIT!


#ifndef BCAP_SERVICE_MESSAGE_BCAPREQUEST_H
#define BCAP_SERVICE_MESSAGE_BCAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <bcap_service/variant.h>

namespace bcap_service
{
template <class ContainerAllocator>
struct bcapRequest_
{
  typedef bcapRequest_<ContainerAllocator> Type;

  bcapRequest_()
    : func_id(0)
    , vntArgs()  {
    }
  bcapRequest_(const ContainerAllocator& _alloc)
    : func_id(0)
    , vntArgs(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _func_id_type;
  _func_id_type func_id;

   typedef std::vector< ::bcap_service::variant_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::bcap_service::variant_<ContainerAllocator> >::other >  _vntArgs_type;
  _vntArgs_type vntArgs;





  typedef boost::shared_ptr< ::bcap_service::bcapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bcap_service::bcapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct bcapRequest_

typedef ::bcap_service::bcapRequest_<std::allocator<void> > bcapRequest;

typedef boost::shared_ptr< ::bcap_service::bcapRequest > bcapRequestPtr;
typedef boost::shared_ptr< ::bcap_service::bcapRequest const> bcapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bcap_service::bcapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bcap_service::bcapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bcap_service::bcapRequest_<ContainerAllocator1> & lhs, const ::bcap_service::bcapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.func_id == rhs.func_id &&
    lhs.vntArgs == rhs.vntArgs;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bcap_service::bcapRequest_<ContainerAllocator1> & lhs, const ::bcap_service::bcapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bcap_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bcap_service::bcapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bcap_service::bcapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bcap_service::bcapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bcap_service::bcapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bcap_service::bcapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bcap_service::bcapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bcap_service::bcapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2e62a99900f0dacb6b7c7114cde3983";
  }

  static const char* value(const ::bcap_service::bcapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2e62a99900f0dacULL;
  static const uint64_t static_value2 = 0xb6b7c7114cde3983ULL;
};

template<class ContainerAllocator>
struct DataType< ::bcap_service::bcapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcap_service/bcapRequest";
  }

  static const char* value(const ::bcap_service::bcapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bcap_service::bcapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 func_id\n"
"variant[] vntArgs\n"
"\n"
"================================================================================\n"
"MSG: bcap_service/variant\n"
"int16 vt\n"
"string value\n"
;
  }

  static const char* value(const ::bcap_service::bcapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bcap_service::bcapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.func_id);
      stream.next(m.vntArgs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct bcapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bcap_service::bcapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bcap_service::bcapRequest_<ContainerAllocator>& v)
  {
    s << indent << "func_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.func_id);
    s << indent << "vntArgs[]" << std::endl;
    for (size_t i = 0; i < v.vntArgs.size(); ++i)
    {
      s << indent << "  vntArgs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::bcap_service::variant_<ContainerAllocator> >::stream(s, indent + "    ", v.vntArgs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BCAP_SERVICE_MESSAGE_BCAPREQUEST_H
