#include<iostream>
using namespace std;

int palindromo(int n)
{
    int m=n;
    int p=1;
    while(n/10>=1)
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
    for(i=100;i<1000;i++)
    {
       for(int j=100;j<1000;j++)
       {
           z=i*j;
           if(z==palindromo(z))
           {
               cout<<z<<" ";
           }
       }



    }


}
