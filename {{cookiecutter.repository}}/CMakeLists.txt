cmake_minimum_required(VERSION 3.20)

project({{ cookiecutter.cmake_project }} VERSION "{{ cookiecutter.version }}" LANGUAGES CXX)

include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Default options.
option(BUILD_TESTS "Build tests" ON)
option(BUILD_DOCS "Build documentation" ON)
option(BUILD_SHARED_LIBS "Build Shared Library" ON)

# Discover custom module finders.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# Add project dependencies here.
# (e.g. find_package(FOO 1.2.3 REQUIRED))

add_subdirectory(src)

# Build and setup tests if required.
if (BUILD_TESTS)
    find_package(GTest REQUIRED)
    include(GoogleTest)

    enable_testing()

    add_subdirectory(test)
endif()

# Build documentation if required.
if (BUILD_DOCS)
    find_package(Sphinx 1.8.6 REQUIRED)
    find_package(Doxygen 1.8.5 REQUIRED)

    add_subdirectory(doc)
endif()