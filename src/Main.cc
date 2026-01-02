#include "MyClass.h"
#include <stdio.h>

int main()
{
  MyClass instance;
  int no = instance.ReturnANumber();
  printf("Hello World. The number is: %d\n", no);
  return 0;
}