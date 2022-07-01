// Generated by gencpp from file denso_robot_core/PoseData.msg
// DO NOT EDIT!


#ifndef DENSO_ROBOT_CORE_MESSAGE_POSEDATA_H
#define DENSO_ROBOT_CORE_MESSAGE_POSEDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <denso_robot_core/ExJoints.h>

namespace denso_robot_core
{
template <class ContainerAllocator>
struct PoseData_
{
  typedef PoseData_<ContainerAllocator> Type;

  PoseData_()
    : value()
    , type(0)
    , pass(0)
    , exjoints()  {
    }
  PoseData_(const ContainerAllocator& _alloc)
    : value(_alloc)
    , type(0)
    , pass(0)
    , exjoints(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _value_type;
  _value_type value;

   typedef int32_t _type_type;
  _type_type type;

   typedef int32_t _pass_type;
  _pass_type pass;

   typedef  ::denso_robot_core::ExJoints_<ContainerAllocator>  _exjoints_type;
  _exjoints_type exjoints;





  typedef boost::shared_ptr< ::denso_robot_core::PoseData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::denso_robot_core::PoseData_<ContainerAllocator> const> ConstPtr;

}; // struct PoseData_

typedef ::denso_robot_core::PoseData_<std::allocator<void> > PoseData;

typedef boost::shared_ptr< ::denso_robot_core::PoseData > PoseDataPtr;
typedef boost::shared_ptr< ::denso_robot_core::PoseData const> PoseDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::denso_robot_core::PoseData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::denso_robot_core::PoseData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::denso_robot_core::PoseData_<ContainerAllocator1> & lhs, const ::denso_robot_core::PoseData_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value &&
    lhs.type == rhs.type &&
    lhs.pass == rhs.pass &&
    lhs.exjoints == rhs.exjoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::denso_robot_core::PoseData_<ContainerAllocator1> & lhs, const ::denso_robot_core::PoseData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace denso_robot_core

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::denso_robot_core::PoseData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::denso_robot_core::PoseData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::denso_robot_core::PoseData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::denso_robot_core::PoseData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::denso_robot_core::PoseData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::denso_robot_core::PoseData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::denso_robot_core::PoseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b62dc5261dfb262aa32713ca52458d1";
  }

  static const char* value(const ::denso_robot_core::PoseData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b62dc5261dfb262ULL;
  static const uint64_t static_value2 = 0xaa32713ca52458d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::denso_robot_core::PoseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "denso_robot_core/PoseData";
  }

  static const char* value(const ::denso_robot_core::PoseData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::denso_robot_core::PoseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] value\n"
"int32     type\n"
"int32     pass\n"
"ExJoints  exjoints\n"
"\n"
"\n"
"================================================================================\n"
"MSG: denso_robot_core/ExJoints\n"
"int32    mode\n"
"Joints[] joints\n"
"\n"
"\n"
"================================================================================\n"
"MSG: denso_robot_core/Joints\n"
"int32   joint\n"
"float64 value\n"
"\n"
;
  }

  static const char* value(const ::denso_robot_core::PoseData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::denso_robot_core::PoseData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
      stream.next(m.type);
      stream.next(m.pass);
      stream.next(m.exjoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::denso_robot_core::PoseData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::denso_robot_core::PoseData_<ContainerAllocator>& v)
  {
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value[i]);
    }
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "pass: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pass);
    s << indent << "exjoints: ";
    s << std::endl;
    Printer< ::denso_robot_core::ExJoints_<ContainerAllocator> >::stream(s, indent + "  ", v.exjoints);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DENSO_ROBOT_CORE_MESSAGE_POSEDATA_H
