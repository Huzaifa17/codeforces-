#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i,j,k;
    char s[100];
    scanf("%d",&k);
    scanf("%s",s);
    for(i=0;i<k-1;i++){
        if(s[i]==s[i+1])
            count++;
    }
    printf("%d\n",count);
    return 0;
}
