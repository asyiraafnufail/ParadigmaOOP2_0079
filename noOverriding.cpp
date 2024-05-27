#include <iostream>
using namespace std;

class baseClass
{
    public:
        virtual void perkenalan() final
        {
            cout << "halo saya function dari base class";
        }
        
};

class derivedClass : public baseClass
{
    
    void perkenalan()
    {
        cout << "halo saya function dari derived class";
    }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0
}