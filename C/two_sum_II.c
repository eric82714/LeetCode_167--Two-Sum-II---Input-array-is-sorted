/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int* result = malloc(*returnSize * sizeof(int));
        
    for(int i = 0; i < numbersSize-1; i++) {
        if(i > 0 && numbers[i] == numbers[i-1]) continue;
        for(int j = i + 1; j < numbersSize; j++) {
            if(j > i+1 && numbers[j] == numbers[j-1]) continue; 
            if(numbers[i] + numbers[j] == target) {
                result[0] = i + 1;
                result[1] = j + 1;
            }
        }
    }   
    return result;
}
