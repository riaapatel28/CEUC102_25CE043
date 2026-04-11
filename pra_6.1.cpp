#include<iostream>
using namespace std;

class shape
{
    protected:
    float radius;
    public:
    void get_radius()
    {
        cout<<"Enter radius:"<<endl;
        cin>>radius;

    }
};

class circle : public shape
{
     public:
     float area()
     {
         return (3.14)*(radius*radius);
     }
     void display()
     {
        cout<<"radius :"<<radius<<"area :"<<area()<<endl;
     }
};
int main()
{
    int n;
    cout<<"enter the number of circles:"<<endl;
    cin>>n;
    circle c[n];

    for(int i=0;i<n;i++){
        c[i].get_radius();
    }
    cout<<"the area of circles:"<<endl;
    for(int i=0;i<n;i++)
    {
        c[i].display();
        cout<<endl;
    }
    return 0;
}
