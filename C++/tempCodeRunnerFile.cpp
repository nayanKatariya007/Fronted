//multiple inheritance
#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    
    public:
    void setA()
    {
        cout<<"enter A:";
        cin>>a;
    }
};

class base2 : public base1
{
    protected:
    int b;
    
    public:
    void setB()
    {
        cout<<"enter B:";
        cin>>b;
    }
};

class derived : public base2 
{
    public:
    void getproduct()
    {
        cout<<"product of a and b is:"<<a*b<<endl;
    }
};

    int main()
    {
        derived d;
        d.setA();
        d.setB();
        d.getproduct();
    }
        


