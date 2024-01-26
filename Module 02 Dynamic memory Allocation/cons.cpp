#include <iostream>
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

    void display() {
        cout << "Name: " << name << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    
    Person* person_1 = new Person("akramuddoula", 5.10, 22);

    
    person_1->display();

    
    delete person_1;

    return 0;
}
