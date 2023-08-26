#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
    if (n<0){
        cout << "wrong input";
        exit;
    }

    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Fact of " << n << " = " << fact;

    return 0;
}
