#include<stdio.h>
int main()
{
    int num,num1,itr;
    scanf("%d %d",&num,&num1);
    for(itr=num;itr<=num1;itr++)
    {
        if(itr%2==0)
        {
            printf("%d",itr);
        }
    }
}
