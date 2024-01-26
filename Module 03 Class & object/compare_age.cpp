#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class Person {
public:
    string name;
    float height;
    int age;
   
    Person(string nm, float h, int a)
    {
        name=nm;
        height=h;
        age=a;
    }
        int getage()
        {
            return age;
        }

        string getname()
        {
            return name;
        }
        

    void display() {
       
        // cout << "Name: " << name << endl;
        // cout << "Height: " << height << " feet" << endl;
        // cout << "Age: " << age << " years" << endl;
    }
    

};

int main() {
    
    Person* person_1 = new Person("akramuddoula", 5.10, 22);
    Person* person_2 = new Person("bappi", 5.8, 25);


    if (person_1->getage() > person_2->getage())
    {
        cout<<person_1->getname()<<endl;
    }
    else 
    {
      cout<<person_2->getname()<<endl;  
    }
    // person_1->display();
    // person_2->display();
       

    
    delete person_1;

    return 0;
}
