#include <iostream>
#include <string>
using namespace std;

class User{
    int id;
    string password;
public:
    string userName;
    User (int id) {
        this->id = id;
    } 

    void setPass(string password){
            this->password = password;
        }
        string getPass(){
            return password;
        }
};

int main() {
    User u1(7);
    u1.userName = "srshoruv";
    u1.setPass("srshoruv30");

    cout << u1.getPass() << endl;
    cout << u1.userName << endl;
}