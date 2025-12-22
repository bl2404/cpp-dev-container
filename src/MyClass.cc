#include "MyClass.h"
#include <stdio.h>

void MyClass::SayHello(int someNumber)
{
  printf("Welcome %d in another class\n", someNumber);
};

int MyClass::ReturnANumber()
{
  return 0;
};
