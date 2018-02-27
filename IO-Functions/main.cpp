#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << setw(10) << "Hello it's me, i was wonder if something something something something something" << endl;
    cout << setw(10) << "HIM" << endl;

    float x(4.14);

    cout << setprecision(3) << x << endl; // Hur många siffror som ska skrivas ut. Resterande kommer bli avrundat till pressisionen.

    // int y(0);
    // int result(0);

    // while(cin >> y){
    //     result += y;
    // }

    // cout << result;

    // string str;
    // string str2;

    // cin >> str >> str2;

    // cout << str << " " << str2 << endl;

    string str3;

    getline(cin, str3);
    cout << str3 << endl;

    return 0;
}
