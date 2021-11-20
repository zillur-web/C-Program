#include<stdio.h>
int fnc(int x);
int main(){
    int n;
    printf("Enter The Value Of n: ");
    scanf("%d",&n);

    printf("Summation Of N Natural Number: %d",fnc(n));
}
int fnc(int x){

    if(x==0)
        return x;
    else{

        return x+ fnc(x-1);
    }
}

