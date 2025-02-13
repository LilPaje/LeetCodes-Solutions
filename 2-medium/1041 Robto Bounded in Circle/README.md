# 1041. Robot Bounded In Circle

On an infinite plane, a robot initially stands at _(0, 0)_ and faces north. Note that:

- The __north direction__ is the positive direction of the y-axis.
- The __south direction__ is the negative direction of the y-axis.
- The __east direction__ is the positive direction of the x-axis.
- The __west direction__ is the negative direction of the x-axis.

The robot can receive one of three instructions:

- _"G"_: go straight 1 unit.
- _"L"_: turn 90 degrees to the left (i.e., anti-clockwise direction).
- _"R"_: turn 90 degrees to the right (i.e., clockwise direction).

The robot performs the _instructions_ given in order, and repeats them forever.

Return _true_ if and only if there exists a circle in the plane such that the robot never leaves the circle.

 

__Example 1__:
> __Input__: instructions = "GGLLGG"
> __Output__: true
> __Explanation__: The robot is initially at (0, 0) facing the north direction.
> "G": move one step. Position: (0, 1). Direction: North.
> "G": move one step. Position: (0, 2). Direction: North.
> "L": turn 90 degrees anti-clockwise. Position: (0, 2). Direction: West.
> "L": turn 90 degrees anti-clockwise. Position: (0, 2). Direction: South.
> "G": move one step. Position: (0, 1). Direction: South.
> "G": move one step. Position: (0, 0). Direction: South.
> Repeating the instructions, the robot goes into the cycle: (0, 0) --> (0, 1) --> (0, 2) --> (0, 1) --> (0, 0).
> Based on that, we return true.

__Example 2__:
> __Input__: instructions = "GG"
> __Output__: false
> __Explanation__: The robot is initially at (0, 0) facing the north direction.
> "G": move one step. Position: (0, 1). Direction: North.
> "G": move one step. Position: (0, 2). Direction: North.
> Repeating the instructions, keeps advancing in the north direction and does not go into cycles.
> Based on that, we return false.

__Example 3__:
> __Input__: instructions = "GL"
> __Output__: true
> __Explanation__: The robot is initially at (0, 0) facing the north direction.
> "G": move one step. Position: (0, 1). Direction: North.
> "L": turn 90 degrees anti-clockwise. Position: (0, 1). Direction: West.
> "G": move one step. Position: (-1, 1). Direction: West.
> "L": turn 90 degrees anti-clockwise. Position: (-1, 1). Direction: South.
> "G": move one step. Position: (-1, 0). Direction: South.
> "L": turn 90 degrees anti-clockwise. Position: (-1, 0). Direction: East.
> "G": move one step. Position: (0, 0). Direction: East.
> "L": turn 90 degrees anti-clockwise. Position: (0, 0). Direction: North.
> Repeating the instructions, the robot goes into the cycle: (0, 0) --> (0, 1) --> (-1, 1) --> (-1, 0) --> (0, 0).
> Based on that, we return true.

 

__Constraints__:
- 1 <= instructions.length <= 100
- instructions[i] is 'G', 'L' or, 'R'.

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D