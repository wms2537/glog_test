cmake_minimum_required (VERSION 3.16)
project (glog_test VERSION 1.0)

find_package (glog 0.6.0 REQUIRED)

add_executable (main main.cpp)
target_link_libraries (main glog::glog)