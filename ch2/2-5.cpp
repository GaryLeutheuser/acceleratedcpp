#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {
    // Square
    {
        cout << "Square." << endl;
        const int side_length = 5;
        for (int i = 0; i != side_length; ++i) {
            cout << string(side_length, '*') << endl;
        }
    }

    cout << endl;

    // Rectangle
    {
        cout << "Rectangle." << endl;
        const int width = 20;
        const int height = 5;
        for (int i = 0; i != height; ++i) {
            cout << string(width, '*') << endl;
        }
    }

    cout << endl;

    // Triangle
    {
        cout << "Triangle." << endl;
        const int height = 10;
        for (int i = 0; i != height; ++i) {
            cout << string(i + 1, '*') << endl;
        }
    }

    return 0;
}