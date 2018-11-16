cmake_minimum_required(VERSION 2.6)

enable_testing()

# Some of this hinted from there
# https://www.selectiveintellect.net/blog/2016/7/29/using-cmake-to-add-third-party-libraries-to-your-project-1
include(CheckIncludeFile)
include(CheckIncludeFileCXX)
include(CheckIncludeFiles)
include(ExternalProject)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/vendor/sfml/include/)

set(BUILD_SHARED_LIBS FALSE)
add_subdirectory(vendor/sfml)

add_subdirectory(src)
