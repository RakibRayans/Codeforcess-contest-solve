#include<iostream>
using namespace std;

int main()
{
    int x,y,z,a,b,c,j,k,e,f,g,d,i;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
   j=x+y+z;
   k=a+b+c;
   if(j>k)
   {
       cout<<"NO"<<endl;
   }
   else{
    if(x>a)
    {
        cout<<"NO"<<endl;
    }
    else{
        d=a-x;
        for(i=1;i<=y;i++)
        {
            e=b-i;
        }
        for(i=1;i<=z;i++)
        {
            f=b-i;
        }
        g=d+e+f;
        if(g>=0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

   }
   return 0;
}
