#include<stdio.h>
#include<string.h>
int main(){
    char ch[10];
    printf("enter a string : ");
    fgets(ch,10,stdin);
    int i = 0;
    int sum = 0 ; 
    for(i=0;i<10;i++){
        if(ch[i]=='a') sum++;
    }
    printf("%d",sum);
    return 0 ; 
}