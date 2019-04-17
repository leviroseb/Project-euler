//2520 is the smallest number that can be divided by each....

#include<iostream>
using namespace std;

void dividir(double n, int k)
{
    for(int i=100;i<n;i++)
    {
        int c=0;
        for(int j=1;j<=k;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

        if(c==k)
        {
            cout<<i<<",";
        }



    }
}


int main()
{
    double n;
    int k;
    cout<<"numero: ";
    cin>>n;
    cout<<"divisores: ";
    cin>>k;
    dividir(n,k);
}
