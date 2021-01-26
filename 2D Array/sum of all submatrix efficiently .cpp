#include <bits/stdc++.h>
#define n 3

using namespace std;

// Sum of all Submatrix from a given Matrix (Efficient Method)

// each element will be a part of more than 1 submatrix
// so, in each Submatrix the element will be contributing for the Sum

// so we have to find the contribution of each element in the Final Sum
// (Just find out: Sum of the Contribution of all elements)

// contribution = value of the element x no. of sybmatrices, this element will be part of
// Contriution = arr[i][j] * no. of submatrices


int matrixSum(int arr[][n]) 
{ 
    // Variable to store 
    // the required sum 
    int sum = 0; 
  
    // Nested loop to find the number  
    // of submatrices, each number belongs to 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) { 
  
            // Number of ways to choose 
            // from top-left elements 
            int top_left = (i + 1) * (j + 1); 
  
            // Number of ways to choose 
            // from bottom-right elements 
            int bottom_right = (n - i) * (n - j); 
            sum += (top_left * bottom_right * arr[i][j]); 
        } 
  
    return sum; 
} 
  
int main() 
{ 
    int arr[][n] = { { 1, 1, 1 }, 
                     { 1, 1, 1 }, 
                     { 1, 1, 1 } }; 
  
    cout << matrixSum(arr); 
  
    return 0; 
}
