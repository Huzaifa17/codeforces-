#include<stdio.h>
int main()
{
    int i,j;
    char s[1500];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if((s[i]>='a'&&s[i]<='z')&&(i==0)){
            s[i]=s[i]-32;
        }
    }
    printf("%s\n",s);
    return 0;
}
