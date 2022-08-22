add_executable(testFibonacci testFibonacci.cpp)
target_link_libraries(testFibonacci
    PRIVATE
        {{ cookiecutter.cmake_project }}
        GTest::gtest
        GTest::gtest_main
)
gtest_discover_tests(testFibonacci)
