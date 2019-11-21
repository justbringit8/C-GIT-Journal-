#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    private:char name[30],grade;
    int usn;
    float mcmos,mcplus,mapp,total,percentage;
    public:
        student()
        {
            cout<<"\nIn student Constructor";
            name[0]='\0';
            usn=0;
            grade='\0';
            mcmos=mcplus=mapp=total=percentage=0.0;
        }
        void getdata()
        {
            cout<<endl<<"enter Name:";
            cin>>name;
            cout<<endl<<"enter USN:";
            cin>>usn;
            cout<<endl<<"enter marks in cmos:";
            cin>>mcmos;
            cout<<endl<<"enter marks in c++:";
            cin>>mcplus;
            cout<<endl<<"enter marks in app:";
            cin>>mapp;

        }
        void calculate()
        {
            total=mcmos+mcplus+mapp;
            percentage=total/300*100;
        }
        void showstudent()
        {
            cout<<endl<<setprecision(5)<<name<<"\t"<<usn<<"\t"<<mcmos<<"\t"<<mcplus<<"\t"<<mapp<<"\t";
            cout<<setprecision(5)<<total<<"\t"<<percentage<<"\t\t"<<grade;
        }
        void findgrade()        //grade conditions
        {
            if(percentage>=80)
                grade='A';
            else if(percentage>=70 && percentage<80)
                grade='B';
            else if(percentage>=60 && percentage<70)
                grade='C';
                else
                    grade='F';
        }
        ~student()              //destructor
        {
            cout<<"\n\nIn the student destructor\t";
            cout<<"Year 2019-20"<<endl;
        }
};//student class

int main()
{
    int i,n;
    cout<<"Enter the number of students:";
    cin>>n;
    student a[n];

    for(i=0;i<n;i++)
    {
        a[i].getdata();
        a[i].calculate();
        a[i].findgrade();
    }
    cout<<"\nNmae\tusn\tcmos\tcpp\tadv proc total\tpercentage\tgrade"<<endl;
     for(i=0;i<n;i++)
    {
        a[i].showstudent();
    }
    return 0;
}








