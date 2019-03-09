#include<stdio.h>
#include<conio.h>
void main()
{
int q[100],n,h,i,j,k,st=0,d;
float avg;
clrscr();
printf("*** Optimal Disk Scheduling Algorithm ***\n");
delay(1100);
printf("    Calculation of Avg Working Hours  \n\n");
delay(1000);
printf("Enter Number of Jobs to be Done:\t");
scanf("%d",&n);
printf("Enter Number of Minutes per Job:\t\n");
for(i=1;i<=n;i++)
{
printf("Time For Job %d:",i);
scanf("%d",&q[i]);
}
printf("Initial Time to Prepare Setup for the Day:\t");
scanf("%d",&h);
q[0]=h;
printf("\n");
for(j=0;j<=n-1;j++)
{
d=abs(q[j+1]-q[j]);
st=st+d;
printf("Time to Complete Job %d: %d mins\n",j+1,d);
}
printf("Total Work Time in the Day: %d mins\n",st);
avg=st/(float)n;
printf("Average Working Time per Job: %f mins",avg);
getch();
}


