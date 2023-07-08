/* Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N
*/

//method 1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findkthsmallest(int a[], int n, int k)
{
    sort(a,a+n);
    return a[k-1];
}
int main()
{int k,n,temp;
  int min,max=0;
cout<<"enter value of k";
cin>>k;
cout<<"enter no of array elements";
cin>>n;
int a[n];
  for(int i= 0;i<n;i++)
  {
 cin>>a[i];
  }
cout << "K'th smallest element is " << findkthsmallest(a, n, k);
  return 0;
}
