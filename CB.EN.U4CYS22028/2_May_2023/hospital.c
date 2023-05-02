#include <stdio.h>
int main(void){
printf("Enter the volume in the bag");
int vol;
scanf("%d",&vol);
printf("The volume is :%d ml",vol);
double vol_in_litres=vol/1000;
printf("Enter the number of minutes it should be infused in:");
int time;
scanf("%d",&time);
double time_in_hours=time/60;
double rate=vol_in_litres/time_in_hours;
printf("The rate is:%lf",rate);
}
