#include <iostream>
using namespace std;

class Human{

    public:
    int height;
    int weigth;
    private:
    int age ;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weigth = w;
    }

};

class Male : protected Human{

    public:
    string color;
    void sleep(){
        cout << "male is sleeping " << endl;
    }

    int getHeight(){
        return this->height;
    }

};

int main(){


    Male m1;
    cout << m1.getHeight() << endl;
    // cout << m1.height << endl;







    // Male object1;

    // cout << object1.age << endl;
    // cout << object1.weigth << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;

    // object1.setWeight(100);
    // object1.sleep();
    // cout << object1.weigth << endl;


    return 0;
}