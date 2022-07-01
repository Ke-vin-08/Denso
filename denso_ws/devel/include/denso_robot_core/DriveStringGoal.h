// Generated by gencpp from file denso_robot_core/DriveStringGoal.msg
// DO NOT EDIT!


#ifndef DENSO_ROBOT_CORE_MESSAGE_DRIVESTRINGGOAL_H
#define DENSO_ROBOT_CORE_MESSAGE_DRIVESTRINGGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace denso_robot_core
{
template <class ContainerAllocator>
struct DriveStringGoal_
{
  typedef DriveStringGoal_<ContainerAllocator> Type;

  DriveStringGoal_()
    : pose()
    , option()  {
    }
  DriveStringGoal_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , option(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _option_type;
  _option_type option;





  typedef boost::shared_ptr< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> const> ConstPtr;

}; // struct DriveStringGoal_

typedef ::denso_robot_core::DriveStringGoal_<std::allocator<void> > DriveStringGoal;

typedef boost::shared_ptr< ::denso_robot_core::DriveStringGoal > DriveStringGoalPtr;
typedef boost::shared_ptr< ::denso_robot_core::DriveStringGoal const> DriveStringGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::denso_robot_core::DriveStringGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::denso_robot_core::DriveStringGoal_<ContainerAllocator1> & lhs, const ::denso_robot_core::DriveStringGoal_<ContainerAllocator2> & rhs)
{
  return lhs.pose == rhs.pose &&
    lhs.option == rhs.option;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::denso_robot_core::DriveStringGoal_<ContainerAllocator1> & lhs, const ::denso_robot_core::DriveStringGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace denso_robot_core

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9de8d255efc68542d1bc35e67afbfca4";
  }

  static const char* value(const ::denso_robot_core::DriveStringGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9de8d255efc68542ULL;
  static const uint64_t static_value2 = 0xd1bc35e67afbfca4ULL;
};

template<class ContainerAllocator>
struct DataType< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "denso_robot_core/DriveStringGoal";
  }

  static const char* value(const ::denso_robot_core::DriveStringGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string pose\n"
"string option\n"
;
  }

  static const char* value(const ::denso_robot_core::DriveStringGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.option);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveStringGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::denso_robot_core::DriveStringGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::denso_robot_core::DriveStringGoal_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.pose);
    s << indent << "option: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.option);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DENSO_ROBOT_CORE_MESSAGE_DRIVESTRINGGOAL_H