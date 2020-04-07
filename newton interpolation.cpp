#include<iostream>
#include<cmath>
using namespace std;



int main()
{
    int i,n,m;
    float x[100],f[100],a[100],o,l[100],sum=0.0;

    cout<<"enter the value of total point: ";
    cin>>n;
    cout<<"enter the estimated order: ";
    cin>>m;
    cout<<"enter the estimated value: ";
    cin>>o;


    for(i=0;i<n;i++)
    {
        cout<<"enter the value of x"<<i<<" : ";
        cin>>x[i];
        cout<<"enter the value of f"<<i<<" : ";
        cin>>f[i];

    }
    a[0] = f[0];
    a[1] = (f[1]-f[0])/(x[1]-x[0]);
    a[2] = (((f[2]-f[1])/(x[2]-x[1]))-a[1])/(x[2]-x[1]);
    a[3] = (((f[3]-f[2])/(x[3]-x[2]))-a[1]-a[2])/(x[3]-x[1]);

    l[0] = a[0];
    l[1] = a[1]*(o-x[0]);
    l[2] = a[2]*(o-x[0])*(o-x[1]);
    l[3] = a[3]*(o-x[0])*(o-x[1])*(o-x[2]);

    for(i=0;i<=m;i++)
    {
        sum=sum+l[i];
    }


    cout<<"\n\n"<<endl;
    cout<<"result:"<<"\n"<<"p"<<m<<" = "<<sum<<endl;


       return 0;
}
