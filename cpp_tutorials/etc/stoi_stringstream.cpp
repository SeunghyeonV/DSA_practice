#include <iostream>
#include <vector>
#include <sstream> // for stringstream

using namespace std;

int main() {
    // string to int - use std::stoi
    string sAge = "0";
    cout << "Enter age: ";
    
    getline (std::cin, sAge);
    int nAge = std::stoi(sAge);
    cout << "Your age is: " << nAge << endl;

    // int to string - use stringstream
    stringstream new_string;
    new_string << nAge;
    string a = new_string.str();

    /* ------------------------------------------------  */

    // tokenizing a string using vector
    string sentence = "This is a random string";
    vector<std::string> arr;
    stringstream ss(sentence);
    string word;

    // save words from stringstream ss by splitting it with ' ' 
    while(getline(ss, word, ' ')) {
        arr.push_back(word);
    }

    // print vector
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }

    // tokenizing a string without saving to vector
    string newSentence = "Hello my friend";
    stringstream s(newSentence);
    string newWord;

    while (s >> word) {
        cout << word << endl;
    }

    return 0;
}