class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        number = 0
        for n in digits:
            number = number * 10
            number = number + n
        number += 1
        res = [int(d) for d in str(number)]
        return res