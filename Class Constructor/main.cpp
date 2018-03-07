#include <iostream>

using namespace std;

class Game{

    public:
        string name;
        Game(string setName){
            name = setName;
        }

        void print(){
            cout << name;
        }

};


int main(){

    Game mc("Minecraft");
    mc.print();

}
