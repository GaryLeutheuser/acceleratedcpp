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

    const int pad = 1;

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

        // invariant: written c characters so far in this row
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                // border
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                } 
                // padding
                else {
                    cout << " ";
                }
                // border or padding, it's one char
                ++c;
            }
        }

        cout << endl;
    }

    return 0;
}