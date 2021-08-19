//comaprsion sorted binary

#include<iostream>
using namespace std;
bool lSearch(int n,int x,int arr[])
{
int c=0;
int low=0,high=n-1;
while(low<=high)
{
    c++;
int mid=(low+high)/2;
if(arr[mid]==x)
{
cout<<"comaprsion"<<c<<endl;
	return mid;
}else if(arr[mid]>x)

	high=mid-1;
else
	low=mid+1;

}
cout<<"comaprsion"<<c<<endl;
return -1;
}
int main()
{
int n,k;
cout<<"enter no of element in array";
cin>>n;
cout<<"enter element to be found";
cin>>k;
int a[n];
cout<<"enter array elements in sorted way";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
if(lSearch(n,k,a)==true)
cout<<"Element Found in array";
else
cout<<"Element not Found in array";
return 0;
}