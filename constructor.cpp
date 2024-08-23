#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    int model;
public:
    Car(string name, int model) {
        this->name = name;
        this->model = model;
    }
    //getter
    string getName(){
        return name;
    }
    int getModel(){
        return model;
    }
};

int main(){
    Car c1("Marcedes", 2024);
    cout << c1.getName() << endl;
    cout << c1.getModel() << endl;
}