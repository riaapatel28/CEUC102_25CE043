#include<iostream>
using namespace std;

class fuel
{
protected:
    string type;
public:
    void f_adddata()
    {
        cin.ignore();
        cout<<"Enter the type of car like petrol, diesel or electric :"<<endl;
        getline(cin,type);
    }
    void f_showdata()
    {
        cout<<"Type :"<<type;
    }
    fuel()
    {
        type="petrol";
    }
};

class brand
{
protected:
    string brand;
    string model;
public:
     void b_adddata()
    {
        cout<<"Enter the brand name of your car :"<<endl;
        getline(cin,brand);
        cout<<"Enter the model of your car :"<<endl;
        getline(cin,model);
    }
    void b_showdata()
    {
        cout<<"\nBrand :"<<brand<<"\nModel :"<<model<<endl;
    }
};
class car : public brand,public fuel
{
public:
    void c_adddata()
    {
     f_adddata();
     b_adddata();
    }
    void c_showdata()
    {
     f_showdata();
     b_showdata();
    }
};

int main()
{
    car c;
    c.c_adddata();
    cout<<"____________________________________________"<<endl;
    cout<<"                  CAR DETAILES:             "<<endl;
    c.c_showdata();
    cout<<"____________________________________________"<<endl;

}
