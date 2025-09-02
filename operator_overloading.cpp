#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    bool operator == (const Number& n) {
        return value == n.value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Number n1(a), n2(b);
    
    cout << endl;
    cout << "Results:" << endl;
    n1.display();
    n2.display();

    if (n1 == n2)
        cout << "Both numbers are equal." << endl;
    else
        cout << "Numbers are not equal." << endl;

    return 0;
}

OUTPUT:
Enter first number: 12
Enter second number: 10

Results:
Value = 12
Value = 10
Numbers are not equal.

=== Code Execution Successful ===
