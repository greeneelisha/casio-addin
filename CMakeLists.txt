cmake_minimum_required(VERSION 3.18)

project(casio_addin)

include(GenerateG1A)

set(SOURCES
    src/main.c
)

add_executable(casio_addin ${SOURCES})

target_link_libraries(casio_addin
    Gint::Gint
)

generate_g1a(
    TARGET casio_addin
    OUTPUT "CasioAddin.g1a"
    VERSION 1.0.0
)
