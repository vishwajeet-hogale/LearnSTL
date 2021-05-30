
class Solution(object):
    def customSortString(self, order, str):
        """
        :type order: str
        :type str: str
        :rtype: str
        """
        d = {}
# 1. traverse T to build the counting 
        for c in str:
            if c not in d:
                d[c] = 1
            else:
                d[c] += 1

# 2. traverse S to construct the relative order
        ans = ''
        for c in order:
            for _ in range(d.get(c,0)):
                ans+= c
#reset the counting:
            d[c] = 0

#adding in unfined letters
        for i in range(26):
            for j in range(d.get(chr(i + 97),0)):
                ans += chr(i + 97)
        return ans
