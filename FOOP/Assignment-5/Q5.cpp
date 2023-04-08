// 5.	Write a program to enter OOPC, PI, SAD, FEC, UID internal marks in a base class “Internal” and to enter OOPC, PI, SAD, FEC, UID external marks in a base class “External”. Now, Calculate Total Marks and Percentage by using member function in a derived class “Final”.

#include<iostream>
using namespace std;

class Internal{
    protected:
        int oopc, pi, sad, fec, uid;
    public:
        Internal(){
            cout<<"Enter OOPC, PI, SAD, FEC, UID internal marks: ";
            cin>>oopc>>pi>>sad>>fec>>uid;
        }
};
class External{
    protected:
        int oopc, pi, sad, fec, uid;
    public:
        External(){
            cout<<"Enter OOPC, PI, SAD, FEC, UID external marks: ";
            cin>>oopc>>pi>>sad>>fec>>uid;
        }
};
class Final : public Internal, public External{
    public:
        int tm = 
            (Internal::oopc + External::oopc) + 
            (Internal::pi + External::pi) + 
            (Internal::sad + External::sad) + 
            (Internal::fec + External::fec) + 
            (Internal::uid + External::uid);
        double pt = ((float)tm) / 5.0;
        void total_marks(){
            cout << "OOPC : " << Internal::oopc + External::oopc << endl;
            cout << "PI : " << Internal::pi + External::pi << endl;
            cout << "SAD : " << Internal::sad + External::sad << endl;
            cout << "FEC : " << Internal::fec + External::fec << endl;
            cout << "UID : " << Internal::uid + External::uid << endl;
            cout << "Total Marks : " << tm << endl;
        }
        void percentage(){
            cout << "Total Percentage : " << pt << endl << endl;
        }
};

int main()
{
    Final marks;
    marks.total_marks();
    marks.percentage();
    return 0;
}