#include <iostream>
using namespace std;

bool isPositive(double n) {
    return n > 0;
}

int main() {
    double num;
    cout << "Введіть число: ";
    cin >> num;
    if (isPositive(num)) {
        cout << num << " є додатним числом." << endl;
    } else {
        cout << num << " є від'ємним числом." << endl;
    }
    return 0;
}
