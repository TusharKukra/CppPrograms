#include <bits/stdc++.h> 
using namespace std; 
  
// Reducing the gap by a factor of 2 
int nextGap(int gap) 
{ 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 
  
// Function to merge two sorted 
// arrays with O(1) extra space 
int mergeTwoSortedArray(int* arr1, 
                        int* arr2, 
                        int n, int m) 
{ 
    int x = min(n, m); 
  
    // Form both arrays to be bitonic 
    for (int i = 0; i < x; i++) { 
        if (arr1[n - i - 1] > arr2[i]) 
            swap(arr1[n - i - 1], arr2[i]); 
    } 
  
    // Now both the arrays conatin the numbers 
    // which should be there in the result 
    // Sort the array indiviually by inplace algo 
    for (int gap = nextGap(n); gap > 0; 
         gap = nextGap(gap)) { 
  
        // Comparing elements in the first array 
        for (int i = 0; i + gap < n; i++) 
            if (arr1[i] > arr1[i + gap]) 
                swap(arr1[i], arr1[i + gap]); 
    } 
  
    // Sort the second array 
    for (int gap = nextGap(m); gap > 0; 
         gap = nextGap(gap)) { 
  
        // Comparing elements in the second array 
        for (int i = 0; i + gap < m; i++) 
            if (arr2[i] > arr2[i + gap]) 
                swap(arr2[i], arr2[i + gap]); 
    } 
    for (int i = 0; i < n; i++) 
        cout << arr1[i] << " "; 
    for (int j = 0; j < m; j++) 
        cout << arr2[j] << " "; 
    
    return 0;
} 
  
// Driver code 
int main() 
{ 
    int arr1[] = { 1, 5, 9, 10, 15, 20 }; 
    int n = sizeof(arr1) / sizeof(int); 
    int arr2[] = { 2, 3, 8, 13 }; 
    int m = sizeof(arr2) / sizeof(int); 
  
    mergeTwoSortedArray(arr1, arr2, n, m); 
  
    return 0; 
}
