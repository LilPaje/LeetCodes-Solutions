# 1275. Find Winner on a Tic Tac Toe Game


__Tic-tac-toe__ is played by two players _A_ and _B_ on a _3_ _x_ _3_ grid. The rules of Tic-Tac-Toe are:

- Players take turns placing characters into empty squares _' '_.
- The first player _A_ always places _'X'_ characters, while the second player _B_ always places _'O'_ characters.
- _'X'_ and _'O'_ characters are always placed into empty squares, never on filled ones.
- The game ends when there are _three_ of the same (non-empty) character filling any row, column, or diagonal.
- The game also ends if all squares are non-empty.
- No more moves can be played if the game is over.

Given a 2D integer array _moves_ where _moves[i]_ _=_ _[rowi, coli]_ indicates that the _ith_ move will be played on _grid[rowi][coli]_. return __the winner of the game if it exists__ (_A_ or _B_). In case the game ends in a draw return _"Draw"_. If there are still movements to play return _"Pending"_.

You can assume that _moves_ is valid (i.e., it follows the rules of __Tic-Tac-Toe__), the grid is initially empty, and _A_ will play first.

 

__Example 1__:
> __Input__: moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
> __Output__: "A"
> __Explanation__: A wins, they always play first.

__Example 2__:
> __Input__: moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
> __Output__: "B"
> __Explanation__: B wins.

__Example 3__:
> __Input__: moves = [[0,0],[1,1],[2,0],[1,0],[1,2],[2,1],[0,1],[0,2],[2,2]]
> __Output__: "Draw"
> __Explanation__: The game ends in a draw since there are no moves to make.

 

__Constraints__:
- 1 <= moves.length <= 9
- moves[i].length == 2
- 0 <= rowi, coli <= 2
- There are no repeated elements on moves.
- moves follow the rules of tic tac toe.

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D