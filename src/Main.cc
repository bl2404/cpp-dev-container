#include "MyClass.h"
#include <stdio.h>

int main()
{
  MyClass agregator;
  int no = agregator.ReturnANumber();
  printf("%d", no);
  printf("Hello World\n");
  agregator.SayHello(5);
  return 0;
}