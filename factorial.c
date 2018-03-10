#include<stdio.h>

int factorial(n){

    if(n==1){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}

int main (){
    int n;
    printf("enter your number :");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;