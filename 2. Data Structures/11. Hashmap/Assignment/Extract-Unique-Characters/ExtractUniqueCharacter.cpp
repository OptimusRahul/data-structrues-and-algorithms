#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>

char* uniqueChar(char *str){
    int k=0;
    unordered_map<char, bool> m;
    for(int i=0; str[i]!='\0'; i++){
        if(m.count(str[i]) > 0) continue;
        else {
            m[str[i]] = true;
            str[k] = str[i];
            k++;
        }
    }
    str[k] = '\0';
    return str;
}

int main() {
	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}
