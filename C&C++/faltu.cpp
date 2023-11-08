#include <iostream>

using namespace std;

class m1
{
private:
    int x = 10;

    int getPVT() {
      return x;
    }

public:
    int a = 5;
};

// class m2 :private m1{
//     public:

// }

int main()
{
    m1 obj1;
    {
        cout << "PRIVATE: " << obj1.getPVT();
        cout << "PUBLIC: " << obj1.a;
    }
    // vector<int> ar = {1, 2, 3, 4, 5};
    // vector<int>::iterator ptr = ar.begin();
    // ptr : advance(ptr, 2);
    // cout << *ptr << endl;
    // return 0;
}