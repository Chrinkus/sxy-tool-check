add_library(maths maths.cpp)

add_executable(catch_works main.cpp)
target_link_libraries(catch_works PRIVATE maths)
