#include<stdio.h>
int main(){
int a[]={1,2,3,4,5,6,7,76,54,32,35,985,708,43,32,23,4};
int n = sizeof(a)/sizeof(a[0]);
int max=a[0];
int max2;
for(int i=0;i<n;i++){
  if(max<a[i]){
   max2=max;
   max=a[i];
  }
else if(max2<a[i] && max2!=max){
max2=a[i];
}
}
printf("%d,%d",max,max2);
    return 0;
}