#include<iostream>
using namespace std;

int main() {

    int i, t, num, arr[100];

    cout << "Enter array size:";
    cin>>num;

    cout << "Enter numbers:";
    for (i = 0; i < num; i++) {
        cin >> arr[i];
    }
    i = 0;
    while (i < num - 1) {
        t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
        i = i + 2;
    }

    cout << "Array List after Swapping:";
    for (i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
