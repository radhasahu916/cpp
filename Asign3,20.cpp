
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum=sum+j;
        }
    }

    cout<<"sum"<<sum;
    return 0;




}
