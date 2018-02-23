#include <iostream>

using namespace std;

void counter();

int main(){

    int i;

    for(i = 0; i < 15; i++){
    counter();
    }
    return 0;
}

void counter(){
    static int x = 0;

    cout << "This function has been called " << ++x << " times" << endl;
}
