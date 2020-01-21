class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        map = {}
        for i, number in enumerate(numbers):
            if target - number in map:
                return(map[target - number] + 1, i + 1)
            else:
                map[number] = i
