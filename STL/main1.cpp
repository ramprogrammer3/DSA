#include <bits/stdc++.h>
using namespace std;

void printVec(vector <int> v){
    cout << "Size of vector is " << v.size() << endl;
    
    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void print(vector <string> &v){
    cout << "Size of string vector are " << v.size() << endl;

    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }

    cout << endl;
}

int  main(){

    vector <string> v;

    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        string s;
        cout << "Enter string " << endl;
        cin >> s;
        v.push_back(s);
    }

    print(v);

    // vector <int> v(10,3);
    // v.push_back(10);
    // printVec(v);
    // v.pop_back();
    // printVec(v);

    // vector <int> v2 = v; // order of n time 
    // v2.push_back(4);
    // v2.push_back(10);
    // printVec(v2);
    // printVec(v);

    return 0;
}