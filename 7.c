#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%i",&n);
    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;

}