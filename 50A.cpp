#include<stdio.h>
int main()
{
    int x,y,c;
    scanf("%d %d",&x,&y);
    if(x>y){
        c=x;
        x=y;
        y=c;
    }
    if(x%2==0){
        printf("%d\n",(x/2)*y);
    }
    else{
        printf("%d\n",((x/2)*y)+(y/2));
    }
    return 0;
}
