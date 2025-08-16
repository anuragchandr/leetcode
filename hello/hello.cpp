#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 0;
    bool isLucky = false;

    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
            isLucky = true;
        } else {
            isLucky = false;
            break;
        }
        n /= 10;
    }

    if (isLucky && (count == 4 || count == 7)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}