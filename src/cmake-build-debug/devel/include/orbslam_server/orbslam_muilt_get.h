// Generated by gencpp from file orbslam_server/orbslam_muilt_get.msg
// DO NOT EDIT!


#ifndef ORBSLAM_SERVER_MESSAGE_ORBSLAM_MUILT_GET_H
#define ORBSLAM_SERVER_MESSAGE_ORBSLAM_MUILT_GET_H

#include <ros/service_traits.h>


#include <orbslam_server/orbslam_muilt_getRequest.h>
#include <orbslam_server/orbslam_muilt_getResponse.h>


namespace orbslam_server
{

struct orbslam_muilt_get
{

typedef orbslam_muilt_getRequest Request;
typedef orbslam_muilt_getResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct orbslam_muilt_get
} // namespace orbslam_server


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::orbslam_server::orbslam_muilt_get > {
  static const char* value()
  {
    return "ee25f22271f0bd02c410c343a7d196dd";
  }

  static const char* value(const ::orbslam_server::orbslam_muilt_get&) { return value(); }
};

template<>
struct DataType< ::orbslam_server::orbslam_muilt_get > {
  static const char* value()
  {
    return "orbslam_server/orbslam_muilt_get";
  }

  static const char* value(const ::orbslam_server::orbslam_muilt_get&) { return value(); }
};


// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_getRequest> should match 
// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_get > 
template<>
struct MD5Sum< ::orbslam_server::orbslam_muilt_getRequest>
{
  static const char* value()
  {
    return MD5Sum< ::orbslam_server::orbslam_muilt_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_getRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::orbslam_server::orbslam_muilt_getRequest> should match 
// service_traits::DataType< ::orbslam_server::orbslam_muilt_get > 
template<>
struct DataType< ::orbslam_server::orbslam_muilt_getRequest>
{
  static const char* value()
  {
    return DataType< ::orbslam_server::orbslam_muilt_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_getRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_getResponse> should match 
// service_traits::MD5Sum< ::orbslam_server::orbslam_muilt_get > 
template<>
struct MD5Sum< ::orbslam_server::orbslam_muilt_getResponse>
{
  static const char* value()
  {
    return MD5Sum< ::orbslam_server::orbslam_muilt_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_getResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::orbslam_server::orbslam_muilt_getResponse> should match 
// service_traits::DataType< ::orbslam_server::orbslam_muilt_get > 
template<>
struct DataType< ::orbslam_server::orbslam_muilt_getResponse>
{
  static const char* value()
  {
    return DataType< ::orbslam_server::orbslam_muilt_get >::value();
  }
  static const char* value(const ::orbslam_server::orbslam_muilt_getResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ORBSLAM_SERVER_MESSAGE_ORBSLAM_MUILT_GET_H