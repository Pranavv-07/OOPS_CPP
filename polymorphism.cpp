/*
poly -> multiple
morphism -> forms
polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context
in which thy are used
types :
1. compile time polymorphism 
2. Run time polymorphism 
*/

#include<bits/stdc++.h>
using namespace std;



class payments{
    public:
    virtual void pay()=0;
    
};
class payUsingCreditCard : public payments{
    void pay(){

    }
};

class payUsingUPI : public payments{
    void pay()
    {
        
    }
};

int main()
{
    payments *p1= new payUsingCreditCard();
    p1->pay();
}
