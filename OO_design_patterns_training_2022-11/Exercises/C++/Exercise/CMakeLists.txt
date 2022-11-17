set(target_name "exercise")
add_executable(${target_name} include/TextReporter.h src/TextReporter.cpp src/main.cpp)
target_include_directories(${target_name} PUBLIC include)
target_link_libraries(${target_name} data_generator)