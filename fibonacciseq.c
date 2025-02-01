#include <stdio.h>

// Main function
int main() {
    int num; // Number of terms in Fibonacci series
    int n1 = 0, n2 = 1, n3; // First two Fibonacci numbers 
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &num);
    printf("\n%d %d ", n1, n2); // Print the first two Fibonacci numbers
        // Print the Fibonacci series
    for (int i = 2; i <num; i++) {
          
        // Calculate the next Fibonacci number
         n3 = n1+ n2;
         printf("%d ", n3);
         n1 =n2;
         n2 =n3;
        }
    return 0;
}
