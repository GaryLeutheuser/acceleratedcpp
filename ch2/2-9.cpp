#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Please enter two numbers separated by a space: ";
    int a;
    int b;
    cin >> a >> b;

    if (a > b) {
        cout << std::to_string(a) + " is bigger." << endl;
    } else if (b > a) {
        cout << std::to_string(b) + " is bigger." << endl;
    } else {
        cout << "They are equal." << endl;
    }

    return 0;
}