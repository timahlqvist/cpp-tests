#include <iostream>

using namespace std;

void printName(string name); //Tells c++ that it is a function called printName that has a string name argument.

int main(){
    string name;

    cout << "What is your name?" << endl;
    cin >> name;

    printName(name);
}

void printName(string name){

cout << name << endl;

}

