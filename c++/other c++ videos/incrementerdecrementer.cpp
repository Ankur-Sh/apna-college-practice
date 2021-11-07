#include<iostream>
using namespace std;

int main()
{
    int i=5, j=12, k=20;

int m= i++ - --j + ++k + ++i + j++ + k++;
 cout<<i<<endl;
 cout<<j<<endl;
 cout<<k<<endl;
 cout<<m<<endl;
 
 return 0;
 
 }