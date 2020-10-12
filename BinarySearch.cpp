#include <bits/stdc++.h>

using namespace std;

bool Binary_Search(vector<int> arr, int s);

int main()
{
	vector<int> arr{1, 4, 5, 7, 9};
	int s = 10; // Element to be searched in the array
	bool present = Binary_Search(arr, s);

	if(present)
		cout << s << " is present in the given array " << endl;
	else
		cout << s << " is not present in the given array " << endl;

	return 0;
}

bool Binary_Search(vector<int> arr, int s)
{
	int left = 0, right = arr.size() - 1;
	int pivot; 

	while(left <= right)
	{
		pivot = left + (right - left)/2;

		if(s == arr[pivot])
			return true;
		else if(s < arr[pivot])
			right = pivot - 1;
		else
			left = pivot + 1;
	}
	return false;
}