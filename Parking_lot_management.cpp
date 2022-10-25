#include<iostream>

using namespace std;

class Park
{
    int p_no;
public:
    float d_in;

    void setpark(int y)
    {
        p_no=y;
    }
    int getpark()
    {
        return p_no;
    }
};
class Vehicle: public Park
{
public:
    void parking()
    {
        int v_no;
        string v_type;
        int hp;

        cout<<"Enter Vehicle No     : ";   cin>>v_no;
        if(v_no<=20)
        {
            cout<<"Enter Vehicle Type   : ";   cin>>v_type;
            cout<<"Enter Hours Parked   : ";   cin>>hp;
            recipt();
        }
        else
        {
            cout<<"Park is Full"<<endl;
            parking();
        }
    }
    void recipt()
    {
        int charge,cpv,v_no,hp;
        string v_type;

        if(v_type=="car")
        {
            cpv=40;
        }
        else if(v_type=="bike")
        {
            cpv=20;
        }
        else if(v_type=="van")
        {
            cpv=50;
        }
        else if(v_type=="tuk")
        {
            cpv=30;
        }
        else
        {
            cout<<"Not Allowed"<<endl;
        }
        charge=cpv*hp;

    cout<<"Vehicle no. is   : "<<v_no<<endl;
    cout<<"Vehicle Type is  : "<<v_type<<endl;
    cout<<"Hours Parked     : "<<hp<<"\n"<<endl;
    cout<<"Charge is        : "<<charge<<"\n\n"<<endl;
}
};
int main()
{
    int no;

    Park P1;
    P1.setpark(111);
    Park P2;
    P2.setpark(112);

    cout<<"Welcome to OOP Parking\n\n"<<endl;
    cout<<"Select Parking   : ";cin>>no;
    if(no==111)
    {
        cout<<"Park no. is      : "<<P1.getpark()<<"\n"<<endl;
        Vehicle::parking();
    }
    else if(no==112)
    {
        cout<<"Park no. is      : "<<P2.getpark()<<"\n"<<endl;
        Vehicle::parking();
    }
    else
    {
        cout<<"No Parking"<<endl;
    }
}
