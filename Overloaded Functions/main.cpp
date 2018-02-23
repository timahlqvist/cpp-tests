#include <iostream>

using namespace std;

void printName(string name);
void printName(string name, string name2);


int main(){

string name;
string name2;

cout << "What's your name?" << endl;
cin >> name;

cout << "What is your lastname?" << endl;
cin >> name2;

printName(name);

return 0;
}

void printName(string name){
cout << name << endl;
}
void printName(string name, string name2){
cout << name << " " << name2 << endl;
}
