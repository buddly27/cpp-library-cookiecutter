{{ "#" * cookiecutter.project|length }}
{{ cookiecutter.project }}
{{ "#" * cookiecutter.project|length }}

{{ cookiecutter.description }}

********
Building
********

Build the library as follows::

    cd {{ cookiecutter.repository }}
    mkdir build && cd build
    cmake -DCMAKE_INSTALL_PREFIX=/tmp/
    cmake --build . target install

Here are a few CMake options that can be used to influence the building process:

=================  =================================================================
Option             Description
=================  =================================================================
BUILD_TESTS        Indicate whether tests should be built. Default is true.
BUILD_DOCS         Indicate whether documentation should be built. Default is true.
BUILD_SHARED_LIBS  Indicate whether library should be built shared. Default is true.
=================  =================================================================

*************
Documentation
*************

Full documentation, including installation and setup guides, can be found at
http://{{ cookiecutter.repository }}.readthedocs.io/en/stable/
