#include <iostream>

int get_fibonacci_last_digit(int n) {
	if(n==0){return 0;}
	if(n==1){return 1;}
    int n3 = 0,i;
    int n1 = 0;
    int n2 = 1;
    for (i = 2; i <=n; i++) {
        n3 = (n1 + n2)%10;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
    }
