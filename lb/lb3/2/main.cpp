#include <iostream>
#include <string> // Для роботи з рядками типу string
using namespace std;

int main() {
    string riverName;
    int vowelCount = 0;


    cout << "Write the name of the river: "; // Запитуємо рядок від користувача
    getline(cin, riverName); // Використовуємо getline, щоб врахувати пробіли


    for (int i = 0; i < riverName.length(); i++) { // Проходимо по кожному символу рядка
        char currentChar = riverName[i]; // Поточний символ

        // Перевіряємо, чи є поточний символ голосною літерою
        switch (currentChar) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                vowelCount++; // Якщо так, збільшуємо лічильник
                break;
                // Для решти символів (приголосні, пробіли, цифри) нічого не робимо
        }
    }

    // Виводимо результат
    cout << "Name of the river: \"" << riverName << "\"" << endl;
    cout << "Size name: " << riverName.length() << " symbols" << endl;
    cout << "Numbers of vowels: " << vowelCount << endl;

    return 0;
}