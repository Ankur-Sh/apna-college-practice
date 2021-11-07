#include<iostream>
using namespace std;

int main(){

    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;
    
    int sum=amount1+amount2;
cout<<"sum\n";
cout<<sum<<endl;
if(sum%2==0) {
    cout<<"even"<<endl;}
    else{
        cout<<"odd"<<endl;
    }



return 0;
}