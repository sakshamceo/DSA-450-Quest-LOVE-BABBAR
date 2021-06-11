int kthSmallest(int arr[], int l, int r, int k) {
         
        for(int i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
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
         return arr[k];
       
    }