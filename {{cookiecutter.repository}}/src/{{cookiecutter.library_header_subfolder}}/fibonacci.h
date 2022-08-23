#ifndef {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
#define {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H

namespace {{ cookiecutter.cpp_namespace }} {

int fibonacci(unsigned int n);

} // namespace {{ cookiecutter.cpp_namespace }}

#endif // {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
