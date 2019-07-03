add_executable(tests-catch tests_main.cpp tests_factorial.cpp)
target_link_libraries(tests-catch PRIVATE maths)
