add_library(beast Beast.cpp)
target_compile_features(beast PRIVATE cxx_std_14)

add_executable(cmake_works main.cpp)
target_link_libraries(cmake_works PRIVATE beast)
