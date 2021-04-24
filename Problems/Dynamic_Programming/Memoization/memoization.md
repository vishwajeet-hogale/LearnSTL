# Memoization - Dynamic Programming

Memoization is an optimization technique used primarily to speed up computer programs by storing the results of expensive function calls and returning the cached result when the same inputs occur again.

## Steps to make a memoized solution

* Try to form a recursive solution.
  * Visualize the problem as tree.
  * Implement that tree using recursion. (Brute force recursion approach)
  * Test it. <br></br>
    This first step gives the correct output but it usually takes a lot of time to process when a large input is given.
    For example :
    Fib(50) takes a lot time to process.
    So to make the code more efficient memoization is used so that it takes lesser time to execute when a large input is given.
* Make it efficient using a memoized array.
  * Add a memo object. (Array,Dictionary,etc)
  * Add a base case to return memo values
  * store return values into the memo array/dictionary.
