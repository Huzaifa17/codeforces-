#include<stdio.h>
int main()
{
    int i,j,count=0;
    char s[50];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='4'||s[i]=='7')
            count++;
    }
    if(count==4||count==7)
        printf("YES\n");
    else{
        printf("NO\n");
    }
    return 0;
}
