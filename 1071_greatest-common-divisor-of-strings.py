class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        if str1 + str2 == str2 + str1:
            length = gcd(len(str1), len(str2))
            return str1[:length]
        else:
            return ""


# Test
if __name__ == "__main__":
    str1 = "ABCABC"
    str2 = "ABC"
    result = Solution().gcdOfStrings(str1, str2)
    print(result)
