#include<stdio.h>
int main(){
    int i=2, n, count=0;
    printf("Enter The Value Of N: ");
    scanf("%d", &n);

    while(i<n){
        if(n%i == 0){
            count++;
            break;
        }
        i++;
    }
    if(n == 1){
        printf("%d is neither prime nor composite", n);
    }
    else{
        if(count == 1){
            printf("%d is a not Prime Number", n);
        }
        else{

            printf("%d is a Prime Number",n);
        }
    }
}
