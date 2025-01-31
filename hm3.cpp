#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void findPerfectNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            cout << i << " є досконалим числом." << endl;
        }
    }
}

int main() {
    int start, end;
    cout << "Введіть початок інтервалу: ";
    cin >> start;
    cout << "Введіть кінець інтервалу: ";
    cin >> end;
    findPerfectNumbers(start, end);
    return 0;
}
