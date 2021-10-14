#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout << "enter value" << endl;
    double n;
    cin>>n;
    double x,y,z,pi,e,result;
    pi=3.1415926;
    e=2.71828;
    x=4*n*sqrt(3);
    z=sqrt((2*n)/3)*pi;
    y=pow(e,z);
    result=(1/x)*y;
    cout<<"p("<<n<<") ~ "<<(int)result;

    return 0;
}
