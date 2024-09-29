#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string filterAndLowercase(const string& s) {
    string result;
    for (char ch : s) {
        if (isalpha(ch)) {
            result += tolower(ch);
        }
    }
    return result;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    string sum = filterAndLowercase(str1);
    string sum2 = filterAndLowercase(str2);


    if (sum == sum2) {
        cout << "identic" << endl;
    }
    else {
        cout << "not identic" << endl;
    }
    return 0;
}