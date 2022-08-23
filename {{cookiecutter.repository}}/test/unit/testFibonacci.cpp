#include <{{ cookiecutter.header_subfolder }}/fibonacci.h>

#include <gtest/gtest.h>

TEST(FibonacciTest, Execute)
{
    ASSERT_EQ({{ cookiecutter.namespace }}::fibonacci(0), 0);
    ASSERT_EQ({{ cookiecutter.namespace }}::fibonacci(1), 1);
    ASSERT_EQ({{ cookiecutter.namespace }}::fibonacci(12), 144);
    ASSERT_EQ({{ cookiecutter.namespace }}::fibonacci(15), 610);
}
