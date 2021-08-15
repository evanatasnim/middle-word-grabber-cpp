#include <iostream>

using namespace std;

int main()
{


    string text;
    cout << "Type the text: ";
    cin >> text;
    int textLength = text.length();
    int middleIndex = textLength / 2;
    char theMiddleCharachter = text[middleIndex];
    char charachterBeforeMiddleCharacther = text[middleIndex - 1];
    cout << charachterBeforeMiddleCharacther << theMiddleCharachter << endl;

    return 0;
}
