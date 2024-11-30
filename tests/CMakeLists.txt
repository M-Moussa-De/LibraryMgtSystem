# Set the output directory for the executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add executable for running tests
add_executable(runTests
        ./../../src/media/Media.cpp
        ./../../src/media/Book.cpp
        test_main.cpp
        media/MediaTest.cpp
        media/BookTest.cpp
)

# Link GoogleTest and pthread libraries for the test executable
target_link_libraries(runTests gtest gtest_main pthread)