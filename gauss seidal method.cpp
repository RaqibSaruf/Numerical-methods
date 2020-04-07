#include<iostream>
#include<cmath>
using namespace std;

#define f1(x2,x3) (5-x2-x3)/2
#define f2(x1,x3) (15-3*x1-2*x3)/5
#define f3(x1,x2) (8-2*x1-x2)/4
#define epa 0.001

int main()
{
   float u1=0.0,u2=0.0,u3=0.0,temp1,temp2,temp3;
   int i=1;

   do
   {
       temp1=u1;
       temp2=u2;
       temp3=u3;
       u1=f1(u2,u3);
       u2=f2(u1,u3);
       u3=f3(u1,u2);



       cout<<"iteration"<<i<<endl;
       cout<<"x1 = "<<u1<<"\n"<<"x2 = "<<u2<<"\n"<<"x3 = "<<u3<<endl;
       i++;

   }while(fabs(temp1-u1)>epa && fabs(temp2-u2)>epa && fabs(temp3-u3)>epa );



   cout<<"\n\n"<<endl;
    cout<<"result :"<<endl;
    cout<<"x1 = "<<u1<<"\n"<<"x2 = "<<u2<<"\n"<<"x3 = "<<u3<<endl;


    return 0;
}

