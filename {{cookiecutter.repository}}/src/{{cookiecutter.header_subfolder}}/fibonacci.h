#ifndef {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
#define {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H

namespace {{ cookiecutter.namespace }} {

int fibonacci(unsigned int n);

} // namespace {{ cookiecutter.namespace }}

#endif // {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
