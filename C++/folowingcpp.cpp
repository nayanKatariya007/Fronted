#include<iostream>
  using namespace std;
  
  class Distance
  {
    private:
            int flight;
            char distination[50];
            float distance,fuel;
            
    void calfuel()  
            {
                if (distance<=1000)
                {
                    fuel = 500;
                }
                else if (distance>1000 && distance <=2000)
                {
                    fuel=1100;
                }
                else if (distance>2000)
                {
                    fuel=2200;
                }

            }

public:

  void FEEDINFO()
  {
    
    cout<<"Enter the Flight number :";
    cin>>flight;
    
    cout<<"Enter the Flight Destination :";
    cin>>distination;
    
    cout<<"Enter the Distance : ";
    cin>>distance;
    
    calfuel();
 }
 

  void SHOWINFO()
  {
    cout << "==========================="<<endl;
    
    cout<<"Enter the Flight number : "<<flight<<endl;
    cout<<"Enter the Flight Destination : "<<distination<<endl;
    cout<<"Enter the Distance : "<<distance<<endl;
    cout<<"Enter the Fuel : "<< fuel<<endl;
    
    }

};
  int main()
  {
    Distance d;
    d.FEEDINFO();
    d.SHOWINFO();
  }



/* Enter :

    Enter the Flight number : 10
    Enter the Flight Destination : india
    Enter the Distance : 2500
  
  Output :
  
    Enter the Flight number : 10
    Enter the Flight Destination : india
    Enter the Distance : 2500
    Enter the Fuel : 2200
 
*/


