class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:

        prefixes = set()

        for num in arr1:
            s = str(num)

            for i in range(1, len(s) + 1):
                prefixes.add(s[:i])

        best = 0

        for num in arr2:
            s = str(num)

            for i in range(1, len(s) + 1):
                if s[:i] in prefixes:
                    best = max(best, i)

        return best


# Test
if __name__ == "__main__":
    arr1 = [1, 10, 100]
    arr2 = [1000]
    result = Solution().longestCommonPrefix(arr1, arr2)
    print(result)
