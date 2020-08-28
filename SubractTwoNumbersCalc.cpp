#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c;
    cout << "Welcome to the Two Number Subtraction Calculator!" << endl;
    cout << "What is the First Number?:" << endl;
    cin >> a;
    cout << "What is the Second Number?:" << endl;
    cin >> b;
    c = a - b;
    cout << "The answer is " << c << "." << endl;
    cout << "Thank you for trying out this program!" << endl;
}
