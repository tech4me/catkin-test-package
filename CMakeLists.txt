cmake_minimum_required(VERSION 3.2)

find_package(catkin REQUIRED)
catkin_add_gmock(test test.cpp)
