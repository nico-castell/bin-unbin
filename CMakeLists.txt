cmake_minimum_required(VERSION 3.16.0)

set(VERS 1.1.2)

# Add table_maker project
set(LIB_1 table_maker)
add_subdirectory("src/table_maker")

# binme - Project to convert text to binary
set(PROJ_1 binme)
project("${PROJ_1}" VERSION "${VERS}")
add_executable("${PROJ_1}" "src/binme.cpp")
target_link_libraries("${PROJ_1}" PUBLIC "${LIB_1}")

# unbinme - Project to convert binary to text
set(PROJ_2 unbinme)
project("${PROJ_2}" VERSION "${VERS}")
add_executable("${PROJ_2}" "src/unbinme.cpp")
target_link_libraries("${PROJ_2}" PUBLIC "${LIB_1}")

# Raise more errors
if(MSVC)
	foreach(proj "${PROJ_1}" "${PROJ_2}")
		target_compile_options(
			"${proj}" BEFORE
			PUBLIC /W4
		)
	endforeach()
else()
	foreach(proj "${PROJ_1}" "${PROJ_2}")
		target_compile_options(
			"${proj}" BEFORE
			PUBLIC -Wall -Wextra
		)
	endforeach()
endif()

# Install
foreach(i "${PROJ_1}" "${PROJ_2}")
	install(
		TARGETS "${i}"
		RUNTIME
		DESTINATION bin
	)
	if("${CMAKE_SYSTEM_NAME}" STREQUAL "Linux")
		install(
			FILES "man/${i}.1"
			DESTINATION share/man/man1
		)
	endif()
endforeach()

# Prepare CPack
# Common variables to all packagers
set(CPACK_PACKAGE_NAME "bin-unbin")
set(CPACK_PACKAGE_VERSION "${VERS}")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Installs two commands, binme and unbinme, that turn ASCII text to binary and viceversa.")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/nico-castell/bin-unbin")
set(CPACK_PACKAGE_DESCRIPTION_FILE "${CMAKE_SOURCE_DIR}/assets/Package-Description.txt")

# RPM (RHEL-based distros) - Use -DCPACK_BINARY_RPM=ON flag to enable it
set(CPACK_RPM_FILE_NAME "RPM-DEFAULT")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_RPM_CHANGELOG_FILE "${CMAKE_SOURCE_DIR}/assets/rpm-CHANGELOG.txt")

# DEB (Debian-based distros) - Use -DCPACK_BINARY_DEB=ON flag to enable it
set(CPACK_DEBIAN_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "$ENV{USER}")

# Windows - Use WiX tools with the flag -DCPACK_GENERATOR=WIX
if("${CMAKE_SYSTEM_NAME}" STREQUAL "Windows")
	set(CPACK_PACKAGE_ICON "${CMAKE_SOURCE_DIR}/assets\\\\logo.png")
	set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/assets/LICENSE.txt")
endif()

# Use CPack
include(CPack)
