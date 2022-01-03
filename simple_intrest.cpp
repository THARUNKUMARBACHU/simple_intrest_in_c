//FINDING SIMPLE INTREST OF GIVEN DATA 
/*
   ALGORITHM :---
   
       Step 1 : Start.
       Step 2 : Read Principal Amount, Rate and Time.
       Step 3 : Calculate Interest using formula Simple intrest = ((principle_amount*rate_of_intrest*time)/100)
       Step 4 : Print "simple intrest of given data =  "
       Step 4:  Print Simple Interest.
       Step 5:  Stop.
*/
#include<stdio.h>
int main()
{
	int principle_amount= 2000;  // INITIALISING AND DECLARING VALUE TO principle_amount
	float rate_of_intrest = 0.5; // INITIALISING AND DECLARING VALUE TO rate_of_intrest
	int time = 1;                //INITIALISING AND DECLARING VALUE  TO time 
	float  simple_intrest= ((principle_amount*rate_of_intrest*time)/100); // FORMULA TO FIND SIMPLE INTREST 
	printf("simple intrest of given data = %.2f",simple_intrest);
	 //EXPECTED OUTPUT :-- simple intrest of given data = 10.00
}
