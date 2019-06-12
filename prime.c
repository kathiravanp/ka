#include<stdio.h>
int main()
{

    int num1,num2,i,j,count1,count2;
    scanf("%d%d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        count1=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {

                count1++;
            }
        }
        if(count1==2)
    printf("%d",i);
    }
}
