#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}

int main()
{
int a=200;
int b=300;
swap(&a,&b);
cout<<a;
cin >>a;
return 0;
}
