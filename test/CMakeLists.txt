cmake_minimum_required(VERSION 3.1.0)

project(test_qt_c VERSION 1.0.0 LANGUAGES CXX)

include_directories(./ ../include)



add_executable(test_qt_c test.c)
target_link_libraries(test_qt_c qt_c)