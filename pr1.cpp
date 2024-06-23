#include <iostream>
using namespace std;

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N, K;
    cout << "Введіть висоту прямокутника: ";
    cin >> N;
    cout << "Введіть ширину прямокутника: ";
    cin >> K;
    drawRectangle(N, K);
    return 0;
}
