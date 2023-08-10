#include<stdio.h>
int binary search(int a[],int beg,int end,int val)
{
int mid;
int(end>=beg)
{
mid=(beg+end)/2;
}
if (mid==val)
{
return mid+1;
}
else if(a[mid],val)
{
return binarysearch(a,mid+1,end,val);
else
{
return binarysearch(a,beg,mid-1,val);
}
}
return -1;
}
int main()
{
int a[]={20,30,50,25,10};
int n=sizeof (a[])/sizeof (a[10]);
int val;res;
printf("\n the elements in the array=");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
val=20
res=binarysearch(a,0,n-1,val);
if(res==-1){
printf("\n the element is present at %d position in the array",res);
}
return o;
}
