cmake_minimum_required(VERSION 3.16.0)

# binme   - Project to convert text to binary
set(PROJ_1 binme)
project("${PROJ_1}" VERSION 0.0.1)
add_executable("${PROJ_1}" "src/binme.cpp")

# unbinme - Project to convert binary to text
set(PROJ_2 unbinme)
project("${PROJ_2}" VERSION 0.0.1)
add_executable("${PROJ_2}" "src/unbinme.cpp")
