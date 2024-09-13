// 5. Define a class BOOK with the following specifications : 

#include<iostream>
using namespace std;
  
  class BOOK
  {

    private:

      int  Bookno,n;
      char Booktitle[20];
      float BPrice;
            
    int  TOTAL_COST(int n)
      {
        float total;

        total = BPrice*n;

        return total;       
      }

public:

  void INPUT()
  {
    
    cout << "Enter the Bookno :";
    cin >> Bookno;
    
    cout << "Enter the Booktitle :";
    cin >> Booktitle;
    
    cout << "Enter the Book Price :";
    cin >> BPrice;

    cout << "The number of copies to purches : ";
    cin >> n;
    
    cout << endl << endl;;

 }
 

  void PURCHASE()
  {
    float total;
    
    cout<<"Enter the Bookno : " << Bookno << endl;
    cout<<"Enter the Booktitle : " << Booktitle << endl;
    cout<<"Enter the Price per book : " << BPrice << endl;
    total = TOTAL_COST(n) ; 
    cout << "The Book Price is : " << total << " /- rupees" << endl;
    
    }

};
  int main()
  {
    BOOK b;
    b.INPUT();
    b.PURCHASE();
  }



/* Enter :

    Enter the Bookno : 10
    Enter the Booktitle : c++
    Enter the Book Price : 200
    The number of copies to purches : 20
  
  Output :
  
    Enter the Bookno : 10
    Enter the Booktitle : c++
    Enter the Price per book : 200
    The Book Price is : 4000 /-rupees
 
*/