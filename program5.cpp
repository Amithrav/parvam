#include<iostream>
using namespace std;
class Account
{
    private:
    int balance;
    public:
    void setBalance(int b){
        balance = b;
    }
    int getbalance(){
        return balance;
    }
};
int main()
{
    Account acc;
    acc.setbalance(1000);
    cout<<"balance"<<acc.getbalance()<<"  "<<endl;
    return 0;
}