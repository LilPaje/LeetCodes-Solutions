# 682. Baseball Game

You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings _operations_, where _operations[i]_ is the _ith_ operation you must apply to the record and is one of the following:

* An integer _x_.
    * Record a new score of _x_.
* _'+'_.
    * Record a new score that is the sum of the previous two scores.
* _'D'_.
    * Record a new score that is the double of the previous score.
* _'C'_.
    * Invalidate the previous score, removing it from the record.

Return _the sum of all the scores on the record after applying all the operations_.

The test cases are generated such that the answer and all intermediate calculations fit in a __32-bit__ integer and that all operations are valid.

 

__Example 1__:
> __Input__: ops = ["5","2","C","D","+"]
> __Output__: 30
> __Explanation__:
> "5" - Add 5 to the record, record is now [5].
> "2" - Add 2 to the record, record is now [5, 2].
> "C" - Invalidate and remove the previous score, record is now [5].
> "D" - Add 2 * 5 = 10 to the record, record is now > [5, 10].
> "+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
> The total sum is 5 + 10 + 15 = 30.

__Example 2__:
> __Input__: ops = ["5","-2","4","C","D","9","+","+"]
> __Output__: 27
> __Explanation__:
> "5" - Add 5 to the record, record is now [5].
> "-2" - Add -2 to the record, record is now [5, -2].
> "4" - Add 4 to the record, record is now [5, -2, 4].
> "C" - Invalidate and remove the previous score, record is now [5, -2].
> "D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
> "9" - Add 9 to the record, record is now [5, -2, -4, 9].
> "+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
> "+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
> The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.

__Example 3__:
> __Input__: ops = ["1","C"]
> __Output__: 0
> __Explanation__:
> "1" - Add 1 to the record, record is now [1].
> "C" - Invalidate and remove the previous score, record is now [].
> Since the record is empty, the total sum is 0.

 

__Constraints__:
- 1 <= operations.length <= 1000
- operations[i] is "C", "D", "+", or a string representing an integer in the range [-3 * 104, 3 * 104].
- For operation "+", there will always be at least two previous scores on the record.
- For operations "C" and "D", there will always be at least one previous score on the record.

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D