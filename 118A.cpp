#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char s1[500],s2[500];
    scanf("%s",s2);
    for(i=0,k=0;s2[i]!='\0';i++){
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='A'||s2[i]=='E'||s2[i]=='I'||s2[i]=='O'||s2[i]=='U'||s2[i]=='Y'||s2[i]=='y'){
            continue;
        }
        else{
            s1[k]='.';
            k++;
            if(s2[i]>='A'&&s2[i]<='Z'){
                s1[k]=(s2[i]-'A')+'a';
                k++;
            }
            else{
                s1[k]=s2[i];
                k++;
            }
        }
    }
    s1[k]='\0';
    printf("%s\n",s1);
    return 0;
}
