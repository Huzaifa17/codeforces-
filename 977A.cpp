#include<stdio.h>
int main()
{
    int num,k,i,j;
    scanf("%d %d",&num,&k);
    for(i=0;i<k;i++){
        if(num%10==0)
            num=num/10;
        else
            num--;
    }
    printf("%d\n",num);
    return 0;
}
