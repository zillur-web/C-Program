#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter The Value Of N:");
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        sum+=i;
    }
    printf("Summation= %d", sum);
}
