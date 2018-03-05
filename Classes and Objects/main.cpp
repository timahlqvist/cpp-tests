#include <iostream>

using namespace std;

class Car{

    public:
        string name;

        void print_name(){
            cout << "Your car is a " << name << endl;
        }
        void start_engine(){
            cout << "YOU STARTED THE ENGINE!! BUUUURN BUUUUUUURRNN BUUUUUUUUURRRRRN" << endl;
        }
        void stop_engine(){
            cout << "You stopped the engine" << endl;
        }

};

int main(){

    Car car;
    Car car2;

    car.name = "Volvo V70";
    car.print_name();
    car.start_engine();
    car.stop_engine();

    cout << endl;
    cout << "And here is car number 2!" << endl;
    cout << endl;

    car2.name = "Ford Mustang";
    car2.print_name();
    car2.start_engine();
    car2.stop_engine();
}
