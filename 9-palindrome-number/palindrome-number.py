class Solution:
    def isPalindrome(self, x: int) -> bool:
        number = str(x)
        end = len(number) - 1
        start = 0
        while end >= 0:
            if number[start] == number[end]:
                start += 1
                end -= 1
            else:
                return False
        return True
        