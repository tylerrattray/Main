#include <iostream>
using std::string; using std::cout; using std::cin;

class Display {
public:
    void Getui(string);
    void Statement(string);
    string userinputs() { return userinput; }
private:
    string userinput{};
};

void Display::Getui(string question) {
    cout << question;
    cin >> userinput;
}

void Display::Statement(string statement) {
    cout << statement;
}

class Calculations {
    friend class Display;
public:
    void Setvalue(string);
    void Position();
    int elements() { return element; }
    int rows() { return rownum; }
private:
    string alphabet[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
    int element{}, rownum{}; string alphaelement;
};

void Calculations::Setvalue(string userinput) {
    for (int i = 25; i >= 0; i--) {
        if (alphabet[i] == userinput) {
            alphaelement = userinput;
            element = i;
            rownum = (element * 2) + 1;
        }
    }
}

void Calculations::Position() {
    int i, j, space, upperquad, counter = -1;
    upperquad = element + 1;
    space = element;
    for (i = 1; i <= upperquad; i++)
    {
        counter++;
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        cout << alphabet[counter];
        for (j = 1; j <= (2 * i - 3); j++)
            cout << " ";
        if (i != 1) {
            cout << alphabet[counter];
        }
        cout << std::endl;
    }
    space = 1;
    for (i = 1; i <= (upperquad - 1); i++)
    {
        counter--;
        for (j = 1; j <= space; j++)
            cout << " ";
        space++;
        cout << alphabet[counter];
        for (j = 1; j <= (2 * (upperquad - i) - 3); j++)
            cout << " ";
        if (i != element) {
            cout << alphabet[counter];
        }
        cout << std::endl;
    }
    cout << std::endl;
}

int main() {
    string userinput; string question; string statement;
    Calculations Calc; Display Disp;
    Disp.Getui(question = "Enter alphabet: ");
    Calc.Setvalue(Disp.userinputs());
    Calc.Setvalue(userinput);
    Calc.Position();
    return 0;
}
