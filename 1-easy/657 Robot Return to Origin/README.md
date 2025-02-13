# 657. Robot Return to Origin

There is a robot starting at the position _(0, 0)_, the origin, on a 2D plane. Given a sequence of its moves, judge if this robot __ends up at__ _(0, 0)_ after it completes its moves.

You are given a string _moves_ that represents the move sequence of the robot where _moves[i]_ represents its _ith_ move. Valid moves are _'R'_ (right), _'L'_ (left), _'U'_ (up), and _'D'_ (down).

Return _true_ if the robot returns to the origin after it finishes all of its moves, or _false_ otherwise.

Note: The way that the robot is "facing" is irrelevant. _'R'_ will always make the robot move to the right once, _'L'_ will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

 

__Example 1__:
> __Input__: moves = "UD"
> __Output__: true
> __Explanation__: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.

__Example 2__:
> __Input__: moves = "LL"
> __Output__: false
> __Explanation__: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.

 

__Constraints__:
- 1 <= moves.length <= 2 * 104
- moves only contains the characters 'U', 'D', 'L' and 'R'.

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D
