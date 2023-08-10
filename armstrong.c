#include <stdio.h>
#include <math.h>
//this function willwrok recursive
float checkarmstrong(int x, int size) 
  if (x > 0)
      return(pow( x%10,size));
}
//it's the driver function
int main(){
    int x;// to store the input numder
    int y,size=0;
    printf("_____enter the integer number_____\n");
    y = x;
    for (y=x;y!=0;++size){
         y\=10;
    }
    if((int)checkarmstrong(x, size)==x)
{
 printf("%d is an armstrong numder.\n"x);
    }else{
         printf("d is not an armstrong numder.\n",x);
      return0;
}
