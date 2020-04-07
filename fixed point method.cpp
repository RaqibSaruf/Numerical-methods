#include<iostream>
#include<cmath>
using namespace std;

#define F(x) x*x+x-2
#define G(x) 2-x*x
#define epa 0.001

int main()
{
    float x0 = 0.0,temp = 0.0,x;
    int i = 0;
    do
    {
        temp = x0;
        x = G(x0);
        cout<<"the value of X"<<i<<" : "<<x<<endl;
        i++;
        x0 = x;
    }
    while(fabs(x0-temp)>epa);

    cout<<"\n"<<endl;
    cout<<"The root is :"<< x <<endl;

    return 0;
}

