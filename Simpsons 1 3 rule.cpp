#define f(x) x*x*x+1
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,x1,h,I,fa,fb,fx1;
    cout<<"Enter the value of the point a : ";
    cin>>a;
    cout<<"Enter the value of the point b : ";
    cin>>b;


    h=(b-a)/2;
    x1=(a+b)/2;
    fa=f(a);
    fb=f(b);
    fx1=f(x1);

    I= h/3*(fa+4*fx1+fb);



    cout<<"result : "<<I;

    return 0;

}

