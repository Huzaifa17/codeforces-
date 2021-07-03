#include<stdio.h>
int main()
{
    int passenger=0,max=0,a,b,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        passenger=passenger-a;
        passenger=passenger+b;
        if(passenger>max)
            max=passenger;
    }
    printf("%d\n",max);
    return 0;
}
