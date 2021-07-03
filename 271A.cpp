#include<stdio.h>
int main()
{
    int num,k,x,m,n,o;
    scanf("%d",&num);
    num++;
    while(num){
        x=num;
        k=x%10;
        x=x/10;
        m=x%10;
        x=x/10;
        n=x%10;
        x=x/10;
        o=x%10;
        if((k!=m&&k!=n&&k!=o)&&(m!=k&&m!=n&&m!=o)&&(n!=m&&n!=k&&n!=o)&&(o!=m&&o!=n&&o!=k))
            break;
        else
            num++;
    }
    printf("%d\n",num);
    return 0;
}
