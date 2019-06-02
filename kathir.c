#include<stdio.h>
int main()
{
int rev=0,num,rem,p;
scanf("%d",&num);
p=num;
while(num)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(rev==p)
{
printf("yes");
}
else
{
printf("no");
}
}
