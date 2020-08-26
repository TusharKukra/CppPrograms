#include<bits/stdc++.h>

using namespace std;
 void maxmin(int a[],int n)

{
    // Find maximum value in the array
    int max_val = *max_element(a, a + n);

    // USE SIEVE TO FIND ALL PRIME NUMBERS LESS
    // THAN OR EQUAL TO max_val
    // Create a boolean array "prime[0..n]". A
    // value in prime[i] will finally be false
    // if i is Not a prime, else true.
    vector<bool> prime(max_val + 1, true);

    // Remaining part of SIEVE
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= max_val; p++) {

        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true) {

            // Update all multiples of p
            for (int i = p * 2; i <= max_val; i += p)
                prime[i] = false;
        }
    }

    // Minimum and Maximum prime number
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
        if (prime[a[i]]) {
            minimum = min(minimum, a[i]);
            maximum = max(maximum, a[i]);
        }

    cout << "Minimum : " << minimum << endl;
    cout << "Maximum : " << maximum << endl;
}

int main()
{ int size,i,a[100];
  cout<<"enter array size(max 100)\n";
  cin>>size;
   cout<<"enter array elements \n";
   for(i=0;i<size;i++)
   {
       cin>>a[i];

   }
   maxmin(a,size);
    return 0;
}
