#include <{{ cookiecutter.library_header_subfolder }}/fibonacci.h>

#include <gtest/gtest.h>

TEST(FibonacciTest, Execute)
{
    ASSERT_EQ({{ cookiecutter.cpp_namespace }}::fibonacci(0), 0);
    ASSERT_EQ({{ cookiecutter.cpp_namespace }}::fibonacci(1), 1);
    ASSERT_EQ({{ cookiecutter.cpp_namespace }}::fibonacci(12), 144);
    ASSERT_EQ({{ cookiecutter.cpp_namespace }}::fibonacci(15), 610);
}
