include(CMakeFindDependencyMacro)

# Add project dependencies here.
# (e.g. find_dependency(FOO 1.2.3))

include(${CMAKE_CURRENT_LIST_DIR}/{{ cookiecutter.cmake_project }}Targets.cmake)
