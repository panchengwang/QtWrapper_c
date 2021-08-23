cmake_minimum_required(VERSION 3.1.0)

project(qt_c VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(Qt5_DIR /Users/pcwang/Qt/5.15.2/clang_64/lib/cmake/Qt5)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Gui REQUIRED)

include_directories(./ ../include)

add_library(qt_c SHARED
  qimage_c.cpp 
  qpainter_c.cpp
  qfont_c.cpp
  qapplication_c.cpp
  qcolor_c.cpp
  qbrush_c.cpp
  qpen_c.cpp
)

target_link_libraries(qt_c Qt5::Core Qt5::Gui)