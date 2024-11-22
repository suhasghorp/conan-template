add_library(arithmetic arithmetic.cpp)
target_include_directories(arithmetic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(arithmetic
        PUBLIC fmt::fmt
)