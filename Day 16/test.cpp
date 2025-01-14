#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
int platform(int a[], int b[], int n)
{
	int needed=1;
	int ans=1;
	sort(a,a+n);
	sort(b,b+n);
	int i=1,j=0;
	while(i<n && j<n)
	{
		if(a[i]<b[j])
		{
			needed++;
			i++;
   		if(needed>ans)
			needed=ans;
		}		
		else
		{
			needed--;
			j--;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i = 0; i < n; i++)
		cin>>a[i];
	for (int i = 0; i < n; i++)
		cin>>b[i];
	int ans=platform(a,b,n);
	cout<<ans<<endl;
	getch();
	return 0;
}