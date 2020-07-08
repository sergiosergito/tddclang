#include "UnitTest.h"
#include "stdio.h"

void myAssertEqualsInt(int first, int second){
  if (first == second)
  {
  	printf(".");
  }
  else
  {
	  printf("ERROR_ %d and %d are different\n", first,second);
  }
}

void myAssertEqualsFloat(float first, float second){
  if (first == second)
  {
  	printf(".");
  }
  else
  {
	  printf("ERROR_ %f and %f are different\n", first,second);
  }
}
