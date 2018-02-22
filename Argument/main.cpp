#include <iostream>

using namespace std;

void printName(string name){
    cout << name << endl;
}


int main(){
    string name;
    cout << "What's your name?" << endl;
    cin >> name;

    printName(name);

}
