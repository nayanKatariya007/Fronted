#include<iostream>
#include<string>
using  namespace std;

class Student 
{
    private:
        int admno;
        string sname;
        float eng, math, science, total;

    public:
        float ctotal() 
        {
            total = eng + math + science;
            return total;
        }

        void Takedata() 
        {
            cout << "Enter Admission Number: ";
            cin >> admno;
            cout << "Enter Student Name: ";
            cin >> sname;
            cout << "Enter English Marks: ";
            cin >> eng;
            cout << "Enter Math Marks: ";
            cin >> math;
            cout << "Enter Science Marks: ";
            cin >> science;
            ctotal();
        }

        void Showdata()
        {
            cout << "\nStudent Details:" << endl;
            cout << "Admission Number: " << admno << endl;
            cout << "Student Name: " << sname << endl;
            cout << "English Marks: " << eng << endl;
            cout << "Math Marks: " << math << endl;
            cout << "Science Marks: " << science << endl;
            cout << "Total Marks: " << total << endl;
        }
    };
int main() 
{
    Student student1;
    student1.Takedata();
    student1.Showdata();


 return 0;
}