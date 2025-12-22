#include "MyClass.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, MyObjectTest)
{
  MyClass *ag = new MyClass();
  auto no = ag->ReturnANumber();
  EXPECT_EQ(no, 0);
}