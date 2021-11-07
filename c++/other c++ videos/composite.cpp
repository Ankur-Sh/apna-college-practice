#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"ENTER 2 NUMBERS:";
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2; i<num;i++)
        {if(num%i==0)
       
            cout<<num<<endl;
           
        }
         if(i==num)    
             continue;
}



return 0;
}