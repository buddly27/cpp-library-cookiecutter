add_library({{ cookiecutter.library_name }}
    {{ cookiecutter.library_header_subfolder }}/fibonacci.cpp
)

target_include_directories({{ cookiecutter.library_name }}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

install(TARGETS {{ cookiecutter.library_name }} EXPORT ${PROJECT_NAME})
install(
    DIRECTORY
        {{ cookiecutter.library_header_subfolder }}
    DESTINATION
        ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h"
)

install(EXPORT ${PROJECT_NAME}
    FILE {{ cookiecutter.library_name }}Targets.cmake
    NAMESPACE {{ cookiecutter.cmake_target_namespace }}::
    DESTINATION share/cmake/{{ cookiecutter.cmake_project }}
)
