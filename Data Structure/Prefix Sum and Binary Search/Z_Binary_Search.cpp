#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, q;
   cin>>n>>q;
   int arr[n];
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
   }
   sort(arr, arr+n);
   while(q--)
   {
        int x;
        cin>>x;
        int left=0;
        int right=n-1;
        bool flag=false;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==x)
            {
                flag=true;
                break;
            }
            if(arr[mid]<x)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        if(flag)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
   }
   return 0;
}