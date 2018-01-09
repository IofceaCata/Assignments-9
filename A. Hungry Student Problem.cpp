#include<iostream>
using namespace std;

long long n,x,ok;
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        ok=0;
        for(int j=0;j<=33;j++)
            for(int k=0;k<=33;k++)
                if(3*k+7*j==x){
                    cout<<"YES"<<'\n';
                    ok=1;
                    j=33;
                }
        if(ok==0)
            cout<<"NO"<<'\n';
    }
}
