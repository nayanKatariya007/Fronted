//friend functon using operator overloading
#include<iostream>
class box
{
    int l,b,h;
    public:
    void setdata(int x, int y, int z){
          l = x, b = y, h= z;
    }
    int getvolume()
    {
        retuen l*b*h;
    }
    frind box operator+ (box m, box n){
        box t;
        t.l = m.l + n.1;
        t.b = m.b + n.b;
        t.h = m.h + n.h;
        return t;

    }
    frind box operator++ (box n, int){
        box t;
        t.l = ++n.l;
        t.b = ++n.b;
        t.h + ++n.h;
        return t;
    }
};
int main()
{
    box a,b,c,d;
    a.setdata(2,2,2);
    cout<<"volume of box A is:"<<a.getvolume()<<endl;
    b.setdata(3,3,3);
    cout<<"volume of box B is"<<b.getvolume()<<endl;
    
