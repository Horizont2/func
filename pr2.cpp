#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;
    cout << "Факторіал " << num << " = " << factorial(num) << endl;
    return 0;
}
