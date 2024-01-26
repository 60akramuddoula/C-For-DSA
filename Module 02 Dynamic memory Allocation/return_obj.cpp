#include <iostream>
#include <string>
using namespace std;

class Person {


public:
    string name;
    Person(string nm)
    {
        name=nm;
    }

    void display() {
        std::cout << "Name: " << name <<endl;
    }
};

// Function to return an object
Person fun()
 {
    return Person("akramuddoula");
}

int main() {
   
    Person person = fun();
    person.display(); 
    return 0;
}
