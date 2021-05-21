cmake_minimum_required(VERSION 3.16.0)

# binme   - Project to convert text to binary
set(PROJ_1 binme)
set(VERS 0.1.0)
project("${PROJ_1}" VERSION "${VERS}")
add_executable("${PROJ_1}" "src/binme.cpp")
set_property(TARGET "${PROJ_1}" PROPERTY
             CXX_STANDARD 17
				 CXX_STANDARD_REQUIRED 11)

# unbinme - Project to convert binary to text
set(PROJ_2 unbinme)
project("${PROJ_2}" VERSION "${VERS}")
add_executable("${PROJ_2}" "src/unbinme.cpp")
set_property(TARGET "${PROJ_2}" PROPERTY
             CXX_STANDARD 17
				 CXX_STANDARD_REQUIRED 11)

# Install
foreach(i "${PROJ_1}" "${PROJ_2}")
	install(TARGETS "${i}"
	        RUNTIME
	        DESTINATION bin)
	if("${CMAKE_SYSTEM_NAME}" STREQUAL "Linux")
		install(FILES "man/${i}.1"
				  DESTINATION share/man/man1)
	endif()
endforeach()

# CPack
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PROJECT_VERSION "${PROJECT_VERSION}")
set(DESTINATION "${CMAKE_INSTALL_PREFIX}")
include(CPack)
