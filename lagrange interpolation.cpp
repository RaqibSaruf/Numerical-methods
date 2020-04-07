#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int i,j;
    float n,x[100],X,sum1[100],sum2[100],l[100],f[100],totalsum=0.0;
    cout<<"Enter the value of p th term"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<"Enter the value of x"<<i <<"= ";
        cin>>x[i];
        cout<<"Enter the value of f"<<i <<"= ";
        cin>>f[i];

        sum1[i]=1;
        sum2[i]=1;
    }
    cout<<"Enter the estimated value of X :";
        cin>>X;

    for(j=0;j<=n;j++)
    {
        for(i=0;i<=n;i++)
    {
        if(i != j)
            {
                sum1[j]=sum1[j]*(X-x[i]);
                sum2[j]=sum2[j]*(x[j]-x[i]);

            }
    }
        l[j]=(sum1[j]/sum2[j]);
        cout<<"l"<<j<<"="<<l[j]<<endl;
    }

    for(i=0;i<=n;i++)
    {
        totalsum=totalsum+(f[i]*l[i]);
    }
    cout<<"\n"<<endl;
    cout<<"total = "<<totalsum+1;

    return 0;
}
