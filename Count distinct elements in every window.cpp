/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    map<int,int> mp;
    vector<int> vec;
    
    for(int i = 0; i < n - k + 1; i++) {
        
        for(int j = i; j < i + k; j++)
            
        mp[A[j]]++;
            
        vec.push_back(mp.size());    
        
        mp.erase(A[i]);
    }
    
    for(int i = 0; i < vec.size(); i++)
    
    cout<<vec[i]<<" ";  
}