#include<iostream>
using namespace std;
int main(){
int n,count=0;
cout<<"enter the number";
cin>>n;
while(n!=10){
    n=n/10;
    count++;
}
    cout<<"total digit="<<count;
    return 0;
}



