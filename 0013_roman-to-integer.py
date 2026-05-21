class Solution(object):
    def romanToInt(self, roman):
        roman_to_int = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50,
            'C': 100, 'D': 500, 'M': 1000
        }

        integer = 0
        i = 0

        while i < len(roman):
            if i + 1 < len(roman) and roman_to_int[roman[i]] < roman_to_int[roman[i + 1]]:
                integer += roman_to_int[roman[i + 1]] - roman_to_int[roman[i]]
                i += 2
            else:
                integer += roman_to_int[roman[i]]
                i += 1

        return integer


# Test
if __name__ == "__main__":
    roman = "III"
    result = Solution().romanToInt(roman)
    print(result)
