#include<iostream>
#include<math.h>
using namespace std;

//Find the sum of all the primes below two million.


double suma_primo(double n)
{
    double sum=0;
    for(double i=2;i<n;i++)
    {
        int c=0;
        for(double j=2;j<i;j++)
        {
            if(fmod(i,j)==0)
            {
                c++;
            }
        }

        if (c==0)
        {
            sum+=i;
        }
    }

    return sum;
}


int main()
{
    double n;
    cout<<"numero: ";
    cin>>n;
    cout<<suma_primo(n);
}