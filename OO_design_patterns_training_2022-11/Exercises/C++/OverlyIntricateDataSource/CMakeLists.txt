set(target_name "data_generator")
add_library(${target_name} include/OverlyIntricateDataGenerator.h src/OverlyIntricateDataGenerator.cpp)
target_include_directories(${target_name} PUBLIC include)