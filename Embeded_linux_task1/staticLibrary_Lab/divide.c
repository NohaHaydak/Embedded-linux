#include<stdio.h>
#include<divide.h>
float divide(float numerator, float dominator)
    { 
        if (dominator == 0) // check if you are dividing by zero
        {
       	   printf("can't perform division");
           return 0;
        }

        else 
        {// Perform division
            float result = numerator / dominator;
	    return result;
        }

    }
