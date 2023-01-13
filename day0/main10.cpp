// #include <iostream>
// using namespace std;
// int main(){
//     int num[10] = {1,2,3,4,5,6,7,8,9,0};
//     // range based for loop it is used in vector or in array
//     for(int n : num){
//         cout << n << " ";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

int main(){
    // create 2D array
    int arr[3][4];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}