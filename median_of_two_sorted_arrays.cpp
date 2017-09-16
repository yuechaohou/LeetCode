class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1= nums1.size(), size2= nums2.size();
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        } 
        int min=0, max=size1, total= (size1+size2)/2;
        bool even = ((size1+size2)%2==0);
        while(min<=max){
            int mid1= (min+max)/2, mid2= total- mid1;
            if(mid1>0 && nums1[mid1-1]>nums2[mid2])      max=mid1-1;
            else if(mid1<size1 && nums1[mid1]<nums2[mid2-1])    min=mid1+1;
            else{
                int left_max =0, right_min =0;
                if(mid1==size1)     right_min=nums2[mid2];
                else if(mid2==size2)   right_min=nums1[mid1];
                else right_min=(nums1[mid1]>nums2[mid2])?nums2[mid2]:nums1[mid1];
                
                if(!even) return right_min;
                
                if(mid1==0)    left_max=nums2[mid2-1];
                else if(mid2==0)     left_max=nums1[mid1-1];
                else left_max=(nums1[mid1-1]>nums2[mid2-1])?nums1[mid1-1]:nums2[mid2-1];
            
                return (left_max+right_min)/2.0;
            }
        }
    }
};