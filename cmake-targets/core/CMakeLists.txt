
set(CORE_SOURCE
  include/core/branch.hpp
  include/core/abstract_block.hpp
  src/core/abstract_block.cpp
)

add_library(algotrain-core ${CORE_SOURCE})
target_include_directories(
  algotrain-core
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
target_link_libraries(
  algotrain-core Qt5::Core
)
