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
    for (i=0; i <= len; i++) {   
        // convert values
        int val = 0;
        if (s[len-i] == 'M') {
            val = 1000;
        }
        else if (s[len-i] == 'D') {
            val = 500;
        }
        else if (s[len-i] == 'C') {
            val = 100;
        }
        else if (s[len-i] == 'L') {
            val = 50;
        }
        else if (s[len-i] == 'X') {
            val = 10;
        }
        else if (s[len-i] == 'V') {
            val = 5;
        }
        else if (s[len-i] == 'I') {
            val = 1;
        }

        // decide whether to add or subtract val
        if (val >= prev) {
            sum = sum + val;
        }
        else if (val < prev) {
            sum = sum - val;
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