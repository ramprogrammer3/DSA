#include <iostream>
using namespace std;

int countZeros(int n){

    if(n == 0) return 1;

    if(n < 10 ) return 0;
    else if(n % 10 == 0)
        return 1+ countZeros(n / 10);
    else
        return countZeros(n / 10);    
}

int main(){

    cout << countZeros(1050) << endl;

    return 0;
}