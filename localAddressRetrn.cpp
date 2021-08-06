#include<iostream>
using namespace std;

int* foo(int a,int b)
	{
	  int sum = a + b;

	  return &sum;	/* Non-complaint */
	}

int main()
{
 cout<<foo(2,3);
return 0;
}
