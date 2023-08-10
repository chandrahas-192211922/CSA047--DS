#include<stdio.h>
int main()
{
int n,reversed=0,reminder,original;
printf("enter the number");
scanf("%d",&n);
original=n;
while(n!=0){
reminder=n%10;
reversed=reversed*10+reminder;
n/=10;
}
if(original==reversed)
printf("%d is a palindrome",original);
else
printf("%d is not a palindrome",original);
return 0;
}
