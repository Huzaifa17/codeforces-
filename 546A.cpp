#include<stdio.h>
int main()
{
    int k,n,w,x;
    scanf("%d %d %d",&k,&n,&w);
    w=(((w+1)*w)/2)*k;
    if(n<w){
        printf("%d\n",w-n);
    }
    else{
        printf("0\n");
    }
    return 0;
}
