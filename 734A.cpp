#include<stdio.h>
int main()
{
    int i,j,k,anton=0,danik=0;
    char s[100500];
    scanf("%d",&k);
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A')
            anton++;
        else if(s[i]=='D')
            danik++;
    }
    if(anton>danik)
        printf("Anton\n");
    else if(danik>anton)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}
