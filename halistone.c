#include<stdio.h>

int halistone(int n){

    if (n==1){
        printf("%d ",1);
        return 1;
    }
    else if(n==0){
        printf("empty");
        return 0;
    }
    else if(n%2==0){
        printf("%d ,",n);
        return halistone(n/2) ;
    }
    else{
        printf("%d ,",n);
        return halistone((3*n +1));
    }

}

int main(){

    int n;

    printf("enter your number :");
    scanf("%d",&n);

    halistone(n);

}