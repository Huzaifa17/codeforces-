#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        if(i==k){
            if(i%2==0){
                printf("I love it\n");
            }
            else
                printf("I hate it\n");
        }
        else{
            if(i%2==0){
                printf("I love that ");
            }
            else
                printf("I hate that ");
        }
    }
    return 0;
}
