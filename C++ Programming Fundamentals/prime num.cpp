#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    int oddCount = 0;
    int evenCount = 0;
    int primeCount = 0;

    while (true) {
        std::cout << "Enter a number (enter 0 to exit): ";
        std::cin >> num;

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            std::cout << num << " is even.";
            evenCount++;
        } else {
            std::cout << num << " is odd.";
            oddCount++;
        }

        if (isPrime(num)) {
            std::cout << " It's a prime number." << std::endl;
            primeCount++;
        } else {
            std::cout << " It's not a prime number." << std::endl;
        }
    }

    std::cout << "\nTotal odd numbers entered: " << oddCount << std::endl;
    std::cout << "Total even numbers entered: " << evenCount << std::endl;
    std::cout << "Total prime numbers entered: " << primeCount << std::endl;

    return 0;
}

