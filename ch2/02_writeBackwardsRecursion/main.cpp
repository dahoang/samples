#include <iostream>

using namespace std;

void writeBackward(string s) {
    int length = s.size();
    if (length > 0) {
        cout << s.substr(length - 1, 1);
        writeBackward(s.substr(0, length - 1));
    }
}

int main() {
    writeBackward("Hello World!");
    return 0;
}