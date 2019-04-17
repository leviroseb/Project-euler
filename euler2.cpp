#include<iostream>
using namespace std;

//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

int fibonacci(int n)
{
	int c;
	for(int x=0,y=1,z=x+y,i=0;i<n;x=y,y=z,z=x+y,i++)
	{
		c=z;
	}
	return c;
}



int main()
{
    int n=1;
    int num=0;
    while(fibonacci(n)<4000000)
    {
        if(fibonacci(n)%2==0)
        {
            num=num+fibonacci(n);
        }

        n++;

    }

    cout<<num;

}



