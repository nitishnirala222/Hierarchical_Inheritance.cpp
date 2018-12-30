#include<iostream>
using namespace std;
class A
{
protected:
    int no;
public:
    int setNo()
    {
    cout<<"Enter a number: "<<endl;
    cin>>no;
    }
};
class B : public A
{
public:
    int square()
    {
        cout<<"Square of the number: "<<no*no<<endl;;
    }
};
class C:public A
{
public:
    int cube()
    {
        cout<<"Cube of the number : "<<no*no*no<<endl;
    }
};
int main()
{
    B b1;
    C c1;
    b1.setNo();
    b1.square();
    c1.setNo();
    c1.cube();
}
