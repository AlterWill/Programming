#include <stdio.h>
#include <string.h>

void main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    char str3[] = "Programming in C is fun!";
    char copy[50];
    char ch = 'C';
    
    // strcat - Append str2 to str1
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
    // strcmp - Compare two strings
    int cmp = strcmp(str1, str2);
    printf("String Comparison Result: %d\n", cmp);
    // strlen - Get length of str1
    printf("Length of str1: %lu\n", strlen(str1));
    // strstr - Find substring "C" in str3
    char *substr = strstr(str3, "C");
    if (substr) {
        printf("Substring 'C' found at position: %ld\n", substr - str3);
    } else {
        printf("Substring 'C' not found\n");
    }
    // strchr - Find character 'C' in str3
    char *charPos = strchr(str3, ch);
    if (charPos) {
        printf("Character 'C' found at position: %ld\n", charPos - str3);
    } else {
        printf("Character 'C' not found\n");
    } 
    // strcpy - Copy str1 to copy
    strcpy(copy, str1);
    printf("Copied String: %s\n", copy);
}
