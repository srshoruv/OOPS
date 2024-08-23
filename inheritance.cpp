#include <iostream>
#include <string>
using namespace std;

class Animal {
    public:
        string color;
        void eat(){
            cout << "Eats" << endl;
        }
        void breathes(){
            cout << "breathes" << endl;
        }
};

class Fish : public Animal {
    public:
        int fins;
        void swim(){
            cout << "Swims..." << endl;
        }
};

int main(){
    Fish f1;
    f1.color = "white";
    f1.breathes();
    f1.swim();
}