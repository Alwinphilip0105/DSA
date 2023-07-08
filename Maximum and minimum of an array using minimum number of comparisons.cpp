/*Maximum and minimum of an array using minimum number of comparisons
Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35
*/
//method 1
void main()
{int a[10];
  int min,max=0;
  for(int i= 0;i<n;i++)
  {
 cin>>a[i];
  }
 for(int i= 0;i<n;i++)
  {
 if (a[i]<min)
 {min=a[i];}
 else (a[i]>max)
   {
   max=a[i];
   }
  }
 cout<<"min:"<<min;
 cout<<"max:"<<max;
}
//method 2
void main()
{int a[10];
 
 for(int i= 0;i<n;i++)
  {
 cin>>a[i];
  }
 int min=a[0],max=a[0];
 for(int i= 0;i<n;i++)
  {
 if (a[i]<min)
   min=a[i];
 else (a[i]>max)
   {
   max=a[i];
   }
  cout<<"min:"<<min;
 cout<<"max:"<<max;
  }
 
}
