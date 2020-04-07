#include<iostream>
#include<cmath>
using namespace std;

#define F(x) x*x-3*x+2
#define F1(x) 2*x-3
#define epa 0.001


int main()
{
    float x1 = 0, f, f1, x2, temp = 0.0;
    int i = 1;
    do
    {
        temp = x1;
        f = F(x1);
        f1 = F1(x1);
        x2 = x1-(f/f1);
        x1 = x2;
        cout<<"The value of x"<<i<<" is: "<<x1<<endl;
        i++;
    }while(fabs(x1-temp)>epa);

    cout<<"\n"<<endl;
    cout<<"The root value is: "<<x1<<endl;


    return 0;
}
