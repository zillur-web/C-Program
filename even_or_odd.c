#include<stdio.h>

int main(){
    int n;
    printf("Enter The Value Of N : ");
    scanf("%d", &n);

    if(n%2 == 0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
}
