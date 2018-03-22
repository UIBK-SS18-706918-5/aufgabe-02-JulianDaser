#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
 	int x;
        int prime;
	float rest;

	//check for correct ammount of variables
	if (argc ==2){
	x= atof(argv[1]);
		//calculate if prime number (only can be devided by 1 and itself)
 		for (prime = 2; prime <= x; prime++){
		        //NO
			rest = x % prime;
			if(rest == 0 && x !=prime){
			printf("%i is NO prime number\n", x);
			break;
			}	
			//YES
			if(prime == x){
			printf("%i is a prime number\n", x);
			}
		}
	}
	else{
	printf("error exactly 1 variable needed\n");	 
	}
	return 0;
}
