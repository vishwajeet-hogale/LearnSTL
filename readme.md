# All problems being solved here are done using python, c++ or c

- Open the Problems Directory
- Check the this readme and refer to the code which is either written in python or c++ or c

## Questions

1) Split the array into two partions such that the sum of both partitons is the same.
    Constraint : You can swap one element from one partition to another.
2) On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. Return the minimum time in seconds to visit all the points in the order given by points.

    You can move according to these rules:

    In 1 second, you can either:
    move vertically by one unit,
    move horizontally by one unit, or
    move diagonally sqrt(2) units (in other words, move one unit vertically then one unit horizontally in 1 second).
    You have to visit the points in the same order as they appear in the array.
    You are allowed to pass through points that appear later in the order, but these do not count as visits.
3) Iterative knapsack problem solution.
4) Hamiltonian cycle
5) Find middle elemnt in a linked list]
6) Anagram Solution : two strings with words. Go through each word and check if anagrams can be formed. If not then minimum modification that is needed to make it into an anagram
7) License plate formatting : <https://leetcode.com/problems/license-key-formatting/>
8) Longest Absolute File Path : <https://leetcode.com/problems/longest-absolute-file-path/>
9) Next Permutation : <https://leetcode.com/problems/next-permutation/>
10) Memoized fibonacci
11) Count the number of paths in the grid from one location to another.
12) Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
13) Combination sum : <https://leetcode.com/problems/combination-sum/>
14) Maximum Subarray : <https://leetcode.com/problems/maximum-subarray/>
15) canSum : Function to check if a target sum be calculated given an array of numbers. Dp problem
16) climbing stairs : combination of 1's and 2's to reach nth step
17) is subsequence : Is s a subsequence of t
18) Sell and buy stocks wit htransaction fee : <https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/>
19) Integer Break : <https://leetcode.com/problems/integer-break/>
20) Maxdepth of a tree
21) symmetric tree
22) Balanced Binary Tree
23) FLatten Binary Tree to linked list
24) Third Maximum number in an array
25) Kth largest number in an array
26) Find Duplicate Number (Only one number is repeated in the list/array)
27) Minimum Operations to Make the Array Increasing : <https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/>
28) Invert Binary Tree
29) Monotone array
30) Number of Susequences
31) Count The number of Teams : <https://leetcode.com/problems/count-number-of-teams/> (Backtracked)
32) Count The number of Teams : <https://leetcode.com/problems/count-number-of-teams/> (Iterative)
33) Validate a binary Tree <https://leetcode.com/problems/validate-binary-search-tree/>
34) Range Sum of a Binary Tree
35) Two sum : Hashmap Solution <https://leetcode.com/problems/two-sum/>
36) Good Nodes : <https://leetcode.com/problems/count-good-nodes-in-binary-tree/>
37) Adding two lists 
38) Checking if a linked list is a palindrome
39) Ones and zeroes <https://leetcode.com/problems/ones-and-zeroes/>
40) Longest paranthesis substring 
41) Toeplitz Matrix : A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.
42) Spiral Matrix : <https://leetcode.com/problems/spiral-matrix/>
43) First Unique Character : <https://leetcode.com/problems/first-unique-character-in-a-string/>
44) Sort by frequency : <https://leetcode.com/problems/sort-characters-by-frequency/>
45) Sort increasing order : <https://leetcode.com/problems/sort-array-by-increasing-frequency/>
46) Genearte Parenthesis : <https://leetcode.com/problems/generate-parentheses/>
47) Longest Substring Match : <https://leetcode.com/problems/longest-substring-without-repeating-characters/>
48) Add two linked lists : <https://leetcode.com/problems/add-two-numbers-ii/>
49) Trim BST : <https://leetcode.com/problems/trim-a-binary-search-tree/>
50) Remove instances of an element : <https://leetcode.com/problems/remove-element/>
51) Relative Sorting : <https://leetcode.com/problems/relative-sort-array/>
52) K Closest Points to Origin : <https://leetcode.com/problems/k-closest-points-to-origin/>
53) Top K frequent items : priority_queue <https://leetcode.com/problems/top-k-frequent-elements/>
54) All elements in two binary tree : <https://leetcode.com/problems/all-elements-in-two-binary-search-trees/>
55) Rotate String : <https://leetcode.com/problems/rotate-string/>
56) Majority Element II :  <https://leetcode.com/problems/majority-element-ii/>
57) Count Vowel Strings : <https://leetcode.com/problems/count-sorted-vowel-strings/>
58) Remove K digits
59) Minimum cost path : <https://leetcode.com/problems/minimum-path-sum/>

## Answers File name according to numbers

1) equalarr.cpp (c++ STL approach)
2) min-path-2d-plane.cpp
3) knapsack.cpp (c++ STL approach)
4) hamiltonian.cpp (c++ STL approach)
5) midelelist.c
6) anagram.c
7) LicenseFormat.py
8) LongestAbsoluteFilePath.py
9) nextpermutation.cpp (c++ STL approach)
10) fibdp.cpp
11) countpathfromtoplefttobottomright.cpp (No memoization)
12) searchindexpostion.cpp
13) combinationsum.cpp
14) maximumsubarray.cpp (DP approach c++)
15) Dynamic_Programming/Memoization/canSum.cpp (Dp memoization)
16) Dynamic_Programming/Memoization/climbingstairs.cpp (Dp memoization)
17) issubsequence.cpp (Brute Force approach)
18) sellstockwithtransaction.py (Iterative)
19) IntegerBreak.cpp : Backtracking solution
20) Tree/maxdepth.cpp : Recursive
21) Tree/symmetrictree.cpp : Recursive
22) Tree/balancedbintree.cpp : Recursive
23) Tree/flattentree.cpp : Recursive
24) Array/thirdMax.cpp
25) Array/kthlargestarray.cpp
26) Array/FindDuplicateNumber.cpp
27) Array/MinimumOperationsToMakeIncArray.cpp
28) Tree/invertTree.cpp
29) Array/MonotoneArray.cpp : Iterative
30) Array/numberofsubsequences.cpp
31) Backtracking/CountTheNumberOfTeams.cpp
32) Array/CountTheNumberOfTeams.cpp
33) Tree/validateBinaryTree.cpp
34) Tree/RangeSumBST.cpp (inorder approach)
35) Array/twosum.cpp
36) Tree/goodnodes.cpp
37) LinkedList/addingtwolists.cpp
38) LinkedList/palindromelist.cpp
39) Recursion/oneszeroes.cpp
40) Array/longestparanthesismatch.cpp (Brute force approach)
41) Array/Toeplitzmat.cpp
42) Array/spiralmatrix.cpp
43) Array/firstuniquecharacter.cpp
44) String/sortbyfreq.cpp
45) Array/sortincfrq.cpp
46) Backtracking/generateParenthesis.cpp
47) String/longestsubstring.cpp
48) LinkedList/add-linked-list-ii.cpp 
49) Tree/trimBST.cpp
50) Array/removeInstance.cpp
51) Array/relativeSorting.cpp
52) Array/kclosestpintstoorigin.cpp
53) Array/Topkfreqitems.cpp
54) Tree/allelementsin2binarytree.cpp
55) String/rotateString.cpp
56) Array/majorityElements.cpp
57) Backtracking/countVowelStrings.cpp
58) Backtracking/removeKDigits.cpp
59) Dynamic_Programming/minpathcost.cpp




## GFG 
* Backtracking
    * https://www.geeksforgeeks.org/backtracking-algorithms/