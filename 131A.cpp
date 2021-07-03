#include<stdio.h>
int main()
{
    int i,j,k,c=1,m;
    char s[150];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if((i>0)&&(s[i]>='a'&&s[i]<='z'))
            c=0;
    }
    if(c==1){
        for(i=0;s[i]!='\0';i++){
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-32;
            else if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
    }
    printf("%s\n",s);
    return 0;
}
