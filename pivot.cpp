#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, n;
    float c, A[100][100], x[10], temp,sum = 0.0;

    cout << "Enter the number of unknowns: ";
    cin >> n;

    //input
    cout << "Enter the Augmented Matrix: "<<endl;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n+1; j++)
        {
             cin >> A[i][j];
        }
    }

//pivot finding
for(j=1;j<=n;j++)
{
	for(i=j+1;i<=n;i++)
	{
		if(fabs(A[j][j])<fabs(A[i][j]))
		{
			for(k=1;k<=n+1;k++)
			{
				temp=A[j][k];
				A[j][k]=A[i][k];
				A[i][k]=temp;
			}
		}
	}
}
cout<<"\n after the interchange we find the system of equations : ";
cout<<endl;
for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n+1; j++)
        {
             cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    //forward elimination
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j]; //A[2][1]/A[1][1]
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k]; // B[2][1] = A[2][1] - c * A[1][1]
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    cout<<endl;



    //back substitution
    for(i=n-1; i>=1; i--)
    {
        sum = 0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }


    //solution
    cout << "The solution is : " << endl;
    for(i=1; i<=n; i++)
    {
        cout << "x" << i << " = " << x[i]<< endl;
    }

    return 0;
}
