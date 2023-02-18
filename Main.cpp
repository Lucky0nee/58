#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Class {
public:
    Class() { }

    void coutArray() {
        for (int i = 0; i < Vector.size(); i++)
            cout << Vector[i] << " ";
    }
    void PushSomething(T something) {
        Vector.push_back(something);
    }
protected:
    vector<T> Vector;
};

int main() {
    Class<int> Numbers;
    Class<char> Symbols;

    Numbers.PushSomething(1); Symbols.PushSomething('A');
    Numbers.PushSomething(2); Symbols.PushSomething('B');
    Numbers.PushSomething(3); Symbols.PushSomething('C');

    cout << "Int Array: "; Numbers.coutArray();
    cout << "\nChar Array: "; Symbols.coutArray();

    return 0;
}

/*
Створіть узагальнений клас, який містить масив довільного типу і має метод
для виведення на екран усіх елементів такого масива.
*/
