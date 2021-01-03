#include <iostream>
#include "OurMap.h"
using namespace std;

int   main(){
    OurMap<int> m;
    for(int i=0; i<10; i++){
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        int value = i + 1;
        m.insert(key, value);
        cout << m.getLoadFactor() << endl;
    }

    m.remove("abc2");
    
    for(int i=0; i<10; i++){
        char c = '0'+i;
        string key = "abc";
        key = key + c;
        cout << key << " " << m.getValue(key) << endl;
    }
    cout << m.size() << endl;
}