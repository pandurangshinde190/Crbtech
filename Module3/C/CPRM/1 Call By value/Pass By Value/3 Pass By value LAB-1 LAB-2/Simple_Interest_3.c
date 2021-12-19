#include<stdio.h>
/*
//SI = (p*n*r) / 100;
// p = Principal amount
// n = No. of Years
// r = Rate of Interest

void provoidValueForPNandR(void);
void calculateSI(int  ,int   ,float  );
void displaySI(float );

//void calculateSIandDisplay(int Pandurang ,int Ravindra  ,float Shinde );  //1. Optionl

int main(void)
{
	
	provoidValueForPNandR();

	return 0;
}

//Lets this funnction accept thevalue for P, N and R
void provoidValueForPNandR(void)
{
	int p, n;
	float r;
	//float SI;

	printf("\nEnter the principle amount :  ");
	scanf("%d",&p);

	printf("\nEnter the No. of Years : ");
	scanf("%d",&n);

	printf("\nEnter the Rate of Interest : ");
	scanf("%f",&r);

	calculateSI(p, n, r);

	//SI = (p * n * r) / 100;
	//printf("\nSimple Interest is Rs.  %f  /-", SI);

}

void calculateSI(int p, int n,float r)
{
	float SI;
	SI = (p*n*r) / 100;
	
	displaySI(SI);
	//printf("\nSimple Interest is Rs.  %f  /-", SI);
}

void displaySI(float simpleInterest)
{
	printf("\nSimple Interest is Rs.  %f  /-", simpleInterest);

}

*/