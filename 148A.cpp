#include<stdio.h>
int main()
{
    int k,l,m,n,total,count=0,i,j;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&total);
    if(k==1||m==1||n==1||l==1)
        count=0;
    else if(k==2||m==2||n==2||l==2){
        for(i=1;i<=total;i=i+2){
            if((i%k!=0)&&(i%m!=0)&&(i%n!=0)&&(i%l!=0))
                count++;
        }
    }
    else{
        for(i=1;i<=total;i=i+1){
            if((i%k!=0)&&(i%m!=0)&&(i%n!=0)&&(i%l!=0))
                count++;
        }
    }
    printf("%d\n",total-count);
    return 0;
}
