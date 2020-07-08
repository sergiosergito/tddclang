#include "UnitTest.h"
#include "stdio.h"

void myAssertEquals(int first, int second){
  if (first == second)
  {
  	printf(".");
  }
  else
  {
	  printf("ERROR_ %d and %d are different\n", first,second);
  }
}
