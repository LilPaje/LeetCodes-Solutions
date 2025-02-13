# 1768. Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return _the merged string_.

 

__Example 1__:

> __Input__: word1 = "abc", word2 = "pqr"
> __Output__: "apbqcr"
> __Explanation__: The merged string will be merged as so:
> __word1__:  a   b   c
> __word2__:    p   q   r
> __merged__: a p b q c r

__Example 2__:

> __Input__: word1 = "ab", word2 = "pqrs"
> __Output__: "apbqrs"
> __Explanation__: Notice that as word2 is longer, "rs" is appended to the end.
> __word1__:  a   b 
> __word2__:    p   q   r   s
> __merged__: a p b q   r   s

__Example 3__:

> __Input__: word1 = "abcd", word2 = "pq"
> __Output__: "apbqcd"
> __Explanation__: Notice that as word1 is longer, "cd" is appended to the end.
> __word1__:  a   b   c   d
> __word2__:    p   q 
> __merged__: a p b q c   d

 

__Constraints__:

- 1 <= word1.length, word2.length <= 100
- word1 and word2 consist of lowercase English letters.

# About the solution:
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D
