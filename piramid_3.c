#include<stdio.h>

int main (){
    int i,j,k,num;
    printf("Piramit of Number:");
    scanf("%d",&num);
    for(i=0; i<num; i++){
        for(k=0; k<num-i-1; k++){
            printf(" ");
        }
        for(j=0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
