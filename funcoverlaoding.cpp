#include <iostream>
using namespace std;

class Geeks {

public:
void func()

    {

        cout << "value of x is "  << endl;
        }
    
	
	
    void func(int x)

    {

        cout << "value of x is " << x << endl;
        }
     
    
void func(double x)
{

        cout << "value of x is " << x << endl;

    }

};
int main()
{
    Geeks obj1;
    obj1.func();
    obj1.func(7);
    obj1.func(9.132);
   return 0;
}


