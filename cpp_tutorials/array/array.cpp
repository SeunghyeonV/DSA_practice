#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char string1[30] = "computer";
    char string2[30] = {'c','o','m','p','u','t','e','r', '\0'};
    cout << string1 << endl;

    for(int i=0; string1[i]!='\0'; i++) { // when string1[i] is not null
        cout << string1[i];
    }
    cout << endl;

    for(int i=0; string2[i]!='\0'; i++) {
    cout << string2[i];
    }
    cout << endl;

    cout << "Length of string: " << strlen(string1) << endl; // return length of string


    char s_string[100] = "C++ is very interesting! ";
    char d_string[100];
    char f_string[100] = "C++ is also difficult though..";

    strcpy_s(d_string, s_string); // copy string, don't use strcpy as it is unsafe
    cout << d_string << endl;
    strcat_s(d_string, 100, f_string); // concatenate strings to first string
    cout << d_string << endl;
    cout << strcmp(f_string, f_string) << endl; // return 0 or 1. 0=same, 1=different
}