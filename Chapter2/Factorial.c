//
//  Factorial.c
//  Data_struct
//
//  Created by HyunJae_K on 2020/07/09.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

int factorial(int n) {
    if(n == 1) {
        return 1;
    }
    return n*factorial(n-1);
}


int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d! is %d", n, factorial(n));
    
    return 0;
}
