#include<iostream>
using namespace std;
long long h1,a1,c1,h2,a2,nr,a[110000];
int main(){
    cin>>h1>>a1>>c1>>h2>>a2;
    while(h2>0){
        if((a2>=h1)&&(a1<h2)){
            h1=h1+c1;
            nr++;
            a[nr]=2;
        }
        else{
            h2=h2-a1;
            nr++;
            a[nr]=1;
        }
        h1=h1-a2;
    }
    cout<<nr<<'\n';
    for(int i=1;i<=nr;i++)
        if(a[i]==1)
            cout<<"STRIKE"<<endl;
        else
            cout<<"HEAL"<<endl;

}
