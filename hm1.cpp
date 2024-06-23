#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent) {
    return pow(base, exponent);
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
