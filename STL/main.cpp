
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout << "The element in vector are " ;
    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){

    // vector<int> v;
    // int n;
    // cin >> n;

    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // cout << v.size() << endl;

    // for(int i = 0; i<v.size(); i++){
    //     cout << v.at(i) << " ";
    // }


    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(14);

    printVec(v);


    


    // pair<int ,string> p;
    // p = make_pair(100, "ram");
    // cout << p.first << endl;
    // cout << p.second << endl;

    // pair <int ,double> p;
    
    // p = make_pair(18,23.34);
    // cout << p.first << endl;
    // cout << p.second << endl;

    // pair < double , float > a;

    // a = make_pair(23.34, 353.3);
    // cout << a.first << endl;
    // cout << a.second << endl;

    // pair <int,string> p;

    // p = {12,"ram"};
    // cout << p.first << " " << p.second << endl;
    // pair <int , string> &p1 = p;
    // p1.first = 345;
    // cout << p1.first << " " << p1.second << endl;


    // pair <int ,int> p_array[3];

    // p_array[0] = {1,2};
    // p_array[1] = {2,3};
    // p_array[2] = {3,4};

    // swap(p_array[0], p_array[1]);

    // for(int i =0; i<3; i++){
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }






    // cout << "Hello world" << endl;
    // vector <int> v;
    // v.push_back(10);
    // v[0] = 14;
    // v.push_back(12);
    // v.push_back(29);

    // vector <int> b(v);
    // // cout << b << endl;

    
    

    // cout << v[0] << endl;
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    return 0; 
}