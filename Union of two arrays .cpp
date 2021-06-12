   int doUnion(int a[], int n, int b[], int m)  {
        set <int > res;
       for(int i=0;i<n;i++)
       {
           res.insert(a[i]);
       }
        for(int i=0;i<m;i++)
       {
           res.insert(b[i]);
       }
       return res.size();
        
    }