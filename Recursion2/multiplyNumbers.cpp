#include <iostream>
using namespace std;

int multiplyNumber(int n, int m){

    if(m == 0) return 0;

    int ans = n + multiplyNumber(n, m-1);

    return ans;
}

int main(){

    cout << multiplyNumber(5,3) << endl;


    return 0;
}