#include <iostream>
using namespace std;
int main() {
    int l = 5 ,arr[] = {7,10,4,20,15}, k = 4;
     for(int i=0;i<l-1;i++)
        {
    z        for(int j=i+1;j<l;j++)
            {
                if(arr[i]>arr[j])
                {
                    int c=0;
                    c=arr[i];
                    arr[i]= arr[j];
                    arr[j]=c;
                }
            }
        }
        for(int i=0;i<l;i++)
        {
            cout<<arr[i]<<endl;
        }
}
