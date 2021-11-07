#include<iostream>
using namespace std;

int main(){
cout<<"Program starts\n";
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){

    cout<<" ";
}
for(int j=1;j<=i;j++){
cout<<j<<" ";
}
    cout<<endl; 

       
}

cout<<"Program ends\n";
    return 0;
}