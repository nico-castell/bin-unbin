# table_maker - Create pretty tables
project("${LIB_1}" VERSION "${VERS}")
add_library(
	"${LIB_1}" STATIC
	"table_maker.hpp"
	"table_maker.cpp"
)
target_include_directories("${LIB_1}" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
