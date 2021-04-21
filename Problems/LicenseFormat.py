"""
Question : You are given a license key represented as a string s that consists of only alphanumeric characters and dashes. The string is separated into n + 1 groups by n dashes. You are also given an integer k.
        We want to reformat the string s such that each group contains exactly k characters, except for the first group, which could be shorter than k but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.
        return the reformatted license key.
"""

class Solution(object):
    def licenseKeyFormatting(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        S = s
        K = k
        S_upper=S.upper()
        str_S=''.join(S_upper.split('-'))
        if K==1:
            return '-'.join(str_S)
        result=''
        count=0
        i=len(str_S)
        while i>K:
            result=str_S[i-K:i]+result
            result='-'+result
            i-=K
            count+=K
        result=str_S[0:len(str_S)-count]+result
        return result   