﻿# Permutation-Warm-Up-CF

The function 
𝑓
(
𝑝
)
=
∑
∣
𝑝
𝑖
−
𝑖
∣
f(p)=∑∣p 
i
​
 −i∣ measures how much the permutation 
𝑝
p differs from the identity permutation. The smallest value of 
𝑓
(
𝑝
)
f(p) is 0 (when 
𝑝
p is the identity), and the largest value occurs for the permutation that reverses the order, because each element is as far from its original position as possible. When you calculate this maximum sum 
𝑀
M, it turns out to always be an even number.

Interestingly, all possible values of 
𝑓
(
𝑝
)
f(p) for different permutations fall into a pattern: they include every even number from 0 up to 
𝑀
M, with no gaps. This means the number of distinct values 
𝑓
(
𝑝
)
f(p) can take is simply 
𝑀
2
+
1
2
M
​
 +1. So instead of enumerating all permutations, you just find the maximum 
𝑀
M and use this formula to get the count of distinct sums.
