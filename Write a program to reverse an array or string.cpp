//Write a program to reverse an array or string
/* Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
//method 1:
void main()
{
 int a[10];
 cout<<"Enter  number of array elements";
 for(int i= 0;i<n;i++)
  {
 cin>>a[i];
  }
 for(int i= n-1;i<=0;i--)
  {
   cout<<a[i];
  }
}
/* Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
         index -> 0  1   2
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
//method 2 
void main()
{
 int a[10],b[10];
 cout<<"Enter  number of array elements";
 for(int i= 0;i<n;i++)
  {
 cin>>a[i];
  }
 for(int i= 0,int j=n;i<n;i++)
  {
   b[n-1]=a[i];
    }
 for(int i= 0;i<n;i++)
  {
 cout<<b[i];
  }
}
