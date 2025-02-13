class Solution:
    def arraySign(self, nums: List[int]) -> int:
        negatives = 0
        if 0 in nums:
            return 0
        for i in nums:
            if i < 0:
                negatives += 1
        
        if negatives % 2 == 0:
            return 1
        elif negatives %2 != 0:
            return -1