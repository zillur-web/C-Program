#include<stdio.h>
int summation(int n);
int main(){
    int n;
    printf("Enter The Value Of N:");
    scanf("%d",&n);
    printf("Summation= %d",summation(n));
}
int summation(int n){
    if(n == 0)
        return n;
    else
        return n+summation(n-1);
}
