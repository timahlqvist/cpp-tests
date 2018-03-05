#include <iostream>

using namespace std;

int arr(int y[]){

    y[2] = 200;

}

int main(){

    int x[] = {0, 5, 1, 8, 2, 10};

    arr(x);

    cout << x[2];
}
