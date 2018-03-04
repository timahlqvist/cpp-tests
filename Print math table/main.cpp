#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    for(int i(1); i <= 10; i++){
        for(int x(1); x <= 10; x++){
            cout << setw(4) << i * x;
        }
        cout << endl;
    }

}
