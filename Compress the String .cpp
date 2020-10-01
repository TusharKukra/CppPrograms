#include <bits/stdc++.h>
using namespace std;

void gen_compressed_str(string str) 
{ 
    int len = str.length(); 
    for (int i = 0; i < len; i++) { 
  
        // Count occurrences of current character 
        int count = 1; 
        while (i < len - 1 && str[i] == str[i + 1]) { 
            count++; 
            i++; 
        }
        // Print character and its count
        if (count == 1)
        {
          cout << str[i];
        }
        else
        {
          cout << str[i] << count;
        }
         
    } 
} 

int main() {
  
  string str = "wwwwaaadexxxxxxywww"; 
  gen_compressed_str(str); 
}
