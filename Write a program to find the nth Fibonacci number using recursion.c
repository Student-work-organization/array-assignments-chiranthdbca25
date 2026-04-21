#include<stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return(fib(n-1)+fib(n-2));
    }
}

int main(){
    int n,res;
    printf("ENTER AN NUMBER:");
    scanf("%d",&n);
    res=fib(n);
    printf("Fibonacci of %d is = %d\n",n,res);
}


