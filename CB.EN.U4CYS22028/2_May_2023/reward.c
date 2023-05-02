#include <stdio.h>
int main(void){
int start,end,dist;
double reward;
printf("Enter the start of the odometer:");
scanf("%d",&start);
printf("Enter the end of the odometer:");
scanf("%d",&end);
dist=end-start;
reward=dist*50;
printf("The reward for the driver is:%f",reward);
return 0;
}

