#include<iostream>

using namespace std;
void ShellSort(int a[], int n)
{
	int i, j, k, temp;

	for(i = n/2; i > 0; i = i/2)
	{
		for(j = i; j < n; j++)
		{
			for(k = j-i; k >= 0; k = k-i)
			{

				if(a[k+i] >= a[k])
				break;

				else
				{
					temp = a[k];
					a[k] = a[k+i];
					a[k+i] = temp;
				}
			}
		}
	}
}
int main()
{
	int n, i;
	cin>>n;

	int arr[n];
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	ShellSort(arr, n);


	for (i = 0; i < n; i++)
		cout<<" "<<arr[i];

}
