#include "MyClass.h"
#include <stdio.h>

int main()
{
  MyClass agregator;
  int no = agregator.ReturnANumber();
  printf("Hello World. The number is: %d\n", no);
  return 0;
}