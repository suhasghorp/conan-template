add_executable(unit_tests
        arithmetic/arithmetic_test.cpp
        )
target_link_libraries(unit_tests PRIVATE arithmetic GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)