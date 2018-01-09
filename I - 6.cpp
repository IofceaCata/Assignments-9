#include<iostream>
using namespace std;
int v[100],n,k;
void poz(int li,int ls,int & k,int v[100])
{
    int i=li,j=ls,c,i1=0,j1=-1;
    while(i<j)
    {
        if(v[i]>v[j])
        {
            c=v[j];v[j]=v[i];v[i]=c;
            c=i1;i1=-j1;j1=-c;
        }
            i=i+i1;
            j=j+j1;
        }
    k=i;
}

void quick(int li,int ls)
{
    if(li<ls)
    {
        poz(li,ls,k,v);
        quick(li,k-1);
        quick(k+1,ls);
    }
}

int main()
{
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    quick(1,n);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
