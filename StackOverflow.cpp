#include <iostream>
using std::string; using std::cout; using std::cin;

class MyClass {
public:
    string userinput;
    void Elementvalue(string userinput);
    string alphabet[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    int row;
    int element;              
};

void MyClass::Elementvalue(string userinput) {
    for (int i = 25; i >= 0; i--) {
        if (alphabet[i] == userinput) {
            int element = i;
            int row = (element * 2) + 1;
            cout << element;
        }
    }
}

int main() {  
    string userinput;
    cout << "Enter alphabet: "; cin >> userinput;
    MyClass Elementvalue(string userinput);
    return 0;
}
