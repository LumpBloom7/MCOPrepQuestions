Week 1 Editorial
================

Intro
-----
This week you're given the first question of MCO 2017 - Cable Cars. This may be a big leap from last weeks challenge, but it is a good way to have a taste of what's coming during the competition and its qualifying rounds.

Problem Summary
--------------
There is an array of n integers that is a permutation of 1 to n. You have to choose a subarray. One of the ends must be the number n. The other end must satisfy the condition that it is the highest number among all numbers located between it and the number n. Find the number of suitable positions for the other end.

Constraints : N <= 1,000,000

Subtask 1
----------
Additional Constraints : N <= 1,000

For this subtask, N is quite small. Thus, we can solve it using brute force.

First, we find the position of the value N in the array in O(N) time by simply iterating through all elements.

For each element of the array, iterate through all elements from it to the position of the value N. Check whether each element is smaller than the current element. If this is true, increment the answer by 1.

This solution takes O(N<sup>2</sup>) time.

```C++
//Receive input and place in vector/array
...
int possibilities = 0;
for ( int a = 0; a < hills.size(); a++ ) {
    if ( a > highestIndex ) {
        for ( int b = a; b >= highestIndex; b-- ) {
            if ( hills[ b ] == n ) { possibilities++; }
            else if ( hills[ b ] > hills[ a ] ) { break; }
        }
    } else if ( a < highestIndex ) {
        for ( int b = a; b <= highestIndex; b++ ) {
            if ( hills[ b ] == n ) { possibilities++; }
            else if ( hills[ b ] > hills[ a ] ) { break; }
        }
    }
}
```
[View Subtask 1 solution](https://github.com/LumpBloom7/MCOPrepQuestions/blob/master/Week3/subtask1.cpp)

Subtask 2
------------
Additional Constraints : None

An O(N<sup>2</sup>) solution cannot pass here. The trick is that we avoid iterating through all elements between N and the current element every time we want to determine if the current element can be an ending position.

Start from the position which contains N. Iterate from that position to the right. Maintain the maximum value of the elements visited so far (excluding N). To determine if the current element can be an endpoint, we just have to check whether it is larger than the maintained maximum value in O(1) time.

Do the same for the left side. Thus, we iterate through each element at most once. Thus, the algorithm takes O(N) time, which will pass.

```C++
//Receive input and place in vector/array
...
int possibilities = 0;
int highestEncountered = 0;
for ( int a = highestIndex - 1; a >= 0; a-- ) { // Go left of the highest hill
    highestEncountered = highestEncountered < hills[ a ] ? hills[ a ] : highestEncountered;
    possibilities = hills[ a ] >= highestEncountered ? possibilities + 1 : possibilities;
}
highestEncountered = 0;
for ( int a = highestIndex + 1; a < hills.size(); a++ ) { // Go right of the highest hill
    highestEncountered = highestEncountered < hills[ a ] ? hills[ a ] : highestEncountered;
    possibilities = hills[ a ] >= highestEncountered ? possibilities + 1 : possibilities;
}
std::cout << possibilities
```
[View Subtask 2 solution](https://github.com/LumpBloom7/MCOPrepQuestions/blob/master/Week3/subtask2.cpp)

Final words
-----------
This weeks editorial might be a wee bit confusing to some, so feel free to ask me or Lim Wei Sean on the WhatsApp group.

I've uploaded two code files each with different implementation styles. Code which runs successfully on subtask 2 is guaranteed to work on subtask 1 as well.

If you want to translate this to Chinese for your fellow friends who can't read this, feel free to do so, because I suck at Chinese.

Good luck and Happy coding. :)



