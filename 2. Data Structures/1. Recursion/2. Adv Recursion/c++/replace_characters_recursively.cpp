#include <iostream>
using namespace std;

void replaceCharacterHelper(char input[],int start, char c1, char c2){
    if(input[start] == '\0') return;
    replaceCharacterHelper(input, start+1, c1, c2);
    if(input[start] == c1){
        input[start] = c2;
    }
}

void replaceCharacter(char input[], char c1, char c2) {
    replaceCharacterHelper(input, 0, c1, c2);
}

// void replaceCharacterHelper(char input[], int start, char c1, char c2) {
//     if(input[start] == '\0') return;
//     replaceCharacterHelper(input, start+1, c1, c2);
//     if(input[start] == c1){
//         input[start] == c2;
//     }
// }

// void replaceCharacter(char input[], char c1, char c2) {
//     replaceCharacterHelper(input, 0, c1, c2);
// }

int main() {
    char input[100000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;

    replaceCharacter(input, c1, c2);

    cout << input << endl;
}