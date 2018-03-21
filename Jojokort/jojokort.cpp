#include <iostream>
#include <cstdlib>

using namespace std;

class Card{
    public:
        bool pay;

        string owner;
        string expandIn;
        string registeredIn;

    private:
        int money;
        int serialNumber;

    public:
        void addMoney(int addMoney){
            money += addMoney;
        }
        void printMoney(){
            cout << "You have: " << money << " money on your Jojo card!" << endl;
        }
        void setSerial(){
            for(int i; i <= 10; i++){
                serialNumber += rand() % 10;
            }
        }
        void printSerial(){
            cout << serialNumber << endl;
        }
};

int main(){

    int addMoney;

    Card timcard;

    timcard.setSerial();

    cout << "How much money do you want to transfer to your Jojo card?" << endl;
    cin >> addMoney;

    timcard.addMoney(addMoney);
    timcard.registeredIn = "10/9-2006";
    timcard.owner = "Tim Ahlqvist";
    timcard.expandIn = "500 years";
    timcard.printMoney();
    timcard.printSerial();
    cout << timcard.registeredIn << endl;
    cout << timcard.owner << endl;
    cout << timcard.expandIn << endl;

    return 0;
}
