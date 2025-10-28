#include<stdio.h>
int main(){
    int x,y;
    int a[]={1,2,3,4,5};
    printf("insert a number ");
    scanf("%d",&x);
    printf("index of number to be insert ");
    scanf("%d",&y);
    int size=sizeof(a)/sizeof(a[0]);
    for(int index=size;index>=y;index--){
        if(index!=y)
        a[index]=a[index-1];
    else 
        a[y]=x;
    }
    for(int i=0;i<=size;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}