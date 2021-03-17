//
// Created by mac on 2021-03-14.
//
#include "vector"
#include "unordered_map"

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> record;
    for(int i = 0 ; i < nums.size() ; i ++){

        int complement = target - nums[i];
        if(record.find(complement) != record.end()){
            int res[] = {i, record[complement]};
            return vector<int>(res, res + 2);
        }

        record[nums[i]] = i;
    }
    return vector<int>(0,0);
}

int main(){
    int data[] = {2, 7, 11 ,15};
    vector<int> nums(data, data + 5);

    vector<int> res = twoSum(nums, 18);
    for( int i = 0; i < res.size(); ++i){
        printf("%d \n", res[i]);
    }
    return 0;

}