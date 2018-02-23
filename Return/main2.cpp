#include <iostream>

using namespace std;

string kent(string song, string album){

    string ssong = song;
    string aalbum = album;

    string tot = ssong + ", " + aalbum;

    return(tot);
}


int main(){

    string kenta = kent("Utan dina andetag", "Om du var har");

    cout << kenta << endl;

}
