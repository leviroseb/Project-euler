#include<iostream>
using namespace std;

int palindromo(int n)
{
    int m=n;
    int p=10;
    while(n/10>1)
    {

        p=p*10;
        n=n/10;
    }

    int num=0;
    while(m/10>=1)
    {
        num=num+m%10*p;
        p=p/10;
        m=m/10;
    }
    return num+m;
}


int main()
{
    int i,j;
    int z;
    for(i=10;i<100;i++)
    {
       for(int j=10;j<100;j++)
       {
           z=i*j;
           if(z==palindromo(z))
           {
               cout<<z<<" ";
           }
       }
    }


}
