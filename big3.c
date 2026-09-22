#include <stdio.h>
void biggest3() 
{
     int a = 11, b = 2, c = 9;

     //finding max using compound expressions
     if (a >= b && a >= c)
	   printf("%d is the largest number.",a);
     else if (b >= a && b >= c)
	   printf("%d is the largest number.",b);
     else
	   printf("%d is the largest number.",c);

    // return 0;

  }
