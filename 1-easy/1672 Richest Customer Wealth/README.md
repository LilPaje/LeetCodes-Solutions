# 1672. Richest Customer Wealth

You are given an _m x n_ integer grid _accounts_ where _accounts[i][j]_ is the amount of money the _i​​​​​​​​​​​th​​​​_ customer has in the _j​​​​​​​​​​​th​​​​_ bank. Return _the __wealth__ that the richest customer has_.

A customer's __wealth__ is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum __wealth__.

 

__Example 1__:
> __Input__: accounts = [[1,2,3],[3,2,1]]
> __Output__: 6
> __Explanation__:
> 1st customer has wealth = 1 + 2 + 3 = 6
> 2nd customer has wealth = 3 + 2 + 1 = 6
> Both customers are considered the richest with a wealth of 6 each, so return 6.

__Example 2__:
> __Input__: accounts = [[1,5],[7,3],[3,5]]
> __Output__: 10
> __Explanation__: 
> 1st customer has wealth = 6
> 2nd customer has wealth = 10 
> 3rd customer has wealth = 8
> The 2nd customer is the richest with a wealth of 10.

__Example 3__:
> __Input__: accounts = [[2,8,7],[7,1,3],[1,9,5]]
> __Output__: 17

 

__Constraints__:
- m == accounts.length
- n == accounts[i].length
- 1 <= m, n <= 50
- 1 <= accounts[i][j] <= 100

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D