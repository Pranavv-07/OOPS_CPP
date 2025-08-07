
/* A friend function in C++ is a non-member function that is given special access to the private and protected members of a class.
It is not defined inside the class, but it is declared using the friend keyword inside the class. */


/* When to Use Friend Functions:
To allow external functions or other classes to access private data without breaking encapsulation.
When you want to perform operations involving multiple classes or objects that require internal access. */



#include <bits/stdc++.h>
using namespace std;

class Patient {
private:
    string name;
    int age;
    char gender;
    string medicalHistory;

public:
    // Constructor
    Patient(string n, int a,char g, string history) {
        name = n;
        age = a;
        gender=g;
        medicalHistory = history;
    }

    // Declare friend function
    friend void viewMedicalRecord(Patient p);
};

// Friend function to access private medical data
void viewMedicalRecord(Patient p) {
    cout << "----- Patient Medical Record -----" << endl;
    cout << "Name           : " << p.name << endl;
    cout << "Age            : " << p.age << endl;
    cout << "Gender         : " << p.gender << endl;
    cout << "Medical History: " << p.medicalHistory << endl;
    if(p.age>60) cout<< "Senior Citizen Discount applicable 10%" << endl;
    cout << "----------------------------------" << endl;
    cout << "**********************************" << endl;

}

int main() {
    Patient p1("Alice", 42,'M',"Diabetes, Hypertension , Migrane");
    Patient p2("Emma", 30,'F',"Asthma");
    Patient p3("Charlie", 30,'M',"Heart blocks, Allergies");
  
  

    // Authorized access by doctor (via friend function) 
    viewMedicalRecord(p1);
    viewMedicalRecord(p2);
    viewMedicalRecord(p3);
  

    return 0;
}
