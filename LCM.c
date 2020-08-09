\\Write a c program to find the LCM of two numbers using recursion
#include<studio.h>
int lcm(int a,int b);
int main()
{
int num1,int num2,LCM;
printf("enter any two numbers to find lcm :");
scanf("%d%d",&num1,&num2);
if(num1>num2)
LCM=LCM(num2,num1);
else
LCM=LCM(num1,num2);
printf("LCM of %d=%dand %d=%d",num1,num2,lcm);
return 0;
}
int lcm(int a,int b);
{
static int multiple=0;
multiple+=b;
if((multiple%a==0)&&(multiple%b==0))
{
return multiple;
}
else
{
return LCM(a,b);
}
}

