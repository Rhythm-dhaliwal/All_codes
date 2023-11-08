#include <iostream>
using namespace std;
class base
{
    public:
        virtual void print()
        {
            cout<<"print base class"<<endl;
        }
        void show()
        {
            cout<<"show base class"<<endl;
        }
};
class derived : public base
{
    public:
    void print()
        {
            cout<<"print derived classes"<<endl;
        }
    void show()
        {
            cout<<"show derived class"<<endl;
        }
};
int main()
{
    base*bptr;
    derived d;
    bptr=&d;
    bptr->print();
    bptr->show();
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}