"""
Question : https://leetcode.com/problems/longest-absolute-file-path/
"""

class Solution(object):
    def lengthLongestPath(self, input):
        """
        :type input: str
        :rtype: int
        """
        stack = [(-1, 0)] # directory depth, current total string length
        max_len = 0
        for p in input.split("\n"):
            depth = p.count('\t')
            p = p.replace('\t', '')
            while stack and depth <= stack[-1][0]: # , or the current directory is shallower
                stack.pop()
            if '.' not in p: # table of Contents
                stack.append((depth, len(p) + stack[-1][1] + 1))
            else: # 
                max_len = max(max_len, len(p) + stack[-1][1])
        return max_len