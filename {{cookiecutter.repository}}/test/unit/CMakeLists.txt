add_executable(testFibonacci testFibonacci.cpp)
target_link_libraries(testFibonacci
    PRIVATE
        {{ cookiecutter.library_name }}
        GTest::gtest
        GTest::gtest_main
)
gtest_discover_tests(testFibonacci)
