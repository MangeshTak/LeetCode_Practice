class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ab;
        int tmp,minIndex,i,j;
        ab.reserve( nums1.size() + nums2.size() );            
        ab.insert( ab.end(), nums1.begin(), nums1.end() );        
        ab.insert( ab.end(), nums2.begin(), nums2.end() );
        
        for (i = 0; i < ab.size()-1; i++) {
            minIndex = i;
            for (j = i + 1; j < ab.size(); j++)
                  if (ab[j] < ab[minIndex])
                        minIndex = j;
            if (minIndex != i) {
                  tmp = ab[i];
                  ab[i] = ab[minIndex];
                  ab[minIndex] = tmp;
            }
      }
        
        if(ab.size()%2==0)
        {
            double ret = double((ab[ab.size()/2]+(ab[(ab.size()/2)-1])))/2;
            
            return ret;
        }
        else
        {
            return(ab[ab.size()/2]);
        }
        
    }
};