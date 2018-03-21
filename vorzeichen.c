#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	float x;
	x= atof(argv[1]);

	if (x > 0) {
	    printf("x is biger than 0!\n");
	}
	else if (x < 0) {
	    printf("x is smaler than 0!\n");
	}
	else if (x==0) {
	    printf("x is 0!\n");
	}
        else {
           printf("error");
}
}
