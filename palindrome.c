#include<stdio.h>

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len = 0, isPalindrome = 1;
    int freq[256] = {0}; 

    printf("Enter any string: ");
    scanf("%s", str);

    
    while (str[len] != '\0') {
        len++;
    }

    // Q.1: Check palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

    // Q.2: Frequency counter
    for (i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c => %d\n", i, freq[i]);
    }

    return 0;
}