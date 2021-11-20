#include<stdio.h>

int main(){
    int temp, num1, num2;
    printf("Enter The Value Of: Num1 & Num2 \n");
    scanf("%d %d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n%d \n%d", num1, num2);
}
