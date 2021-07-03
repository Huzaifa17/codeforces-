#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,i,j,t;
    char s[10];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",s);
        if((strcmp(s,"X++")==0)||(strcmp(s,"++X")==0))
            x++;
        else
            x--;
    }
    printf("%d\n",x);
    return 0;
}
