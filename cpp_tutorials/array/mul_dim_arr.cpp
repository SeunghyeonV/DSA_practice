#include <iostream>
using namespace std;

int main() {
    int score[3][2];

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {

            if (j==0) {
            cout << "Enter the Mathematics score of " << i+1 << " th student" << endl;
            cin >> score[i][j];
            }

            else {
            cout << "Enter the English score of " << i+1 << " th student" << endl;
            cin >> score[i][j];
            }
        }
    }

    for (int i=0; i<3; i++) {
        cout << "Mathematics score of " << i+1 << " th student: " << score[i][0] << endl;
        cout << "English score of " << i+1 << " th student: " << score[i][1] << endl;
    }

    return 0;
}