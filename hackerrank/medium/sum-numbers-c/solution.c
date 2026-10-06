#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    float c, d;
    
    // Read two integers
    scanf("%d %d", &a, &b);
    
    // Read two floating-point numbers
    scanf("%f %f", &c, &d);
    
    // Print sum and difference of integers
    printf("%d %d\n", a + b, a - b);
    
    // Print sum and difference of floats rounded to one decimal place
    printf("%.1f %.1f\n", c + d, c - d);
    
    return 0;
}
