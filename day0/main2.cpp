// #include <iostream>
// using namespace std;
// int main(){
//     cout << "Ram kumar " << endl;
//     return 0;
// }


// * * *
// * * *
// * * *

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout << "*" << " ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }



// 1 1 1 
// 2 2 2
// 3 3 3

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             cout << row << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }



// 1 2 3
// 4 5 6
// 7 8 9

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int count = 1, row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             cout << count << " ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             cout << col << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 3 2 1
// 3 2 1
// 3 2 1

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while( col <= n){
//             cout << n - col + 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// *
// * *
// * * *
// * * * *


// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << "*" << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 1 
// 2 2
// 3 3 3 
// 4 4 4 4

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << row << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }



// 1 
// 2 3
// 4 5 6
// 7 8 9 10


// #include <iostream>
// using namespace std;
// int main(){
//     int row = 1, n,count = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << count << " ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 1
// 2 3
// 3 4 5 
// 4 5 6 7

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while( row <= n){
//         int col = 1;
//         while( col <= row){
//             cout << row + col - 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 1 
// 2 1
// 3 2 1
// 4 3 2 1

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while( row <= n){
//         int col =  1;
//         while(col <= row){
//             cout << row + 1 - col << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }



// A A A 
// B B B 
// C C C 

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while( row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A' + row - 1 ;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// A B C 
// A B C 
// A B C 

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A' + col - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// A B C 
// D E F 
// G H I 

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     char start = 'A';
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             cout << start << " ";
//             start = start + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// A B C 
// B C D 
// C D E 


// #include <iostream>
// using namespace std;

// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A' + col + row - 2;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }




// A
// B B 
// C C C 

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while( row <= n){
//         int col = 1;
//         while(col <= row){
//             char ch = 'A' + row - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// A 
// B C 
// D C F 
// G H I J 


// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     char start = 'A';
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << start << " ";
//             start = start + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }



// A 
// B C 
// C D E 
// D E F G 


// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             char ch = 'A' + row + col - 2;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// D 
// C D 
// B C D 
// A B C D 

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             char ch = 'A' + n + col - 1 - row;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// A B C 
// B C D 
// C D E 

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A' + row + col - 2;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


//    *
//   **
//  ***
// ****


// #include <iostream>
// using namespace std;
// int main(){
//     int row = 1, n;
//     cin >> n;
//     while( row <= n){
//         int space = n - row;
//         while(space){
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while(col <= row){
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// * * * *
// * * *
// * *
// *

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int col = n - row + 1;
//         while(col){
//             cout << "*" << " ";
//             col = col - 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 1 1 1 1 
//   2 2 2 
//     3 3 
//       4

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int space = row - 1;
//         while(space){
//             cout << " ";
//             space = space - 1;
//         }
//         int col = n - row + 1;
//         while(col){
//             cout << row ;
//             col = col - 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


//      1
//     22
//    333
//   4444

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int space = n - row;
//         while(space){
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while(col <= row){
//             cout << row;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// 1 2 3 4
//   2 3 4
//     3 4
//       4

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     while(row <= n){
//         int space = row - 1;
//         while(space){
//         cout << " ";
//         space = space - 1;
//     }
//     int col = row;
//     while(col <= n){
//         cout << col;
//         col = col + 1;
//     }
//     cout << endl;
//     row = row + 1;
//     }
// }




//    1
//   23
//  456
// 78910

// #include <iostream>
// using namespace std;
// int main(){
//     int n, row = 1;
//     cin >> n;
//     int count = 1;
//     while(row <= n){
//         int space = n - row;
//         while(space){
//             cout << "  ";
//             space = space - 1;
//         }
//         int col = 1;
//         while( col <= row){
//             cout << count << " " ;
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


//    1
//   121
//  12321
// 1234321 


// #include <iostream>
// using namespace std;
// int main(){
//     int row = 1, n;
//     cin >> n;
//     while(row <= n){
//         int space = n - row;
//         while(space){
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while(col <= row){
//             cout << col ;
//             col = col + 1;
//         }
//         int start = row - 1;
//         while(start){
//             cout << start;
//             start = start - 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }



// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1


#include <iostream>
using namespace std;
