#include<stdio.h>
void main()
{
int i,num,flag=0;
printf("enter any number");
scanf("%d",&num);
for (i=2;i<num/2;i++)
flag++;
if(num%i==0)
if(flag==0)
printf("number is prime\n);
else
printf("number is not prime");
return;
}
