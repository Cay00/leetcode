class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        s1 = set(nums1)
        s2 = set(nums2)

        common = s1 & s2
        
        return min(common) if common else -1


# # Test
nums1 = [1,2,3]
nums2 = [2,4]
result = Solution().getCommon(nums1, nums2)
print(result)
