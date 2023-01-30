#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,root1,root2,D;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter c=");
scanf("%d",&c);
D=sqrt((b*b)-4*a*c);
root1=(-b+D)/2*a;
root2=(-b-D)/2*a;
if(D>0)
{
printf("root1 is%d",root1);
printf("root2 is%d",root2);
}
else
{
if(D=0)
{
printf("roots are equal\n");
printf("root1 is%d",root1);
}
else
{
printf("roots do not exist");
return 0;
}
}
}
