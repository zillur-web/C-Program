#include<stdio.h>
int func(int n){
    static int count=0;
    if(n!=0){
        count++;
        return func(n/10);
    }
    else{
        return count;
    }
}
int main(){
    int  n;
    printf("Enter The Value: ");
    scanf("%d",&n);

    printf("Number of digits is : %d",func(n));
}


