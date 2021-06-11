//Maximum and minimum of an array using minimum number of comparisons
pair<long long, long long> getMinMax(long long a[], int n) {
    pair <long long , long long>res;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
        if(a[i]<=min)
        {
            min=a[i];
        }
    }
    res.first =min;
    res.second=max;
    return res;
