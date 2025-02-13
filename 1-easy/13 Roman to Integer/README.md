# 13. Roman to Integer

Roman numerals are represented by seven different symbols: __I__, __V__, __X__, __L__, __C__, __D__ and __M__.

| __Symbol__ | __Value__ |
|------------|-----------|
|I           |1          |
|V           |5          | 
|X           |10         |
|L           |50         |
|C           |100        |
|D           |500        |
|M           |1000       |

For example, _2_ is written as _II_ in Roman numeral, just two ones added together. _12_ is written as _XII_, which is simply _X_ _+_ _II_. The number _27_ is written as _XXVII_, which is _XX_ _+_ _V_ _+_ +.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not _IIII_. Instead, the number four is written as _IV_. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as _IX_. There are six instances where subtraction is used:

- _I_ can be placed before _V_ (5) and _X_ (10) to make 4 and 9. 
- _X_ can be placed before _L_ (50) and _C_ (100) to make 40 and 90. 
- _C_ can be placed before _D_ (500) and _M_ (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

 

__Example 1__:
> __Input__: s = "III"
> __Output__: 3
> __Explanation__: III = 3.

__Example 2__:
> __Input__: s = "LVIII"
> __Output__: 58
> __Explanation__: L = 50, V= 5, III = 3.

__Example 3__:
> __Input__: s = "MCMXCIV"
> __Output__: 1994
> __Explanation__: M = 1000, CM = 900, XC = 90 and IV = 4.

 

__Constraints__:
- 1 <= s.length <= 15
- s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
- It is guaranteed that s is a valid roman numeral in the range [1, 3999].

# About the solution: 
Please, don't mind me, i'm still trying to learn, so maybe this is not the best solution (which i totally belive it's not). Also, i'm plannning to come back to this later with more knowledhe to try to solve this in a better way :D
PS.: The funniest so far