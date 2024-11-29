# Add executable for running tests
add_executable(runTests
        test_main.cpp
)

# Link GoogleTest and pthread libraries for the test executable
target_link_libraries(runTests gtest gtest_main pthread)