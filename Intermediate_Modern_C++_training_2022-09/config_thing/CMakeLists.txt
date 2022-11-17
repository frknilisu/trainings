cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

# config_thing "production" version.
#
# Executable building the production version including the copying of the configuration file
#
project(config_thing_production)
add_executable(
    ${PROJECT_NAME}
    prod_main.cpp
    motor.cpp
    config.cpp
    IConfig.h
    )
add_custom_command(
    TARGET ${PROJECT_NAME}
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/config.ini ${CMAKE_CURRENT_BINARY_DIR}/config.ini
    )

# config_thing "testing" version.
#
# Executable building the testing version (using the "_TESTING" define)
#
project(config_thing_testing)
add_executable(
    ${PROJECT_NAME}
    test_main.cpp
    motor.cpp
    mockConfig.cpp
    IConfig.h
    )
#target_compile_definitions(${PROJECT_NAME} PUBLIC _TESTING)
install(
    TARGETS ${PROJECT_NAME}
    RUNTIME
    DESTINATION bin)