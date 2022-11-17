set(target_name "exercise")
add_executable(${target_name}
    "include/DataSourceAdapter.h"
    "include/Decorators.h"
    "include/Reporter.h"
    "include/TextReporter.h"
    "include/XmlReporter.h"
    "src/DataSourceAdapter.cpp"
    "src/Decorators.cpp"
    "src/Reporter.cpp"
    "src/TextReporter.cpp"
    "src/XmlReporter.cpp"
    "src/main.cpp")
target_include_directories(${target_name} PUBLIC include)
target_link_libraries(${target_name} data_generator)