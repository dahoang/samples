#include <iostream>

using namespace std;

// TODO - Documentation for function fact()
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    cout << fact(4) << endl;
    return 0;
}