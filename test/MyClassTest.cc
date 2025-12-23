#include "MyClass.h"
#include <gtest/gtest.h>

TEST(HelloTest, MyObjectTest)
{
  MyClass ag;
  auto no = ag.ReturnANumber();
  EXPECT_EQ(no, 0);
}