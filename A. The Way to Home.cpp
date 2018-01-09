#include<iostream>
using namespace std;

long long n,d,nr=0,x,ok=1;
char a[110];
int main(){
    cin>>n>>d;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    int i=1;

    while(i!=n)
    {
        x=i;
        i=i+d;
        while(a[i]!='1'){
            i--;
        }
        if(i==x)
        {
            ok=0;
            cout<<"-1";
            break;
        }

        nr++;

    }
    if(ok==1)
        cout<<nr;

}
