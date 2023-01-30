#include<stdio.h>
void main()
{
int percentage;
printf("enter percentage");
scanf("%d",&percentage);
if(percentage>=80)
printf("distinction\n");
else if(percentage>=70&&percentage<70)
printf("first class\n");
else if(percentage>=60&&percentage<60)
printf("second class\n");
else if(percentage>=50&&percentage<50)
printf("fail\n");
else
printf("enter percentage between 1 to 100\n");
printf("percentage obtained is %d",percentage);
return;
}
