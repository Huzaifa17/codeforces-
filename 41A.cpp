#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,length,k,c=0;
    char s1[150],s2[150];
    scanf("%s",s1);
    scanf("%s",s2);
    length=strlen(s1);
    for(j=0,i=length-1;i>=0;i--,j++){
        if(s1[i]!=s2[j]){
            c=1;
            break;
        }
    }
    if(c==1)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
