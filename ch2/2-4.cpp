#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // ask for the person's name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";

    const int pad = 3;

    // padding on each side, plus top row, greeting, bottom row
    const int rows = pad * 2 + 3;

    // padding on each side, plus the border stars themselves
    const string::size_type cols = greeting.size() + (pad * 2) + 2;

    cout << endl;

    int r = 0;
    // invariant: written r rows so far
    for (int r = 0; r != rows; ++r) {
        // few cases - on the border, in the padding, greeting
        string::size_type c = 0;

        // greeting line
        if (r == pad + 1) {
            cout << "*" + string(pad, ' ') + greeting + string(pad, ' ') + "*";
        }
        // all border or padding line
        else if (r == 0 || r == rows - 1) {
            cout << string(cols, '*');
        } else {
            cout << ("*" + string(cols - 2, ' ') + "*");
        }

        cout << endl;
    }

    return 0;
}