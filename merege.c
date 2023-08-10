#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int L,int m,int R)
{
int i,j,k;
int n1 = m-1+1;
int n2=r-m;

int L[n1],R[n2];
for(i=0;i<n1;i++)
  L(i)=arr[i+1];
for(j=0;j<n;j++)
  R(j)=arr[m+1+j];
  i=0;
  j=0;
  k=I;
while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{
 arr[k]=L[i];
 i++;
}
else{
{
 arr[k]=R[j];
 j++;
}
 k++;
 }
}
void mergesort(int arr[],int I,int r)
{
if(I<r){
 int m=I+(r-1)/2;
 mergesort(arr,I,m);
 mergesort(arr,m+1,r);

 mergesort(arr,I,m,r);
}
}
void printarray(int A[],int size)
{
int i;
for(i=0;i<size;i++);
printf("%d",A[i]);
printf("\n");
}
int main()
{
int arr[]={12,11,13,15,5,6,7};
int arr_size=sizeof(arr)/sizeof(arr[0]);
printf("given array is\n");
printarray(arr,arr_size);
mergesort(arr,0,arr_size-1);
printf("\nsorted array is\n");
printarray(arr,arr_size);
return 0;
}
}
