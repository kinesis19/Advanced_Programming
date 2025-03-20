#include <iostream>
#include <string>
using namespace std;

class Account{
private:
    string name;
    int number;
    int money;

public:

    Account(string name, int number, int money);

    void deposit(int targetMoney);
    int withdraw(int targetMoney);
    string getOwner();
    int inquiry();
};

Account::Account(string name, int number, int money){
    Account::name = name;
    Account::number = number;
    Account::money = money;
}

void Account::deposit(int targetMoney){
    Account::money = Account::money + targetMoney;
}

int Account::withdraw(int targetMoney){
    if (Account::money - targetMoney >= 0) {
        Account::money = Account::money - targetMoney;
        return targetMoney;
    } else {
        return 0; // throw-exception (fail)
    }
}

string Account::getOwner(){
    return Account::name;
}

int Account::inquiry(){
    return Account::money;
}

int main()
{
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "'s ballance : " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << "Withdrawed money: " << money << endl;
    cout << a.getOwner() << "'s ballance : " << a.inquiry() << endl;

    return 0;
}
