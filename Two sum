class Solution {   //8ms
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mymap;
        vector<int> res ;
        
        for(int i=0; i<nums.size();i++)
        {
            mymap[nums[i]]= i;
        }
        
        for(int i=0; i<nums.size();i++)
        {
            int result = target - nums[i];
            if(mymap.find(result) != mymap.end() && mymap[result] != i)
            {
                res.push_back(i);
                res.push_back(mymap[result]);
                return res;
            }
        }
        return res;
    }
};

/*   it takes 364ms
class Solution {
 public:
     vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>sum;        
         for(int i=0;i<nums.size();i++){
             for(int j=i+1;j<nums.size();j++){
                 if(nums[j]==target-nums[i]){
                     sum.push_back(i);
                     sum.push_back(j);               
                 }            
             }
         }
          return sum; 
     }
 };
*/
