/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
*/
#include<iostream>

using namespace std;

int main()
{int n,temp;
  int min,max=0;
cout<<"enter no of array elements";
cin>>n;
int a[n];
  for(int i= 0;i<n;i++)
  {
 cin>>a[i];
  }
int x = 0;
for(int i = 0;i < n;i++)
  if(!a[i]) swap(a[i],a[x++]);
for(int i = x;i < n;i++) 
  if(a[i] == 1) swap(a[i],a[x++]);
  return 0;
  for(int i= 0;i<n;i++)
  {
 cout<<a[i];
  }
}
