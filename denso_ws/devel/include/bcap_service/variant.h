// Generated by gencpp from file bcap_service/variant.msg
// DO NOT EDIT!


#ifndef BCAP_SERVICE_MESSAGE_VARIANT_H
#define BCAP_SERVICE_MESSAGE_VARIANT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bcap_service
{
template <class ContainerAllocator>
struct variant_
{
  typedef variant_<ContainerAllocator> Type;

  variant_()
    : vt(0)
    , value()  {
    }
  variant_(const ContainerAllocator& _alloc)
    : vt(0)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _vt_type;
  _vt_type vt;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::bcap_service::variant_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bcap_service::variant_<ContainerAllocator> const> ConstPtr;

}; // struct variant_

typedef ::bcap_service::variant_<std::allocator<void> > variant;

typedef boost::shared_ptr< ::bcap_service::variant > variantPtr;
typedef boost::shared_ptr< ::bcap_service::variant const> variantConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bcap_service::variant_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bcap_service::variant_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bcap_service::variant_<ContainerAllocator1> & lhs, const ::bcap_service::variant_<ContainerAllocator2> & rhs)
{
  return lhs.vt == rhs.vt &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bcap_service::variant_<ContainerAllocator1> & lhs, const ::bcap_service::variant_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bcap_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bcap_service::variant_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bcap_service::variant_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bcap_service::variant_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bcap_service::variant_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bcap_service::variant_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bcap_service::variant_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bcap_service::variant_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ff385ab5cb58d55d6c7b0d33e88693e";
  }

  static const char* value(const ::bcap_service::variant_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ff385ab5cb58d55ULL;
  static const uint64_t static_value2 = 0xd6c7b0d33e88693eULL;
};

template<class ContainerAllocator>
struct DataType< ::bcap_service::variant_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcap_service/variant";
  }

  static const char* value(const ::bcap_service::variant_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bcap_service::variant_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 vt\n"
"string value\n"
;
  }

  static const char* value(const ::bcap_service::variant_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bcap_service::variant_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vt);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct variant_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bcap_service::variant_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bcap_service::variant_<ContainerAllocator>& v)
  {
    s << indent << "vt: ";
    Printer<int16_t>::stream(s, indent + "  ", v.vt);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BCAP_SERVICE_MESSAGE_VARIANT_H
