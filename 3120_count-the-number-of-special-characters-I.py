class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        res = 0
        letters = [[0, 0] for _ in range(26)]

        for letter in word:
            x = ord(letter)
            if letter >= 'a' and letter <= 'z':
                letters[x - ord('a')][0] +=1
            else:
                letters[x - ord('A')][1] +=1

        for i in range(26):
            if letters[i][0] > 0 and letters[i][1] > 0:
                res+=1
        
        return res

# Test
if __name__ == "__main__":
    word = "aaAbcBC"
    result = Solution().numberOfSpecialChars(word)
    print(result)
