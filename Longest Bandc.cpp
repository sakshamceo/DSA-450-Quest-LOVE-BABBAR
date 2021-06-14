#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr[] = {1,9,3,13,14,4,10,7,12,6,0,2,15,16,17,18};
  int len=1,max1=0;
  sort(arr, arr+ sizeof(arr)/sizeof(int));
  for(int i=0;i< sizeof(arr)/sizeof(int)-1 ;i++)
  {
    if(arr[i]+1==arr[i+1])
    {
         len++;
    }
    else {
      len=1;
    }
    max1=max(max1,len);
  }
cout<<max1;
}