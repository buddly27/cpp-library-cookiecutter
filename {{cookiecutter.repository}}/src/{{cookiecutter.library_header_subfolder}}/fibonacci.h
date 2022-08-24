#ifndef {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
#define {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
/// @file fibonacci.h
/// @brief This is an example.

namespace {{ cookiecutter.cpp_namespace }} {

/// Compute number at the *n* position on the Fibonacci sequence.
/// \param n Position of the number to compute.
/// \returns Computed number.
int fibonacci(unsigned int n);

} // namespace {{ cookiecutter.cpp_namespace }}

#endif // {{ cookiecutter.project.replace(" ", "_").upper() }}_EXAMPLE_H
