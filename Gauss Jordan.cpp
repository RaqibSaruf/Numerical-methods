#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,j,k,n,m;
    float M[100][100] ,sum, x[100],c,P[100][100];

    cout<<"Enter the number of Equations: ";
    cin>>m;
    cout<<"Enter the number of unknown variables: ";
    cin>>n;
    cout<<"\n";
    cout<<"Enter the Augmented matrix:"<<endl;
    for(i=1;i<=m;i++)
    {
        cout<<i<<"'th ROW"<<endl;
        for(j=1;j<=n+1;j++)
        {
            cin>>M[i][j];
        }
    }

    //elimination
    for(k=1;k<=m;k++)
    {
        for(i=1;i<=m;i++)
    {

        if(i>k)
        {

            //c = M[i][k]/M[k][k];  //c=M[2][1]/M[1][1]

        for(j=1;j<=n+1;j++)
        {
            M[i][j] = M[i][j]-c*M[k][j];   //M[2][1]=M[2][1]-c*M[1][1]

            }
        }
    }
    }
        for(k=1;k<=m;k++)
    {
        for(i=1;i<=m;i++)
    {

        if(i<k)
        {
            c = M[i][k]/M[k][k];  //c=M[1][3]/M[2][3]

        for(j=1;j>=n+1;j++)
        {
            M[i][j] = M[i][j]-c*M[k][j];   //M[2][1]=M[2][1]-c*M[1][1]

            }
        }
    }
    }

  // x[n] = M[n][n+1]/M[n][n];

    //back substitution
   //for(i=m-1;i>=1;i--)
   // {
       // sum = 0;
      //  for(j=i+1;j<=m;j++)
      //  {
          //  sum = sum + M[i][j]*x[j];
       // }
     //   x[i] = (M[i][n+1] - sum)/M[i][i];
   // }

//solution
    cout<<"The solution is:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x"<<i<<" = "<<M[i][1]<<endl;
    }

   return 0;
}
