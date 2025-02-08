#include<iostream>
#include<string>
using namespace std;

int main() {
string inputString, filteredString = "", reversedString = "";
char replacementChar = '*';
cout << "Please enter string: ";
getline(cin, inputString);
for(int i = 0; i < inputString.length(); i++) {
    char currentChar = inputString[i];
    if(currentChar >= 'A' && currentChar <= 'Z') {
        currentChar += 32;
    }
    if(currentChar != ' ') {
        filteredString = filteredString + currentChar;
    }
}
for(int i = filteredString.length() - 1; i >= 0; i--) {
    reversedString += filteredString[i];
}
if(filteredString == reversedString) {
    cout << inputString << " String is palindrome" << endl;
} else {
    cout << inputString << " String is not palindrome" << endl; 
}
for(int i = 0; i < filteredString.length(); i++) {
    char currentChar = filteredString[i];
    if(currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
        cout << replacementChar;
    } else {
        cout << currentChar;
    }
}
cout << "\nNumber of times each character appears:" << endl;
for(char currentChar = 'a'; currentChar <= 'z'; currentChar++) {
    int charCount = 0;
    for(int i = 0; i < filteredString.length(); i++) {
        if(filteredString[i] == currentChar) {
            charCount++;
        }
    }
    if(charCount > 0) {
        cout << currentChar << " = " << charCount << endl;
    }
}
return 0;
}
