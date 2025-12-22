include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)
add_executable(mmarket_test MyClassTest.cc)
target_link_libraries(mmarket_test GTest::gtest_main)
target_link_libraries(mmarket_test mmarket_lib)
include(GoogleTest)
gtest_discover_tests(mmarket_test)
