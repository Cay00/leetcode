class Solution(object):
    def isPalindrome(self, x):
        reversed_l = str(x)[::-1]

        return reversed_l == str(x)


# Test
if __name__ == "__main__":
    x = 121
    result = Solution().isPalindrome(x)
    print(result)
