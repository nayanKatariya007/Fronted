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



// 5. Define a class BOOK with the following specifications : 


#include<iostream>
using namespace std;
  
  class BOOK
  {
    private:
            int  BOOKNO;
            char BOOKTITLE[20];
            float PRICE;
            
    float  TOTAL_COST()
            {
                
            }

public:

  void INPUT()
  {
    
    cout<<"Enter the BOOK NO :";
    cin>>BOOKNO;
    
    cout<<"Enter the BOOKTITLE :";
    cin>>BOOKTITLE;
    
    cout<<"Enter the PRICE :";
    cin>>PRICE;
    
    total =  TOTAL_COST();
 }
 

  void PURCHASE()
  {
    cout << "==========================="<<endl;
    
    cout<<"Enter the BOOK NO : "<<BOOK NO<<endl;
    cout<<"Enter the BOOKTITLE : "<<BOOKTITLE<<endl;
    cout<<"Enter the PRICE : "<<PRICE<<endl;
    cout<<"Enter the TOTAL_COST : "<<TOTAL_COST<<endl;
    
    }

};
  int main()
  {
    BOOK b;
    b.FEEDINFO();
    b.PURCHASE();
  }
