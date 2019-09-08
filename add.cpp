#include<iostream>
using namespace std;

int main()
{
    double length,breadth, area;
    cout<<"Enter the length of rectangle?\n";
    cin>>length;
    
    cout<<"Enter the breadth of rectangle?\n";
    cin>>breadth;
    
    area =length*breadth;
    
    cout<<"The area of rectangle of length "<<length<<"and breadth of"<<breadth<< "is"<<area<<endl;
    return 0;
    
}
