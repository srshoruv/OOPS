#include <iostream>
#include <string>
using namespace std;

class Complex{
    int real;
    int img;
public:
    Complex(int x, int y) {
        real = x;
        img = y;
    }
    void showResult(){
        cout << real << " + " << img << "i" << endl;
    }

    //operator overloading
    Complex operator + (Complex &c2) {
        int realSum = this->real + c2.real;
        int imgSum = this->img + c2.img;
        Complex c3(realSum, imgSum);
        return c3;
    }

    Complex operator - (Complex &c2) {
        int realSum = this->real - c2.real;
        int imgSum = this->img - c2.img;
        Complex c3(realSum, imgSum);
        return c3;
    }

};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1 + c2;
    Complex c4 = c2 - c1;
    c3.showResult();
    c4.showResult();
}