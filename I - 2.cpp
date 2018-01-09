#include<iostream>

using namespace std;

int v[100],n,x,m;

int caut (int s, int d)
{
    if(s>d)
        return -1;
    else
        {
            m =(s+d)/2;
            if (x==v[m])
                return m;
            if (x<v[m])
                return caut(s,m-1);
            else
                return caut(m+1,d);
        }
}

int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cout<<caut(1,n);
}
