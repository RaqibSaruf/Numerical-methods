#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j;
    float x[10],f[10],a,sum=0,m;
    cout<<"Number of points  ";
    cin>>n;
    cout<<"\nAll x with corresponding f(x) ";
    for(i=0;i<n;i++){
    cout<<"\n Enter x"<<i<<"\t f"<<i<<"\n";
    cin>>x[i]>>f[i];
    }
    cout<<"\nEnter x: ";
    cin>>a;
    for(j=0;j<n-1;j++)
    {
        for(i=n-1;i>j;i--)
            f[i]=(f[i]-f[i-1])/(x[i]-x[i-j-1]);
    }
    for(i=n-1;i>=0;i--)
    {
        m=1;
        for(j=0;j<i;j++)
            m=m*(a-x[j]);

        m=m*f[j];
        sum=sum+m;
    }
    cout<<"The result is: "<<sum<<endl;
    return 0;
}

