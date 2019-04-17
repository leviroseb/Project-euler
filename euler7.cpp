#include<iostream>
using namespace std;

//What is the 10001 prime number

int primos(int *p, int n)
{

    int w,k=0;
    cout<<"numero primo deseado: ";
    cin>>w;
    for(int i=2; i<n;i++)
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
            p[k]=i;
            k++;
        }
    }

    cout<<k<<endl;
    for(int j=0;j<k;j++)
    {

        cout<<p[j]<<" ";
    }

    for(int r=0;r<k;r++)
    {
        if(r==w)
        {
            cout<<"\nel numero primo "<<w<<" es: "<<p[r-1];
            break;
        }
    }
}


int main()
{
    int *p,q;
    int n;
    p=new int[n];
    cout<<"Ingrese un numero: ";
    cin>>n;
    primos(p,n);

}
