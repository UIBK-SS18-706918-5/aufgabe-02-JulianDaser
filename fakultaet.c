#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int faculty = 1;	
	int x;
	x= atof(argv[1]);

	if (argc == 2){ 
	
        //calculate faculty   
        for (int i = 1; i <= x; i++){
        faculty *= i; 
}    	
	printf("faculty of %i is %i\n", x, faculty);
	printf("Anzahl der Bytes von zahl: %i\n", sizeof(faculty));
}
	else{
	printf("error excactly 1 variable needed\n");
}
	return 0;
}

// programm runs correct till number 12 

