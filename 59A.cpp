#include<stdio.h>
int main()
{
    int i,j,k,c,count1=0,count2=0;
    char s[500];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            count1++;
        else if(s[i]>='A'&&s[i]<='Z')
            count2++;
    }
    if(count2>count1){
        c=1;
    }
    else
        c=-1;
    for(i=0;s[i]!='\0';i++){
        if((c==1)&&(s[i]>='a'&&s[i]<='z')){
            s[i]=s[i]-32;
        }
        else if((c==-1)&&(s[i]>='A'&&s[i]<='Z')){
            s[i]=s[i]+32;
        }
    }
    printf("%s\n",s);
    return 0;
}
