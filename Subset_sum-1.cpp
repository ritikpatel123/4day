public:
   void ss(int ind,int sum,vector<int>& arr,vector<int>& sums)
   {
       if(ind>=arr.size())
       {
           sums.push_back(sum);
           return;
       }
       ss(ind+1,sum+arr[ind],arr,sums);
       ss(ind+1,sum,arr,sums);
       
       
   }
    vector<int> subsetSums(vector<int> arr, int N)
    {
    
        vector<int> sums;
        ss(0,0,arr,sums);
        return sums;
    }
