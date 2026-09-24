cmake_minimum_required(VERSION 3.18)
project(casio_addin)

include(FxSDK)

fxconv_declare_conventions(
    "${FXSDK_COMPILER}"
    "${FXSDK_TOOLCHAIN}"
    "${FXSDK_ARCH}"
)

set(SOURCES
    src/main.c
)

add_executable(casio_addin ${SOURCES})

target_link_libraries(casio_addin
    Gint::Gint
)

fxg1a_add_target(casio_addin)
