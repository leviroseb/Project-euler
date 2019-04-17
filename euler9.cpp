#include<iostream>
using namespace std;

//There exists exactly onr Pythagorean triplet for wich a+b+c=1000, Find the product abc


void pythagorean(int n)
{
    int a,b,c;
    for(int c=1;c<100000;c++)
        for(int a=1;a<c;a++)
            for(int b=1;b<c;b++)
            {
                if(c*c==a*a+b*b&&a+b+c==n)
                {
                    cout<<c<<endl;
                    cout<<a<<endl;
                    cout<<b<<endl;
                }
            }




}


int main()
{
    int n;
    cout<<"suma: ";
    cin>>n;
    pythagorean(n);
    return 0;

}
