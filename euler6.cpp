#include<iostream>
using namespace std;

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int suma(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        c+=(i*i);
    }

    return c;
}

int cuadrado_suma(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        c+=i;
    }

    return c*c;
}

int main()
{
    int n;
    cout<<"numero: ";
    cin>>n;
    cout<<cuadrado_suma(n)-suma(n);
    return 0;
}
