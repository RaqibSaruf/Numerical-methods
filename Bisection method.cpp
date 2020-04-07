#define F(x) x*x-4*x-10
#define epa 0.001

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        float x1 = -2, x2 =-1, x0 = 0.0, temp = 0.0, f0, f1, f2;
    do
    {
        f1 = F(x1);
        f2 = F(x2);
        temp = x0;
        x0 = (x1+x2)/2;
        cout<<"The value of x0 is: "<<x0<<endl;
        f0 = F(x0);
        if(f0*f1<0)
        {
            x2 = x0;
        }
        else
        {
            x1 = x0;
        }
    }while(fabs(x0-temp)>epa);
    cout<<"The root is: "<<x0<<endl;

    return 0;

}

