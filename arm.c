#include<stdio.h>
#include<math.h>
int main()
{
int num,dig,ori,count=0,sum=0,safe=0,val,temp;
scanf("%d",&num);
ori=num;
while(num!=0)
{
    num=num/10;
    count++;
}
safe=ori;
while(ori)
{
    dig=ori%10;
    val=1;
        temp=count;
while(count>0)
{
    val=val*dig;
    count--;
}
        count=temp;
    sum=sum+val;
    ori=ori/10;
    //printf("\nsum=%d \n",sum);
}
//printf("sum %d",sum);
if(safe==sum)
{
    printf("armstromr number");
}
else
{

    printf("not armstrong number");
}
}
