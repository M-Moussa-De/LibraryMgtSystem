cmake_minimum_required(VERSION 3.30)
project(LibMgtSys)

set(CMAKE_CXX_STANDARD 20)

# Fetch GoogleTest via CMake's FetchContent
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Add executable for the project
add_executable(LibMgtSys src/main.cpp
        src/media/Media.cpp
        include/media/Media.h
        include/enums/MediaStatus.h
        src/media/Book.cpp
        include/media/Book.h
        include/enums/MediaGenre.h
        include/enums/MediaLanguage.h
        include/structs/MediaDetails.cpp)

# Link your main executable (if needed)
target_link_libraries(LibMgtSys)

# Add the subdirectory for tests
add_subdirectory(tests)