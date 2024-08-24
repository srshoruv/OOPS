#include <iostream>
using namespace std;

class Shape{
    virtual void draw() =0;
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "Drawing a circle.." << endl;
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout << "Drawing a square..." << endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
    Square sq1;
    sq1.draw();
}