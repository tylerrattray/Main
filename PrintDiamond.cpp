#include <iostream>
using std::string; using std::cout; using std::cin;

class Calculations {
public:
    void Setvalue(string);
    int elements() { return element; }
    int rows() { return row; }
private:
    string alphabet[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };  
    int element{}, row{};
};

void Calculations::Setvalue(string userinput) {
    for (int i = 25; i >= 0; i--) {
        if (alphabet[i] == userinput) {
            element = i;
            row = (element * 2) + 1;
        }
    }
}

class Display {
public:
    void Getalpha(string);
};

void Display::Getalpha(string userinput) {

}


int main() {  
    Calculations Calc;
    string userinput;
    cout << "Enter alphabet: "; cin >> userinput;
    Calc.Setvalue(userinput);
    cout << "Element: " << Calc.elements();
    return 0;
}
