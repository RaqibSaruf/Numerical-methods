#include<iostream>
#include<cmath>
using namespace std;

#define F(x) x*x-4*x-10
#define epa 0.001

int main()
{
    float x1 = 4,x2 = 2, temp = 0.0,x3 = 0.0,f1,f2;
    int i = 1;
    do
    {
        f1 = F(x1);
        f2 = F(x2);
        temp = x3;
        x3 = x2-((f2*(x2-x1))/(f2-f1));
        x1=x2;
        x2=x3;
        cout<<"# Itaretion "<<i<<endl;
        cout<<"The value of X1"<<" : "<<x1<<endl;
        cout<<"The value of X2"<<" : "<<x2<<endl;
        i++;

    }
    while(fabs(x3-temp)>epa);

    cout<<"\n"<<endl;
    cout<<"The root is : "<< x3 <<endl;

    return 0;
}

