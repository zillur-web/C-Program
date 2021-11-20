#include<stdio.h>
int fibo(int);
int main(){
    int i,n;
    printf("Enter The Value Of N: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        printf("%d \n",fibo(i));
    }
}
int fibo(int x){
    if ( x == 0 )
      return 0;
   else if ( x == 1 )
      return 1;
   else
      return fibo(x-1) + fibo(x-2) ;
}
