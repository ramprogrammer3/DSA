#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout << "Inside function A " << endl;
    }
};
class D{
    public:
    void func4(){
        cout << "Inside function D " << endl;
    }
};

class B :public A{
    public:
    void func2(){
        cout << "Inside function B " << endl;
    }
};

class C :  public A, public D{
    public:
    void func3(){
        cout << "Inside function C " << endl;
    }
};

int main(){

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();
    object3.func4();

    return 0;
}