#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long main (long argc, char **argv)
{
	long factorial = 1;	
	long x;
	x= atof(argv[1]);

	if (argc == 2){ 
	
        //calculate factorial 
        for (long i = 1; i <= x; i++){
        factorial *= i; 
}    	
	printf("factorial of %ld is %ld\n", x, factorial);
	printf("number is processed with %ld Bytes\n", sizeof(factorial));
}
	else{
	printf("error excactly 1 variable needed\n");
}
	return 0;
}

// programm runs correct till 20! 

