#include<iostream>
using namespace std;
long long n,minim=1000000001,nr,x,nr1=1000000001;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        nr++;
        if(x<minim){
            minim=x;
            nr=0;
            nr1=1000000001;
        }
        else
        if(x==minim){
            if(nr<nr1)
                nr1=nr;
            nr=0;
        }


    }
    cout<<nr1;


}
