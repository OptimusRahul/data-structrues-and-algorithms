#include <iostream>
using namespace std;
#include "Trie.h"

int main(){
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("dor");

    cout << t.search("and") << endl;

    t.removeWord("and");
    cout << t.search("and") << endl;
}