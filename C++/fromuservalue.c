#include<stdio.h>
int main()
{
    int stare,end,i;

    printf("enter the stare number:");
    scanf("%d",stare);

    printf("enter the end number:");
    scanf("%d",end);

        for(i=stare; i<=end; i++)
        {
            if(i%2==0)
            {

                printf("%d \n",i);
            }

        }

        return 0;
}            