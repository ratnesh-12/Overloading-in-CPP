# Overloading-in-CPP

## Aim

To study and implement the concept of **Overloading in C++**, demonstrating function overloading and operator overloading.

## Theory

Overloading in C++ allows using the same function or operator name with different meanings, depending on the context. It improves code readability and flexibility.

### Types of Overloading

1. **Function Overloading** – Defining multiple functions with the same name but different parameter lists (number or type of arguments).
2. **Operator Overloading** – Redefining the behavior of operators (like `+`, `-`, `*`, `==`) for user-defined types such as classes.

### Example of Function Overloading

```cpp
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "Sum (int): " << m.add(5, 10) << endl;
    cout << "Sum (double): " << m.add(2.5, 3.7) << endl;
    return 0;
}
```

### Example of Operator Overloading

```cpp
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
```

## Output (Example)

```
Sum (int): 15
Sum (double): 6.2
4 + 6i
```

## Conclusion

The experiment demonstrates how overloading allows using the same name for different functions and redefining operators for user-defined types. This enhances code clarity and supports object-oriented programming principles.
