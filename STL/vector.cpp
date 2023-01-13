#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    
    cout << "The size of vector is " << v.size() << endl;

    cout << "The elements in vectors are " << " ";

    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){

    vector <int> v;
    for(int i = 0; i<10; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    return 0;
}