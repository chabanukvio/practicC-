#include <iostream>
using namespace std;

int main() {
    int N, firstDigit, lastDigit, middleDigit, newNumber;

    // Запитуємо число від користувача
    cout << "Enter a three-digit number: ";
    cin >> N;

    // Розбиваємо число на цифри
    lastDigit = N % 10;        // Остання цифра (одиниці)
    middleDigit = (N / 10) % 10; // Друга цифра (десятки)
    firstDigit = N / 100;      // Перша цифра (сотні)

    // Складаємо нове число, помінявши першу та останню цифри місцями
    newNumber = (lastDigit * 100) + (middleDigit * 10) + firstDigit;

    // Виводимо результат
    cout << "Initial number: " << N << endl;
    cout << "Number after permutation: " << newNumber << endl;

    return 0;
}