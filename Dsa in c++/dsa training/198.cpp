#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int total=0;
        int mx=0;
        for(int i = 0 ; i < nums.size();i++){
            total = nums[i];
            int a =2 ;
            for(int j = i+2 ; j <nums.size();j+a ){
                total=nums[i];
                total = total+nums[j];
                if(j==nums.size()||j==nums.size()-1){
                    a++;
                if(mx<total)
                {
                mx=total;
                }

                } 
            }
            return mx;
        }
        
    }
    int main (){
        
        vector<int>nums();
        for ( int i = 0 ; i <)    
        int ans = rob(vector<int>nums);
        cout << ans;


        
    }
};