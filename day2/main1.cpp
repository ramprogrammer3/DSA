#include <iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr[7] = {3,4,8,22,3,22,8};
    cout << "Max value is " << getMax(arr,7) << endl;
    cout << "Min value is " << getMin(arr,7) << endl;
    return 0;
}