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
        include/structs/MediaDetails.h
        src/media/EBook.cpp
        include/media/EBook.h
        src/media/CD.cpp
        include/media/CD.h
        src/media/Newsletter.cpp
        include/media/Newsletter.h
        include/enums/UserRole.h
        src/user/User.cpp
        include/user/User.h
        include/structs/Address.h
        src/user/Student.cpp
        include/user/Student.h
        include/structs/PersonalInfo.h
        src/user/Staff.cpp
        include/user/Staff.h
        src/user/Guest.cpp
        include/user/Guest.h
        src/auth/Auth.cpp
        include/auth/Auth.h
)

# Link your main executable (if needed)
target_link_libraries(LibMgtSys)

# Add the subdirectory for tests
add_subdirectory(tests)