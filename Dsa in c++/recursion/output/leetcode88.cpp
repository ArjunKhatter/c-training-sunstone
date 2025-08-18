#include<bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m==0)
        m=n;
        int temp[m];
       
        int i=0 ;
        int j =0;
        int k=0;
        for ( int i = 0 ; i < m ; i ++){
            
            temp[i]=nums1[i];
        }
        while(i<m && j<n){
            if (temp[i]<nums2[j]){
                num1[k] = temp[i];
                i++;
                k++;

            }
            else(temp[i]>nums2[j])
            {
                nums1[k]=temp[j]
                k++;
                j++;

            }
            while(i<n){
                nums1[k]=temp[i];
                k++;
                i++;

            }
            while(j<m){
                nums1[k]=temp[j];
                k++;
                j++;

            }

        }

        for (int x=0 ; x < k;x++){
            cout << nums1 << " ";

        }
        
    }s
};