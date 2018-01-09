#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n,m,l,r,nr,x,a[2500];
//vector<int> a;

void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        //a.push_back(x);
    }
    cin>>m;

    for(int i=1;i<=m;i++){
        nr=0;

        cin>>l>>r;
        rvereseArray(a,l-1,r);
         //std::reverse(a.begin()+l-1,a.begin()+r);


        for(int j=0;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if(a[j]>a[k])
                    nr++;
        if(nr%2==0)
            cout<<"even"<<'\n';
        else
            cout<<"odd"<<'\n';


    }


}
