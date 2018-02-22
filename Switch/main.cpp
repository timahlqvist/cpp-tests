#include <iostream>

using namespace std;

int main(){

    int years;

    cout << "How long have you been married?" << endl;
    cin >> years;

    switch(years){

    case 1:
        cout << "Cotton" << endl;
        break;
    case 2:
        cout << "Paper" << endl;
        break;
    case 3:
        cout << "leather" << endl;
        break;
    case 4:
        cout << "Fruits" << endl;
        break;
    case 5:
        cout << "Wood" << endl;
        break;
    default:
        cout << "Congrats!" << endl;
    }
}
