#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int smallest=n;
    for(int i=sqrt(n);i>=2;i--){
        if(n%i==0){
            smallest = i;
        }
    }
    cout<<n/smallest<<endl;
     return 0;
}