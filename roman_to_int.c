// roman_to_int.c
// Leetcode problem #13
#include <stdio.h>
#include <string.h>

int romanToInt(char * s) {

    int len = strlen(s);    // length of string
    int sum = 0;            // total 
    int prev = 0;           // previous iteration's value

    // convert Roman numerals to integer values 
    // then add to or subtract from the sum
    int i = 0;
    for (i= len - 1; i >= 0 ; i--) {   
        // convert values
        int val = 0;
        if (s[i] == 'M') {
            val = 1000;
        }
        else if (s[i] == 'D') {
            val = 500;
        }
        else if (s[i] == 'C') {
            val = 100;
        }
        else if (s[i] == 'L') {
            val = 50;
        }
        else if (s[i] == 'X') {
            val = 10;
        }
        else if (s[i] == 'V') {
            val = 5;
        }
        else if (s[i] == 'I') {
            val = 1;
        }

        // decide whether to add or subtract val
        if (val >= prev) {
            sum += val;
        }
        else if (val < prev) {
;
        }

        prev = val; // update prev before next loop

    }
    return sum;
}

int main(void) {
    char* s = "MCMIV";
    printf("%d",romanToInt(s));
    return 0;
}