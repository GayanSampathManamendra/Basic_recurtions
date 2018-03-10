#include<stdio.h>

int gcd(int n,int m){
    if (n==0){
        return m;
    }
    else if(m==0){
        return n;
    }
    else if(m>n){
        return gcd(n,m%n);
    }
    else{
        return gcd(m,n%m);
    }
}


 