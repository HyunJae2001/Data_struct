//
//  Fibonacci.c
//  Data_struct
//
//  Created by HyunJae_K on 2020/07/09.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>


int fib(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        for(int i=0; i<n; i++) {
            printf("%d + ", fib(n-1));
        }
        return fib(n-1)+fib(n-2);
    }
}


int main() {
    int n, sum=0;
    scanf("%d", &n);
    
    fib(n);
//    for(int i=0; i<n; i++){
//        if(i == n-1) {
//            printf("%d = ", fib(i));
//            sum += fib(i);
//        }
//        else{
//            printf("%d + ", fib(i));
//            sum += fib(i);
//        }
//    }
//
//    printf("%d\n", sum);
    
    return 0;
}
