#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private : 
    double balance;
    public: 
    BankAccount(){
    }
    BankAccount(double b){
        balance = b;
    }
    
     friend void auditAccount(BankAccount A);
};


void auditAccount(BankAccount A)

{
    cout<<"balance of A : "<<A.balance;

}
int main()
{
    BankAccount B(3000);
    auditAccount(B);
    BankAccount C(600);
    auditAccount(C);

}