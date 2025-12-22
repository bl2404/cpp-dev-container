project(mmarket)

add_library(mmarket_lib STATIC)
target_sources(mmarket_lib PRIVATE MyClass.cc)
target_include_directories(mmarket_lib PUBLIC .)

add_executable(mmarket Main.cc)
target_sources(mmarket PRIVATE MyClass.cc)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)
