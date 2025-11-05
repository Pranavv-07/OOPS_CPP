#include<bits/stdc++.h>
using namespace std;

class marks {
    int intmarks;
    int extmarks;
    public: 
    marks()
    {
        intmarks=0;
        extmarks=0;
    }
    marks(int im, int em){
        intmarks=im;
        extmarks=em;
    }
    marks operator-(marks m);
    void Display()
    {
        cout<< intmarks<<endl<<extmarks<<endl;

    }
};
marks marks::operator-(marks m)
{
    marks temp;
    temp.intmarks=intmarks-m.intmarks;
    temp.extmarks=extmarks-m.extmarks;
    return temp;
}


int main()
{
    marks m1(20,30),m2(30,40);
    marks m3=m2-m1;
    m3.Display();   
    
}