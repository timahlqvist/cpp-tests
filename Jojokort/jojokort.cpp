#include <iostream>

using namespace std;

class Card{
    public:
        bool pay;

        int serialNumber;

        string owner;
        string expandIn;
        string registeredIn;

    private:
        float money;

    public:
        void printMoney(){
            cout << "You have: " << money << " money on your Jojo card!" << endl;
        }
        void addMoney(addMoney){
            money += addMoney;
        }

};

int main(){

    Card timsCard;

    cout << "How much money do you want to transfer to your Jojo card?" << endl;
    cin >> addMoney;

    timsCard.addMoney(addMoney);
    timsCard.printMoney();


    return 0;
}
