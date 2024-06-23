#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < abs(exponent); ++i) {
        result *= base;
    }
    return exponent < 0 ? 1 / result : result;
}

int main() {
    double base;
    int exponent;
    cout << "Введіть основу степеня: ";
    cin >> base;
    cout << "Введіть показник степеня: ";
    cin >> exponent;
    cout << base << " в степені " << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
