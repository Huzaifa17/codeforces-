#include<stdio.h>
int main()
{
    int i,a,b,c,k,c1=0,c2=0,c3=0;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d %d %d",&a,&b,&c);
        c1=c1+a;
        c2=c2+b;
        c3=c3+c;
    }
    if(c1==0&&c2==0&&c3==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
