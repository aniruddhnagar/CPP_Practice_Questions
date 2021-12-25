/*
     C++ program to demonstrate all type of castings in cpp.
*/

#include <iostream>
using namespace std;

//-------------------------------------------
class Base {
    public:
        virtual ~Base() {}
};

class Derived: public Base {
    public:
        void printChild() {
            cout << "I'm in Child\n";
        }
};

//-------------------------------------------
class student 
{ 
private: 
    int roll; 
public: 
    // constructor 
    student(int r):roll(r) {} 
  
    // function that changes roll using const_cast 
    void fun() const
    { 
        ( const_cast <student*> (this) )->roll = 5; 
    } 
  
    int getRoll()  { return roll; } 
};

//-------------------------------------------
typedef struct Test
{
    int x, y;

} Test;

//-------------------------------------------
int main()
{
    // Explicit conversion from double to int
    double x = 1.2;
    int sum = (int)x + 1;
    cout << "Sum = " << sum << endl;

    // usage of static_cast
    float f = 3.5;
    int y = static_cast<int>(f); 
    cout << "y = "<< y << endl;

    // usage of dynamic_cast
    Base *b = new Derived();
    Derived *d = dynamic_cast<Derived*>(b);
    d->printChild();

    // usage of const_cast
    student s(3); 
    cout << "Old roll number: " << s.getRoll() << endl; 
    s.fun(); 
    cout << "New roll number: " << s.getRoll() << endl;

    // usage of reinterpret_cast
    Test *ptr_T = new Test(); 
    ptr_T->x = 5;
    ptr_T->y = 7;
    int *ptr_i = reinterpret_cast<int*>(ptr_T);
    cout<< *ptr_i;

    return 0;
}