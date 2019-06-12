#include<stdio.h>
int main()
{
    int num,itr;
    scanf("%d",&num);
    for(itr=1;itr<=num;itr++)
    {
        if(itr%5==0)
        {
            printf("%d ",itr);
        }
    }
}
