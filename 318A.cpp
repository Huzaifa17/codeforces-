#include<stdio.h>
int main()
{
    unsigned long long int i,j,t1,t2,k,m,even,odd;
    scanf("%llu %llu",&t1,&t2);
    if(t1%2==0){
        odd=t1/2;
        even=t1-odd;
    }
    else{
        odd=(t1/2)+1;
        even=t1-odd;
    }
    if(t2>=1&&t2<=odd){
        printf("%llu\n",(2*t2)-1);
    }
    else{
        t2=t2-odd;
        printf("%llu\n",(2*t2));
    }
    return 0;
}
