#include<stdio.h>
int main()
{
    int i,j,k,d1,d2;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&k);
            if(k==1){
               d1=i;
               d2=j;
            }
        }
    }
    if(d1<3)
        d1=3-d1;
    else{
        d1=d1-3;
    }
    if(d2<3)
        d2=3-d2;
    else{
        d2=d2-3;
    }
    printf("%d\n",d1+d2);
    return 0;
}
