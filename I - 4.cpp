#include<iostream>

using namespace std;
int v[100], i, n, ok, aux;
int main(){
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>v[i];
    }


    do{
        ok=1;
        for(i=1;i<=n-1;i++)
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=0;
            }
        }
    while(ok!=1);
        cout<<endl;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}



