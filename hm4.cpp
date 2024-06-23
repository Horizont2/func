#include <iostream>
#include <string>
using namespace std;

void displayCard(const string& rank, const string& suit) {
    cout << "Гральна карта: " << rank << " " << suit << endl;
}

int main() {
    string rank, suit;
    cout << "Введіть ранг карти (наприклад, 2, 3, ..., 10, J, Q, K, A): ";
    cin >> rank;
    cout << "Введіть масть карти (наприклад, Hearts, Diamonds, Clubs, Spades): ";
    cin >> suit;
    displayCard(rank, suit);
    return 0;
}
