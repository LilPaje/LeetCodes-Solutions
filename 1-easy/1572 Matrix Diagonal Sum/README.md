# 1572. Matrix Diagonal Sum

Given a square matrix _mat_, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

 

__Example 1__:
> __Input__: mat = [[1,2,3],
>                   [4,5,6],
>                   [7,8,9]]
> __Output__: 25
> __Explanation__: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
> Notice that element mat[1][1] = 5 is counted only once.

__Example 2__:
> __Input__: mat = [[1,1,1,1],
>                   [1,1,1,1],
>                   [1,1,1,1],
>                   [1,1,1,1]]
> __Output__: 8

> __Example 3__:
> __Input__: mat = [[5]]
> __Output__: 5

 

__Constraints__:
- n == mat.length == mat[i].length
- 1 <= n <= 100
- 1 <= mat[i][j] <= 100

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D