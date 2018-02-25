#include <iostream>
#include <climits>

using namespace std;

int main(){

    unsigned int x = 122;
    unsigned int y = -122;

    long int z = 365;
    short int a = 12;

    cout << INT_MAX << "    -    " << INT_MIN << endl;
    cout << UINT_MAX << "    -    " << 0 << endl;

    cout << y << endl;

    cout << sizeof(z) << endl;
    cout << sizeof(a) << endl;

    return 0;
}
