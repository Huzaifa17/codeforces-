#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0,array[26];
    char s[150];
    scanf("%s",s);
    for(i=0;i<26;i++)
        array[i]=0;
    for(i=0;s[i]!='\0';i++){
        if(array[s[i]-97]==0){
            count++;
            array[s[i]-97]=1;
        }
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
