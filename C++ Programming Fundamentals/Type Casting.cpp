#include <iostream>
using namespace std;
int main() {
    // Implicit typecasting
    int integerValue = 10;
    double doubleValue = integerValue;  // Implicit conversion from int to double

    cout << "Implicit typecasting:\n";
    cout << "Integer value: " << integerValue << "\n";
    cout << "Double value (implicitly casted): " << doubleValue << "\n\n";

    // Explicit typecasting
    double anotherDoubleValue = 20.5;
    int anotherIntegerValue = static_cast<int>(anotherDoubleValue);  // Explicit conversion from double to int

    cout << "Explicit typecasting:\n";
    cout << "Double value: " << anotherDoubleValue << "\n";
    cout << "Integer value (explicitly casted): " << anotherIntegerValue << "\n";

    return 0;
}


