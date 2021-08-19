//comaprsion

#include<iostream>
using namespace std;
bool lSearch(int n,int k,int a[])
{
int b=0;
for(int i=0;i<n;i++)
{
b++;
if(a[i]==k)
{
cout<<"comaprsion"<< b<<endl;
return true;
}
}
cout<<"comaprsion"<< b;
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