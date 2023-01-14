#include <iostream>
using namespace std;

bool isElementPresent(int * arr, int n, int element){
    if(n== 0) return false;
    if(arr[0]== element) return true;
    return isElementPresent(arr+1,n-1,element);
}

int main(){
    int arr[5] = {1,3,5,7,8};

    bool ans = isElementPresent(arr, 5,10);
    
    if(ans){
        cout << "Element is present " << endl;
    }else{
        cout << "Element is not present " << endl;
    }

    return 0;
}