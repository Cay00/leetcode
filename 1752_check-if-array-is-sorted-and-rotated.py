class Solution:
    def check(self, nums: List[int]) -> bool:
        count = 0
        n = len(nums)

        for i in range(n):
            if nums[i] > nums[(i + 1) % n]:
                count += 1

        return count <= 1

# Test
if __name__ == "__main__":
    nums = [3, 4, 5, 1, 2]
    result = Solution().check(nums)
    print(result)
