// Statement :
Given an array of patterns containing only I’s and D’s. I for increasing and D for decreasing. Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can’t repeat.

Input Format
The First Line contains an Integer N, size of the array. Next Line contains N Strings separated by space.

Constraints
1 ≤ T ≤ 100 1 ≤ Length of String ≤ 8

Output Format
Print the minimum number for each String separated by a new Line.

Sample Input
4
D I DD II
Sample Output
21
12
321 
123
Explanation
For the Given sample case, For a Pattern of 'D' print a decreasing sequence which is 2 1.
  
// Code : 
  
#include <bits/stdc++.h>
using namespace std;
 
// Prints the minimum number that can be formed from
// input sequence of I's and D's
void PrintMinNumberForPattern(string arr)
{
    // Initialize current_max (to make sure that
    // we don't use repeated character
    int curr_max = 0;
 
    // Initialize last_entry (Keeps track for
    // last printed digit)
    int last_entry = 0;
 
    int j;
 
    // Iterate over input array
    for (int i=0; i<arr.length(); i++)
    {
        // Initialize 'noOfNextD' to get count of
        // next D's available
        int noOfNextD = 0;
 
        switch(arr[i])
        {
        case 'I':
            // If letter is 'I'
 
            // Calculate number of next consecutive D's
            // available
            j = i+1;
            while (arr[j] == 'D' && j < arr.length())
            {
                noOfNextD++;
                j++;
            }
               
            if (i==0)
            {
                curr_max = noOfNextD + 2;
 
                // If 'I' is first letter, print incremented
                // sequence from 1
                cout<< ++last_entry;
                cout  << curr_max;
 
                // Set max digit reached
                last_entry = curr_max;
            }
            else
            {
                // If not first letter
 
                // Get next digit to print
                curr_max = curr_max + noOfNextD + 1;
 
                // Print digit for I
                last_entry = curr_max;
                cout  << last_entry;
            }
 
            // For all next consecutive 'D' print
            // decremented sequence
            for (int k=0; k<noOfNextD; k++)
            {
                cout<< --last_entry;
                i++;
            }
            break;
 
        // If letter is 'D'
        case 'D':
            if (i == 0)
            {
                // If 'D' is first letter in sequence
                // Find number of Next D's available
                j = i+1;
                while (arr[j] == 'D' && j < arr.length())
                {
                    noOfNextD++;
                    j++;
                }
 
                // Calculate first digit to print based on
                // number of consecutive D's
                curr_max = noOfNextD + 2;
 
                // Print twice for the first time
                cout << curr_max << curr_max - 1;
 
                // Store last entry
                last_entry = curr_max - 1;
            }
            else
            {
                // If current 'D' is not first letter
 
                // Decrement last_entry
                cout << last_entry - 1;
                last_entry--;
            }
            break;
        }
    }
    cout << endl;
}
 
// Driver program to test above
int main()
{
    string str[101];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	
	for(int i=0;i<n;i++){
	PrintMinNumberForPattern(str[i]);
	
	}
    return 0;
}
