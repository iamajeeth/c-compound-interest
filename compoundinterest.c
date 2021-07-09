#include<stdio.h>
#include<math.h>

int main() {

int principalAmount, n; 
float rateOfInterest, returns;

printf("Enter your Principal Amount:\n");
scanf("%d",&principalAmount);

printf("Enter Rate of Interest:\n");
scanf("%f",&rateOfInterest);

printf("Enter years of Investment:\n");
scanf("%d",&n);

rateOfInterest /= 100;

returns = principalAmount * pow((1+rateOfInterest), n);

printf("Your returns for amount %d at %f interest in %d years is %f", principalAmount, rateOfInterest, n,  returns);

return 0;

}

