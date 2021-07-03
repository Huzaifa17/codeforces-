#include<stdio.h>
int main()
{
    int c=0,i;
    char s[150];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            c=1;
            break;
        }
    }
    if(c==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
