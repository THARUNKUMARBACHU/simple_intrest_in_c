
#include<stdio.h>
int main()
{
	int principle_amount= 2000;  // INITIALISING AND DECLARING VALUE TO principle_amount
	float rate_of_intrest = 0.5; // INITIALISING AND DECLARING VALUE TO rate_of_intrest
	int time = 1;                //INITIALISING AND DECLARING VALUE  TO time 
	float  simple_intrest= ((principle_amount*rate_of_intrest*time)/100); // FORMULA TO FIND SIMPLE INTREST 
	printf("simple intrest of given data = %f",simple_intrest);
	
}
