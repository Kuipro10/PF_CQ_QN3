#include <iostream>
#include <numeric> // For std::gcd

// Function to calculate the sum of all integers between 'first' and 'last' inclusive
int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

// Function to reduce the fraction by the greatest common divisor
int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // Failure to reduce if num or denom is zero or negative
    }
    int gcd = std::gcd(num, denom);
    num /= gcd;
    denom /= gcd;
    return 1; // Successfully reduced
}

int main() {
    // Testing sum_from_to function
    int first = 1, last = 5;
    std::cout << "Sum from " << first << " to " << last << " is: " << sum_from_to(first, last) << std::endl;

    // Testing reduce function
    int num = 20, denom = 50;
    if (reduce(num, denom)) {
        std::cout << "Reduced fraction: " << num << "/" << denom << std::endl;
    } else {
        std::cout << "Failed to reduce the fraction." << std::endl;
    }

    return 0;
}
