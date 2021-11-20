int main()
{
   int n , digit;
   int count=0;
   printf("Enter a number ");
   scanf("%d",&n);
   for(count;n!=0; count++)
   {
       n=n/10;
       digit = count++;
   }

   printf("\nThe number of digits in an integer is : %d ",digit);
    return 0;
}
