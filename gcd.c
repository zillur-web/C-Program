#include<stdio.h>
int main(){
    int i,n1,n2,gcd;
    printf("Enter The Value Of Two Number: ");
    scanf("%d %d", &n1,&n2);
//    for(i=1; i<=n1 && i<= n2; i++){
//        if(n1%i == 0 && n2%i == 0){
//            gcd = i;
//        }
//    }
//    printf("G.C.D of %d and %d is %d.", n1, n2, gcd);
    while(n1!=n2){
        if(n1>n2){
            n1 =n1-n2;
        }
        else{
            n2 = n2-n1;
        }
    }
    printf("G.C.D of %d and %d is %d.", n1, n2, n2);
}
