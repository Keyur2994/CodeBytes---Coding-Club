class Solution {
  public:
    int largest(vector<int> &arr) {
        int k=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k) 
            k=arr[i];
        }
        return k;
    }
};
