
set(CORE_SOURCE
  include/core/management/registable.hpp
  src/core/management/registable.cpp

  include/core/block_collection.hpp
  src/core/block_collection.cpp

  include/core/i_executable.hpp
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
