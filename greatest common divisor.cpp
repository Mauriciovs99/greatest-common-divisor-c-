//Greatest common divisor
#include <stdio.h>
#include <math.h>

main(){
	int number1=0;
	int number2=0;
	int n=0;
	int gcd=1; //acronym of greatest common divisor
	
	printf ("Write the two numbers\n");
	scanf ("%d", &number1); //saves the first number
	scanf ("%d", &number2); // sdaves the second number
	
	while (number1%2==0 || number2%2==0){ // Try to divide any number or both by 2 many times until no number can be divided anymore (if both were divided, 2 is a factor of gcd).
		if(number1%2==0){ //if number1 can be divided, add 1 to n
		number1=number1/2;
		n=n+1;
		}
		if (number2%2==0){ //if number2 can be divided, add 1 to n
		number2=number2/2;
		n=n+1;
		}
		if(n==2){ // if both were divider, n has to have 2 in its count, so multiply 2 to gcd and accumulate factors as possible.
			gcd=gcd*2;
		}
		n=0; //the count resets to 0
	}

	for (int i=3;i<=sqrt(number1>number2? number1:number2);i+=2){ //starting by 3, adding 2 and ending in the root of the greatest number, try to divide both numbers.
		
		while (number1%i==0 || number2%i==0){//this is the same procedure of the first block (the block of dividing by 2), the difference is that this starts dividing all by 3, then by 5, 7, etc., ending in the root of the greatest number
		
		
		if(!(number1%i)){
			n=n+1;
			number1=number1/i;
		}
		
		if(!(number2%i)){
			n=n+1;
			number2=number2/i;
		}
		
		if(n==2){
		gcd=gcd*i;
		}
		n=0;
	}
		
	}
	if (number1==number2 && number1!=1){// If the numbers are equal and different from 1, multiply that number just once for all the accumulated of the gcd 
		gcd=gcd*number1;
	}
	printf ("%d", gcd); //print the gcd
}
