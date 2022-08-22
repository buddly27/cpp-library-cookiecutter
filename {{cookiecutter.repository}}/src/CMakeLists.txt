add_library({{ cookiecutter.cmake_project }}
    {{ cookiecutter.namespace }}/fibonacci.cpp
)

target_include_directories({{ cookiecutter.cmake_project }}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

install(TARGETS {{ cookiecutter.cmake_project }} EXPORT ${PROJECT_NAME})
install(
    DIRECTORY
        {{ cookiecutter.cmake_project }}
    DESTINATION
        ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h"
)
