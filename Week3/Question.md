Cable Cars
===========
Problem Statement
--------------
Mr. MCO is a manager in a cable car company. He plans to build a cable car line between two of the hills.

There are N hills in IOI City, arranged in a row labelled from 1 to N. Each hill has a distinct height from 1 to N.

Cable cars bringing passengers to the tallest hill is very profitable. Thus, one end of the cable car line must be on the tallest hill. Next, Mr. MCO has to decide how many possible hills can be on the other end of the cable car line. A hill is suitable to be on the other end of the cable car line if it is not the tallest hill and it is the tallest among all hills between it and the tallest hill (excluding the tallest hill).

How many ways can Mr. MCO choose the position of the other end of the cable car?

Input
------
The first line contains a single integer N, denoting the number of hills.

The second line contains N space-separated integers, the i-th integer denotes the height of the i-th hill.

It is guaranteed that the heights of the hills are all distinct and are integers between 1 and N inclusive.

Constraints
--------------
 2 ≤ N ≤ 10<sup>6</sup>.

Subtasks
----------
1. 2 ≤ N ≤ 1000
2. No additional constraints

Output
-------
Output a single integer, the number of ways for Mr. MCO to choose the position of the other end of the cable car.

Example 1
----------
__Input__

    5
    2 4 1 5 3

__Output__

    3

Example 2
----------
__Input__

    5
    5 1 2 3 4

__Output__

    4


Explaination
-----------

For the first sample, the second, third and fifth hills are suitable. The first one isn’t suitable because the hill with height 4 > 2 is in between the first hill and the tallest hill (the hill with height 5)

For the second sample, you can check that all hills are suitable.

Question source
----------------

MCO 2017 Question 1 - Cable Cars
