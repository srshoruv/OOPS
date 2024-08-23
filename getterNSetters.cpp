#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    void setName (string nam) {
        name = nam;
    }
    void setCG(float cg) {
        cgpa = cg;
    }

    string getName(){
        return name;
    }

    float getCG(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Shoruv");
    s1.setCG(3.75);

    cout << s1.getName() << endl;
    cout << s1.getCG() << endl;

    return 0;
}