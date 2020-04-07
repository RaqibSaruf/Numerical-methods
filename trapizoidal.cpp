#define f(x) x*x*x+1
#define maxf(x) 6*x
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,m,b,I,h,E,result;
    cout<<"Enter the value of the point a : ";
    cin>>a;
    cout<<"Enter the value of the point b : ";
    cin>>b;

    h=b-a;
    I=((f(a)+f(b))/2)*h;

    if(a>b)
    {
        m=a;
    }
    else
    {
        m=b;
    }

    E=(h*h*h*maxf(m))/12;

    result=I-E;

    cout<<"result : "<<result;

    return 0;

}
