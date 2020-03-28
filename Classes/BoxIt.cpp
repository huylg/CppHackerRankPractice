#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{

    int _l,_b,_h;
public:
    Box(){
        _l = _b =_h =0;
    }
    Box(int l,int b, int h){
        _l = l;
        _b = b;
        _h = h;
    }
    Box(const  Box& b){
        _l = b._l;
        _b = b._b;
        _h = b._h;
    }
    int getLength(){ return _l;}
    int getBreath(){ return _b;}
    int getHeight(){ return _h;}

    long long CalculateVolume(){ return (long long)_l *  _b * _h; }
    bool operator < (Box& b){
        return (_l<b._l) || (_b < b._b && _l == b._l) || (_h < b._h && _l == b._l && _b ==b._b);}
    friend ostream& operator << (ostream& out, Box& b){
    out<<b._l<<" "<<b._b<<" "<<b._h;
    return out;
    }



};

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
