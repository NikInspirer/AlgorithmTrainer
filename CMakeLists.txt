cmake_minimum_required(VERSION 3.17)
project(AlgorithmTrainer)

find_package(Qt5Core)

add_subdirectory(cmake-targets/core)



add_executable(dev-test cmake-targets/dev_test/main.cpp)
target_link_libraries(dev-test PRIVATE algotrain-core)
