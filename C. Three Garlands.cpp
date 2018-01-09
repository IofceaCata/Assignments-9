#include<iostream>

using namespace std;
int k1,k2,k3;
int main(){
    cin>>k1>>k2>>k3;
    if(k1==1||k2==1||k3==1)
        cout<<"YES";
    else
        if(k1==3&&k2==3&&k3==3)
            cout<<"YES";
        else
            if((k1==2 && k2==2)||(k2==2 && k3==2)||(k1==2 && k3==2))
                cout<<"YES";
            else
                if((k1==2&&k2==4&&k3==4)||(k1==4&&k2==2&&k3==4)||(k1==4&&k2==4&&k3==2))
                    cout<<"YES";
                else
                    cout<<"NO";


}
