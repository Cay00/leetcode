class Solution(object):
    def addTwoNumbers(self, l1, l2):
        result = []
        for i in range(len(l1)):
            result.append(l1[i] + l2[i])
            result[i] %= 10

        reversed_l = list(reversed(result))  # Tworzymy nową listę w odwróconym porządku
        print(reversed_l)
        return result


# Test
if __name__ == "__main__":
    l1 = [2, 4, 3]
    l2 = [5, 6, 4]
    result = Solution().addTwoNumbers(l1, l2)
    print(result)
