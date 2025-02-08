#include <iostream>
using namespace std;

int main() {
    int n, j = 2;
    cout << "Enter a number: ";
    cin >> n;
    for (j = 2; j * j <= n; j++) {
     if (n % j == 0) {
     cout << n << " is not a prime number.\nFactors: ";
    for (int k = 1; k <= n; k++) {
    if (n % k == 0) {
    cout << k << " ";
    }
     }
     cout << endl;
     break;  
        }
    }
    if (j * j > n) {
        cout << n << "  prime number.\n";
        int nextNum = n + 1;  
        while (true) {
            for (j = 2; j * j <= nextNum; j++) {
                if (nextNum % j == 0) {
                    break;  
                }
            }
            if (j * j > nextNum) {
                cout << "Next prime number is " << nextNum << endl;
                break;  
            }
            nextNum++;
        }
    }

    return 0;
}

