#include<bits/stdc++.h>
using namespace std;

class person { 
    public: 
    string name;
    int age;

    person(string name, int age)
    {
        name=name;
        age=age;
    }
};

class student : public person 
{ 
    public : 
        int rollnum;

    student(string name,int age, int roll):person (name,age,)
    {
        rollnum=roll;
    }
};

class GradStudent : public student { 
    public : 
        string researchArea;
    GradStudent(string name,int age,int roll,string researchArea){
        researchArea=researchArea;
    }
    
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll":<<rollnum<<<endl;
        cout<<"Research area :"<<researchArea<<endl;
        
    }
};

int main()
{
    GradStudent g1("Pranav",18,355,"Computer Science");
    g1.display();
    return 0;
}