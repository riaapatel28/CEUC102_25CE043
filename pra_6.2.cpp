#include<iostream>
using namespace std;

class person
{
protected:
     string name;
     int age;
     char gender;

public:
     void p_getdata()
     {
         cin.ignore();
         cout<<"Enter name"<<endl;
         getline(cin,name);
         cout<<"Enter age :"<<endl;
         cin>>age;
         cout<<"Enter gender (M/F/T) :"<<endl;
         cin>>gender;
     }
     void p_display()
     {
         cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl<<"Gender :"<<gender<<endl;

     }
     person()
     {
         name="riya";
         age=19;
         gender='F';
     }
};
class employee : public person
{
protected:
    int id;
public :
    void e_getdata()
    {
        p_getdata();
        cout<<"Enter ID :"<<endl;
        cin>>id;
    }
    void e_display()
    {
        p_display();
        cout<<"ID :"<<id;
    }
};
class manager : public employee
{
protected:
    string dept;
public :
    void m_getdata()
    {
        e_getdata();
        cin.ignore();
        cout<<"Enter deparment :"<<endl;
        getline(cin,dept);

    }
    void m_display()
    {
        e_display();
        cout<<"Department :"<<dept;
    }
};
int main()
{
    manager m;
    m.m_getdata();
    m.m_display();
}
