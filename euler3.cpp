#include<iostream>
#include<math.h>
using namespace std;


//What is the largest prime factor of the number 600851475143 ?


void primo (double n)
{
    for(int i=2;i<n;i++)
    {
        int c=0;
        double num;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

        if(c==0)
        {

            num=i;
            if(fmod(n,num)==0)
            {
            cout<<num<<" ";
            }
        }

    }
}


int main()
{
    double n;
    cout<<"numero: ";
    cin>>n;
    primo(n);
}
