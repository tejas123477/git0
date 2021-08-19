#include<iostream>
using namespace std;
bool lSearch(int n,int k,int a[])
{
for(int i=0;i<n;i++)
{
if(a[i]==k)
return true;

}
return false;
}
int main()
{
int n,k;
cout<<"enter no of element in array";
cin>>n;
cout<<"enter element to be found";
cin>>k;
int a[n];
cout<<"enter array elements";
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