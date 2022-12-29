//Convert Binary to Decimal and Decimal to Binary
#include<stdio.h>
#include<math.h>
long long convert(int);
int main(){
    int a,num, binary_num, decimal_num = 0, base = 1, rem;  
    printf("Enter your choice i.e. Binary to Decimal or Decimal to Binary: ");
    scanf("%d",&a);
    if(a==1){
    printf (" Enter a binary number with the combination of 0s and 1s \n");  
    scanf (" %d", &num);   
  
    binary_num = num;   
      
      
    while ( num > 0)  
    {  
        rem = num % 10;   
        decimal_num = decimal_num + rem * base;  
        num = num / 10; 
        base = base * 2;  
    }  
  
    printf ( " The binary number is %d \t", binary_num);   
    printf (" \n The decimal number is %d \t", decimal_num);  
 
} 
else{
    int n;
    long long bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);

} 
return 0;
    }
long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) { 
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;

  } return bin;}

