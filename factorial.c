#include<stdio.h>
int main(){
    int , fact=1, n;
    printf("Enter The Value Of N : \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("%d\n", fact );
//    while(i<=n){
//        fact = fact * i;
//        printf("%d\n",fact);
//        i++;
//    }
}
