#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int x, int y) {
        cout << "Integer Sum = " << (x + y) << endl;
    }
    Sum(float x, float y) {
        cout << "Float Sum = " << (x + y) << endl;
    }
};

int main() {
    int a, b;
    float p, q;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two floats: ";
    cin >> p >> q;
    cout << "Results:" << endl;
    Sum s1(a, b);  
    Sum s2(p, q);  

    return 0;
}

OUTPUT:
Enter two integers: 1 2
Enter two floats: 1 2
Results:
Integer Sum = 3
Float Sum = 3

=== Code Execution Successful ===
