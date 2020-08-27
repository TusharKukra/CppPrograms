/ An efficient C++ program to print all 
// rotations of a string. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Print all the rotated string. 
void printRotatedString(char str[]) 
{ 
    int n = strlen(str); 
  
    // Concatenate str with itself 
    char temp[2*n + 1]; 
    strcpy(temp, str); 
    strcat(temp, str); 
  
    // Print all substrings of size n. 
    // Note that size of temp is 2n 
    for (int i = 0; i < n; i++) 
    { 
        for (int j=0; j != n; j++) 
            printf("%c",temp[i + j]); 
        printf("\n"); 
    } 
} 
  
// Driven Program 
int main() 
{ 
    char str[] = "geeks"; 
    printRotatedString(str); 
    return 0; 
}
