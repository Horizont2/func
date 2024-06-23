#include <iostream>
using namespace std;

double cube(double n) {
    return n * n * n;
}

int main() {
    double num;
    cout << "Введіть число: ";
    cin >> num;
    cout << "Куб числа " << num << " = " << cube(num) << endl;
    return 0;
}
