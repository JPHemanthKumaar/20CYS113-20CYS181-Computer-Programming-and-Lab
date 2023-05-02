#include <stdio.h>
int main(void){
printf("Enter the number of hours the freezer has run:");
int t;
double temp;
scanf("%d",&t);
temp=((4*t*t)/(t+2))-20;
printf("The temperature of the freezer is: %lf",temp);
}
