include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(builder_tests
    test_Product1.cpp
    test_ConcreteBuilder1.cpp
    test_Director.cpp
)
target_link_libraries(builder_tests PRIVATE builder_pattern_impl gtest_main)
add_test(NAME builder_tests COMMAND builder_tests)
