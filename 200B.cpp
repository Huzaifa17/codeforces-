#include<stdio.h>
int main()
{
long long i,n;
scanf("%lld",&n);
double a[n],x=0;
for(i=1;i<=n;i++)
{scanf("%lf",&a[i]);
x+=a[i];
}
x=x/n;
printf("%lf\n",x);
return 0;
}
