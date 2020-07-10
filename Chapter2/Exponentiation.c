//
//  Exponentiation.c
//  Data_struct
//
//  Created by HyunJae_K on 2020/07/09.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>


int power(int a, int n) {
    if(n == 1) {
        return a;
    }
    else if(n%2 == 0) {
        return power(a*a, n/2);
    }
    else {
        return a*power(a*a, (n-1)/2);
    }
}


int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    
    printf("%d^%d is %d",a, n, power(a, n));
    
    return 0;
}
