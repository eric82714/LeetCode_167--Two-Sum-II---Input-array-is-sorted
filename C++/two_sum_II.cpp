class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2, 0);
        map<int,int> mapVector;
        
        for(int i = 0; i < numbers.size(); i++) {
            if(mapVector.find(target - numbers[i]) != mapVector.end()) {
                result[0] = mapVector[target - numbers[i]]+1;
                result[1] = i+1;
                return result;
            }
                
            else {
                mapVector[numbers[i]] = i;
            }
        }
        return result;
    }
};
