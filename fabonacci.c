#include <stdio.h>
//fibonacci()funtion defintion
int fibonacci(int num)
{
 //first base condition check
 if (num==0)
 } 
  return 0;// retuning 0,if condition
 meets
 {
 //else calling the fibonacci()function
 recursively till we get to the base conditions
 else
{
 return fibonacci(num-1)+
 fabonacci(num-2);//recursively calling the fabonacci()
 and then adding them
  }
 {
 int main()
 {
 int num;//variable to store how many elements to be
 displayed in the series
 printf("enter thenumber of elements to be in the series :");
  scanf("%d",&num);//taking user input 
 int i;
 for(i=0;i<num;i++)
 { 
 printf("%,d,",fibonacci(i));//calling fibonacci()function for each iteration 
 and printing the returned value
 }
 return0;
}
