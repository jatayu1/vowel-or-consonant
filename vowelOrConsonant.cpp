#include <iostream>
using namespace std;

int main()
{

    char letter;
    cout << "enter a letter\n";
    cin >> letter;

    switch (letter)
    {
    case 'a':
        cout << "vowel" << endl;
        break;
    case 'e':
        cout << "vowel" << endl;
        break;
    case 'i':
        cout << "vowel" << endl;
        break;
    case 'o':
        cout << "vowel" << endl;
        break;
    case 'u':
        cout << "vowel" << endl;
        break;
    default:
        cout << "consonant" << endl;
        break;
    }
}
