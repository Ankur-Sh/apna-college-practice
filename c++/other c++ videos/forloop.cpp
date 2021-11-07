#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++)
sum=sum+i;
cout<<sum<<endl;
if(sum%2==0){
    cout<<"even"<<endl;
}
else{
    cout<<"odd"<<endl;
}


return 0;
}