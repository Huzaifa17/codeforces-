#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,length,time;
    char s[100],ch;
    scanf("%d %d",&length,&time);
    scanf("%s",s);
    for(i=0;i<time;i++){
        for(j=0;j<length-1;j++){
            if(s[j]=='B'&&s[j+1]=='G'){
                ch=s[j];
                s[j]=s[j+1];
                s[j+1]=ch;
                j++;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}
