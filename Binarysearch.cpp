#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int key)
{
   int s=0;
   int e=n-1;
   while(s<=e)
   {
       int mid=(s+e)/2;
       
       if(a[mid]==key)
       {
           return mid;
       }
       else if(a[mid]>key)
       {
            e=mid-1;
           
           
       }
       else
       {
        s=mid+1;  
           
       }
   }
   return 1;
}
bool arraySortedOrNot(int a[], int n)
{
     
    if (n == 1 || n == 0)
    {
        return true;
    }
    if(a[n-2]>=a[n-1])
    {
        return false;
    }
    bool isSmallerSorted=arraySortedOrNot(a,n-1);
    return isSmallerSorted;
}
int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
     int key;
      if (arraySortedOrNot(a, n))
    {
         cout<<"enter the digit to search"<<endl;
    cin>>key;
  cout<<"index size of the searching element: "<<binarySearch(a,n,key)<<endl;
    }
    else
{
    cout<<"not sorted"<<endl;
}
    
 
    return 0;
}