#include<stdio.h> 
int main(){

    int i,j;

    printf("enter the number: ");
    scanf("%d",&j);

    for(i=1; i<=j; i++){
        
        if(i%2==0)
        {
            printf("%d\t",i*i);

        }else{

            printf("%d\t",i);
        }
    }

    return 0;
}