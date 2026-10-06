#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.
void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    // Loop through all possible pairs (i, j) where 1 <= i < j <= n
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            
            // Check for bitwise AND
            int and_val = i & j;
            if (and_val > max_and && and_val < k) {
                max_and = and_val;
            }
            
            // Check for bitwise OR
            int or_val = i | j;
            if (or_val > max_or && or_val < k) {
                max_or = or_val;
            }
            
            // Check for bitwise XOR
            int xor_val = i ^ j;
            if (xor_val > max_xor && xor_val < k) {
                max_xor = xor_val;
            }
        }
    }
    
    // Print the maximum values found
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
