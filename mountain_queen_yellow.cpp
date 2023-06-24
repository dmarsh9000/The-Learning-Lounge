#include <iostream>
#include <string>
#include <utility>
 
using namespace std;

//Global Variables 
const int LOUNGE_SIZE = 6;
string lounge[LOUNGE_SIZE];
 
//Function Prototypes
void initLounge();
void printLounge();
void addUser(string name);
void removeUser(string name);
int getIndexOfUser(string name);

int main()
{
    initLounge();
    printLounge();

    cout << endl;

    addUser("Joe");
    addUser("Jill");
    addUser("John");
    addUser("Jim");
    addUser("Bob");
    addUser("Suzy");

    printLounge();

    cout << endl;

    removeUser("John");

    printLounge();

    cout << endl;

    return 0;
}

//Function Definitions
void initLounge() {
    //Initialize lounge array
    for (int i = 0; i < LOUNGE_SIZE; i++) {
        lounge[i] = "";
    }
}

void printLounge() {
    //Print out the lounge array
    cout << "The Learning Lounge: ";
    for (int i = 0; i < LOUNGE_SIZE; i++) {
        if (lounge[i].length() > 0) {
            cout << lounge[i] << " ";
        }
    }
    cout << endl;
}

void addUser(string name) {
    //Add user to lounge array
    for (int i = 0; i < LOUNGE_SIZE; i++) {
        if (lounge[i].length() == 0) {
            lounge[i] = name;
            break;
        }
    }
}

void removeUser(string name) {
    //Remove user from lounge array
    int index = getIndexOfUser(name);
    if (index >= 0 && index < LOUNGE_SIZE) {
        lounge[index] = "";
    }
}

int getIndexOfUser(string name) {
    //Find the index of a user in the lounge array
    for (int i = 0; i < LOUNGE_SIZE; i++) {
        if (lounge[i] == name) {
            return i;
        }
    }
    return -1;
}