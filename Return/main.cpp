#include <iostream>

using namespace std;

int perimeter(int base, int height){
    int x = base;
    int y = height;

    int total = base * 2 + height * 2;

    return total;
}

int main(){

    int x = perimeter(10, 5);

    cout << "perimeter = " << x << "cm" << endl;
}
