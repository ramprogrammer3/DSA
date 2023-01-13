#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5,6,7,8,9};
    // vector<int> :: iterator it = v.begin();

    // cout << "printing elements of vector " << endl;
    // for(it = v.begin(); it != v.end(); it++){
    //     cout << (*it) << " ";
    // }
    // cout << endl;

    vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,5}};
    vector<pair<int,int>> :: iterator it;

    for(it = v_p.begin(); it != v_p.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }




    return 0;
}