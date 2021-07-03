#include<stdio.h>
int main()
{
    int i,j,num,count=0;
    scanf("%d",&num);
    for(;num;){
        if(num>5){
            count=num/5;
            num=num%5;
        }
        else{
            if(num==5){
                count++;
                num=num%5;
            }
            else if(num==4){
                count++;
                num=num%4;
            }
            else if(num==3){
                count++;
                num=num%3;
            }
            else if(num==2){
                count++;
                num=num%2;
            }
            else if(num==1){
                count++;
                num=num%1;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
