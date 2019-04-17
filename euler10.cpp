#include<iostream>
#include<math.h>
using namespace std;

//Find the sum of all the primes below two million.


double suma_primo(int n)
{
    int sum=0;
    for(int i=2;i<n;i++)
    {
        int c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
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
    int n;
    cout<<"numero: ";
    cin>>n;
    cout<<suma_primo(n);
}
