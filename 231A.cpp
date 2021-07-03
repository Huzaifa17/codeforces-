#include<stdio.h>
int main()
{
    int count=0,a,b,c,t,i,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        k=a+b+c;
        if(k>=2){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
