#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int factorial = 1;	
	int x;
	x= atof(argv[1]);

	if (argc == 2){ 
	
        //calculate factorial   
        for (int i = 1; i <= x; i++){
        factorial *= i; 
}    	
	printf("factorial of %i is %i\n", x, factorial);
	printf("number is processed with %ld Bytes\n", sizeof(factorial));
}
	else{
	printf("error excactly 1 variable needed\n");
}
	return 0;
}

// programm runs correct till 12! 

