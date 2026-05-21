class Solution(object):
    def twoSum(self, nums, target):

        # Dictionary to store numbers and their indicies
        num_dictionary = {}

        for i, num in enumerate(nums):
            difference = target - num

            # Check if the difference is in dictionary
            if difference in num_dictionary:
                return [i, num_dictionary[difference]]

            num_dictionary[num] = i

        return None


# # Test
nums = [2, 7, 11, 15]
target = 9
result = Solution().twoSum(nums, target)
print(result)
