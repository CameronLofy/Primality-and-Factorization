set(HEADER_FILES
        inc/Factorization.h inc/Primality.h)

set(SOURCE_FILES
        src/Factorization.cpp src/Primality.cpp)
include_directories(inc)
add_library(lib_lab10 STATIC ${SOURCE_FILES} ${HEADER_FILES})