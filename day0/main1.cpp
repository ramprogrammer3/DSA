#include <iostream>
using namespace std;
int main(){
    cout << "Helllo world ";
    return 0;
}


// sum of two number
#include <iostream>
using namespace std;
int main(){
    int n1, n2, sum;
    cin >> n1 >> n2;
    sum =  n1 + n2;
    cout << "sum " << sum; 
}

// sum of two number

#include <iostream>
using namespace std;
int sum(int n1,int n2){
    int sum;
    return n1 + n2;
}
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    cout << sum(n1,n2)<< endl;
    return 0;
}

// find average of three number

#include <iostream>
using namespace std;
int average(int n1, int n2, int n3){
    int average;
    average = (n1 + n2 + n3) / 3;
    return average;
}
int main(){
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    cout << "average = " << average(n1,n2,n3) << endl;
    return 0;
}


//  check greater or less 


#include <iostream>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    if(a > b){
        cout << " A  is greater " << endl;
    }else{
        cout << " B is greater " << endl;
    }
    return 0;
}



// check even number

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "number is even " << endl;
    }else{
        cout << "number is odd " << endl;
    }
}



// check positive , negative, or zero

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n > 0){
        cout << "number is positive " << endl;
    }else if(n == 0){
        cout << "number is zero " << endl;
    }else{
        cout << "number is negative  " << endl;
    }
    return 0;
}


// valid triangle or not 

#include <iostream>
using namespace std;
int main(){
    int a , b, c;
    cin >> a >> b >> c;
    if( a + b > c &&  b + c >> a && c + a > b){
        cout << " Triangle is valid " << endl;
    }else{
        cout << "Triangle is not valid " << endl;
    }
    return 0;
}


// print 1 to n;

#include <iostream>
using namespace std;
int main(){
    int n, i = 1;
    cin >> n;
    while(i <= n){
        cout << i << " ";
        i = i + 1;
    }
    return 0;
}



// print 1 to n even number

#include <iostream>
using namespace std;
int main(){
    int n, i = 2;
    cin >> n;
    while(i <= n){
        if(i % 2 == 0){
            cout << i << " ";
        }
        i = i + 1;
    }
}


// print 1 to n odd number

#include <iostream>
using namespace std;
int main(){
    int n, i = 1;
    cin >> n;
    if( n < 0){
        n = -n;
    }
    while(i <= n){
        if(i % 2 != 0){
            cout << i << " ";
        }
        i = i + 1;
    }
    return 0;
}


// odd number 1 to n

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n < 0){
        int i = 0;
        while( n <= i){
            if(n % 2 != 0){
                cout << n << " ";
            }
            n = n + 1;
        }
    }
    else{
        int i = 1;
        while(i <= n){
        if(i % 2 != 0){
            cout << i << " ";
        }
        i = i + 1;
    }
    }
    return 0;
}


// find sum 1 to n or -1 to n;

#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    if(n < 0){
        int i = 0;
        while(n <= i){
            sum = sum + n;
            n = n + 1;
        }
    }else{
        int i = 1;
        while(i <= n){
            sum = sum + i;
            i = i + 1;
        }
    }
    cout << " sum " << sum << endl;
}


// find factorial from 1 to n;

#include <iostream>
using namespace std;
int main(){
    int i = 1, n, factorial = 1;
    cin >> n;
    while(i <= n){
        factorial = factorial * i;
        i = i + 1;
    }
    cout << "Factorial " << factorial ;
    return 0;
}


// check prime number or not prime number

#include <iostream>
using namespace std;
int main(){
    int i = 2, n, checkprime = true;
    cin >> n;
    if(n < 0){
        n  = -n;
    }
    while(i < n){
        if(n % i == 0){
            checkprime = false;
            break;
        }
        i = i + 1;
    }
    if(checkprime){
        cout << "Number is a prime " << endl;
    }else{
        cout << "Number is not a prime " << endl;
    }
    return 0;
}


// 'a' to 'z' print lowercase
// 'A' to 'Z' print uppercase
// 0 to 9 Numeric character

#include <iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if( ch >= 65 && ch <=90){
        cout << "Uppercase " << ch << endl;
    }else if( ch >= 97 && ch <= 122){
        cout << "Lowercase " << ch << endl;
    }else if(ch >= 48 && ch <= 57){
        cout << "Numeric " << ch << endl;
    }
    return 0;
}


// fahrenheight to celcius

#include <iostream>
using namespace std;
int main(){
    double n, celcius;
    cout << "Enter temprature in fahrenheight ";
    cin >> n;
    celcius = (n -32.0) * 5.0/9.0;
    cout << celcius << endl;
    return 0;
}