// input.c
// Example from C Primer Plus by Stephen Prata 
#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t start_time = clock();  // Start measuring CPU time
    
    int age;        // variable
    float assets;   // variable
    char pet[30];   // string

    printf("Enter your age, assets and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    clock_t end_time = clock();  // Stop measuring CPU time
    double cpu_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("CPU time: %f seconds\n", cpu_time);

    return 0;
}