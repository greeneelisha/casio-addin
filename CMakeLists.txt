cmake_minimum_required(VERSION 3.18)

project(CasioAddin)

include(GenerateG1A)

set(SOURCES
    src/main.c
)

add_executable(CasioAddin ${SOURCES})

target_link_libraries(CasioAddin
    Gint::Gint
)

generate_g1a(
    TARGET CasioAddin
    OUTPUT "CasioAddin.g1a"
)
