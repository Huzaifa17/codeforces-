#include<stdio.h>
int main()
{
    int i,j,t,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&j);
        if(j==1)
            c=1;
    }
    if(c==0)
        printf("EASY\n");
    else
        printf("HARD\n");
    return 0;
}
