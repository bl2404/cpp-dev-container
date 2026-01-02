project(myproj)

add_library(myproj_lib STATIC)
target_sources(myproj_lib PRIVATE MyClass.cc)
target_include_directories(myproj_lib PUBLIC .)

add_executable(myproj Main.cc)
target_sources(myproj PRIVATE MyClass.cc)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)
