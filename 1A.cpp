#include<stdio.h>
int main()
{
    unsigned long long n,m,a,x,y,i,j;
    scanf("%llu %llu %llu",&n,&m,&a);
    if(n%a==0)
        x=n/a;
    else{
        x=n/a;
        x++;
    }
    if(m%a==0){
        y=m/a;
    }
    else{
        y=m/a;
        y++;
    }
    printf("%llu\n",x*y);
    return 0;
}
