cmake_minimum_required(VERSION 3.16.0)

# binme   - Project to convert text to binary
set(PROJ_1 binme)
set(VERS 1.0.0)
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

# Prepare CPack
# Common variables to all packagers
set(CPACK_PACKAGE_NAME "bin-unbin")
set(CPACK_PACKAGE_VERSION "${VERS}")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Installs two commands, binme and unbinme, that turn ASCII text to binary and viceversa.")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://github.com/nico-castell/bin-unbin")

# License file (Must be encoded using ISO-8859-15 and is used by NSIS on Windows)
if(EXISTS "${CMAKE_SOURCE_DIR}/LICENSE1")
	set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/LICENSE1")
endif()

# RPM (RHEL-based distros) - Use -DCMAKE_BINARY_RPM=ON flag to enable it
set(CPACK_RPM_FILE_NAME "RPM-DEFAULT")
set(CPACK_RPM_PACKAGE_LICENSE "MIT License")

# DEB (Debian-based distros) - Use -DCMAKE_BINARY_DEB=ON flag to enable it
set(CPACK_DEBIAN_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "$ENV{USER}")

# Windows
if("${CMAKE_SYSTEM_NAME}" STREQUAL "Windows")
	set(CPACK_PACKAGE_ICON "${CMAKE_SOURCE_DIR}/assets\\\\logo.png")
endif()

# Use CPack
include(CPack)
