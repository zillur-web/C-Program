#include<stdio.h>
int main(){
    int i,n, num1=0, num2=1, next;
    printf("Enter The Value Of N: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        if(i<=1){
            next = i;
        }
        else{
            next = num1+num2;
            num1 = num2;
            num2 = next;
        }
        printf("%d",next);
    }
}
