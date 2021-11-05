#include <iostream>

using namespace std;

class User {
private:
    string netid;
    string password;
    string firstName;
    string lastName;
    int mealSwipes;
    bool isGiving;
    bool isReceiving;
    bool isActive;
public:
    User() {
        cout << "Enter First Name: " << endl;
        cin >> firstName;
        cout << "Enter Last Name: " << endl;
        cin >> lastName;
        cout << "Enter netid: " << endl;
        cin >> netid;
        cout << "Enter password: " << endl;
        cin >> password;
        cout << "How many swipes do you have?" << endl;
        cin >> mealSwipes;
    }
    string getFirstName() {
        return firstName;
    }
    string getLastName() {
        return lastName;
    }
    int getSwipes() {
        return mealSwipes;
    }
    void printInfo() {
        cout << netid << " " << password << " " << firstName << " " << lastName << " " << mealSwipes << endl;
    }
};

int main() {
    cout << "Hello, World!" << endl;
//    User usr;
//    usr.printInfo();
    return 0;
}
