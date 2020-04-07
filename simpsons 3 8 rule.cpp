#define f(x) x*x*x+1
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float x2,a,n,b,x1,h,I,fa,fb,fx1,fx2;
    cout<<"Enter the value of the point a : ";
    cin>>a;
    cout<<"Enter the value of the point b : ";
    cin>>b;
    cout<<"the number of created area : ";
    cin>>n;


    h=(b-a)/n;
    x1=a+h;
    x2=a+(2*h);
    fa=f(a);
    fb=f(b);
    fx1=f(x1);
    fx2=f(x2);

    I= 3*h/8*(fa+3*fx1+3*fx2+fb);



    cout<<"result : "<<I;

    return 0;

}
