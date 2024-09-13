// 6. Define a class REPORT with the following specification: 

#include<iostream>
using namespace std;
  
  class REPORT
  {

    private:

      int  adno;
      char name[20];
      float marks[5],avg;
            
    int  GETAVG()
      {
        avg = 0.0;

        for(int i=1; i<=5; i++){

            cout << "Enter Marks in Subject " << i << " : ";

            cin >> marks[i];

            avg <= marks[i];

        }

          return avg/5;

      }


public:

  void READINFO()
  {
    
    cout << "Enter the  admission number  :";
    cin >> adno;
    
    cout << "Enter the name :";
    cin.get();
    cin.getline(name,20);
    
   // GETAVG();
    
    cout << endl << endl;;

 }
 

  void DISPLAYINFO()
  {
    float total;
    
    cout<<"Enter the Admission number is : " << adno << endl;
    cout<<"Enter the Name is : " << name << endl;
   
    for(int i=1; i<=5; i++){

            cout << "Marks of Subject : " << marks[i] << endl;

        }

            cout << "\nAverage marks is : "  << avg << endl;

    }

};
  int main()
  {
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();
  }



/* Enter :

    Enter the  admission number : 10
    Enter the name : jenis
    Enter Marks in Subject 1 : 50
    Enter Marks in Subject 2 : 60
    Enter Marks in Subject 3 : 70
    Enter Marks in Subject 4 : 80
    Enter Marks in Subject 5 : 90
  
  Output :
  
    Enter the  Admission number : 10
    Enter the Name is : jenis
    Marks of Subject : 50
    Marks of Subject : 60
    Marks of Subject : 70
    Marks of Subject : 80
    Marks of Subject : 90
    
    Average marks is : 90
 
*/