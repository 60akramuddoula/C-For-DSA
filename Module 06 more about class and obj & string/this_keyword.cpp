#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
    int age;
    string name;
    
    person( string name, int age)
    {
        this->age=age;
        this->name=name;
    }
    void hello()
    {
        cout<<age<<endl<<name<<endl;
    }
};
int main()
{
    person rakib("rakib Ullah",25);
    rakib.hello();
 return 0;
}