// Generated by gencpp from file orbslam_server/orbslam_get.msg
// DO NOT EDIT!


#ifndef ORBSLAM_SERVER_MESSAGE_ORBSLAM_GET_H
#define ORBSLAM_SERVER_MESSAGE_ORBSLAM_GET_H

#include <ros/service_traits.h>


#include <orbslam_server/orbslam_getRequest.h>
#include <orbslam_server/orbslam_getResponse.h>


namespace orbslam_server
{

struct orbslam_get
{

typedef orbslam_getRequest Request;
typedef orbslam_getResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct orbslam_get
} // namespace orbslam_server


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::orbslam_server::orbslam_get > {
  static const char* value()
  {
    return "d6c090d33069f358887598d9d88cbb39";
  }

  static const char* value(const ::orbslam_server::orbslam_get&) { return value(); }
};

template<>
struct DataType< ::orbslam_server::orbslam_get > {
  static const char* value()
  {
    return "orbslam_server/orbslam_get";
  }

  static const char* value(const ::orbslam_server::orbslam_get&) { return value(); }
};


// service_traits::MD5Sum< ::orbslam_server::orbslam_getRequest> should match 
// service_traits::MD5Sum< ::orbslam_server::orbslam_get > 
template<>
struct MD5Sum< ::orbslam_server::orbslam_getRequest>
{
  static const char* value()
  {
    return MD5Sum< ::orbslam_server::orbslam_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_getRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::orbslam_server::orbslam_getRequest> should match 
// service_traits::DataType< ::orbslam_server::orbslam_get > 
template<>
struct DataType< ::orbslam_server::orbslam_getRequest>
{
  static const char* value()
  {
    return DataType< ::orbslam_server::orbslam_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_getRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::orbslam_server::orbslam_getResponse> should match 
// service_traits::MD5Sum< ::orbslam_server::orbslam_get > 
template<>
struct MD5Sum< ::orbslam_server::orbslam_getResponse>
{
  static const char* value()
  {
    return MD5Sum< ::orbslam_server::orbslam_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_getResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::orbslam_server::orbslam_getResponse> should match 
// service_traits::DataType< ::orbslam_server::orbslam_get > 
template<>
struct DataType< ::orbslam_server::orbslam_getResponse>
{
  static const char* value()
  {
    return DataType< ::orbslam_server::orbslam_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_getResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ORBSLAM_SERVER_MESSAGE_ORBSLAM_GET_H