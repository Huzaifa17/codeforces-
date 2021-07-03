#include<stdio.h>
int main()
{
    int i,j,x,y,n;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        array[i]=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&j);
        array[j-1]=1;
    }
    scanf("%d",&y);
    for(i=0;i<y;i++){
        scanf("%d",&j);
        array[j-1]=1;
    }
    x=0;
    for(i=0;i<n;i++){
        if(array[i]!=1){
            x=1;
            break;
        }
    }
    if(x==1)
        printf("Oh, my keyboard!\n");
    else
        printf("I become the guy.\n");
    return 0;
}
