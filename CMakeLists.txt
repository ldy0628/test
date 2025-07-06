cmake_minimum_required(VERSION 3.10)

project (test VERSION 1.0)

if (CMAKE_HOST_WIN32)
    set(WINDOWS 1)
elseif (CMAKE_HOST_APPLE)
    set(MACOS 1)
elseif (CMAKE_HOST_UNIX)
    set(LINUX 1)
endif ()

set (SRC_LIST "main.cpp")

add_executable(${PROJECT_NAME} ${SRC_LIST})
