class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0

        for i in nums:
            count += i

        rang = len(nums)

           
        return  ((rang * (rang + 1)) // 2) - count

        