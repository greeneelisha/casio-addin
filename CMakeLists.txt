cmake_minimum_required(VERSION 3.15)

project(CasioAddin)

# fxSDK automatically provides the module path when using:
# fxsdk build-fx
include(GenerateG1A)

# Find the gint library
find_package(Gint 2.1 REQUIRED)

# Source files
set(SOURCES
    src/main.c
)

# Build the add-in
add_executable(CasioAddin ${SOURCES})

# Link against gint
target_link_libraries(CasioAddin
    Gint::Gint
)

# Generate the .g1a file
generate_g1a(
    TARGET CasioAddin
    OUTPUT "CasioAddin.g1a"
    NAME "CasioAddin"
)
