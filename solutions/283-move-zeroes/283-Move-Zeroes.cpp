class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int pos=0;
        // bring all non - zero elements forward first using a new variable jaise int pos.
        for ( int i =0; i< n ;i++){
            if(nums[i]!=0){
                nums[pos]=nums[i];
                pos++;
            }
        }  
        // temporarily arry looks like [a,b,c,b,a,c]
        //but with while loop arry become [a,b,c,0,0,0]
        while (pos<n){
            nums[pos]=0;
            pos++;
        }  

    }   

        
    
};