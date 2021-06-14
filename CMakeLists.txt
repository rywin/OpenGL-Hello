cmake_minimum_required(VERSION 3.8...3.20)

# Set the project name.
project(HelloOpenGL)


# Add third-party libraries
add_subdirectory(vendor/glad)
add_subdirectory(vendor/glfw)


# Add an executable named 'hello-open-gl'
add_executable( hello_open_gl
    src/main.cpp
    # add addtional source files here...
)


# Optional: Use c++17 standard.
target_compile_features(hello_open_gl PUBLIC cxx_std_17)

# Link exectubale with third-party libraries.
target_link_libraries(hello_open_gl glad glfw)
