#include<iostream>
using namespace std;

//Problem 1
//Find the sum of all the multiples of 3 0r 5 below 1000


int multiplos(int n)
{
    int c=0;
    for(int i=3;i<n;i++)
    {
        if(i%3==0||i%5==0)
        {
            c+=i;
        }
    }

    return c;
}


int main()
{
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<multiplos(n);
    
}
