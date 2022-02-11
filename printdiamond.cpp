#include <iostream>
using std::string; using std::cout; using std::cin;
class Calculations {
public:
    void Setvalue(string);
    void Position();
private:
    string alphabet[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
    int element{};
    int elements() { return element; }
};

void Calculations::Setvalue(string userinput) {
    for (int i = 25; i >= 0; i--) {
        if (alphabet[i] == userinput) {
            element = i;
        }
    }
}

void Calculations::Position() {
    int i, j, space;
    space = element;
    for (i = 1; i <= element + 1; i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        cout << alphabet[i-1];
        for (j = 1; j <= (2 * i - 3); j++)
            cout << " ";
        if (i != 1) {
            cout << alphabet[i-1];
        }
        cout << "\n";
    }
    space = 1;
    for (i = element; i >= 1; i--)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space++;
        cout << alphabet[i-1];
        for (j = 1; j <= (2 * i - 3); j++)
            cout << " ";
        if (i != 1) {
            cout << alphabet[i-1];
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    string userinput;Calculations Calc;
    cout << "Enter alphabet:";cin >> userinput;
    Calc.Setvalue(userinput);
    Calc.Position();
}
