add_library(vector INTERFACE
    vector.h
)

add_executable(main main.cpp)
target_link_libraries(main vector)