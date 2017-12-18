Week 1 Editorial
================

Intro
-----
Another week has passed. This week you're given a challenge that is a knock-off version of the kids' game FizzBuzz. The reason the FizzBuzz was changed to JohnnyEnglish is so it'll be harder to copy code from Google if you don't already know about FizzBuzz.

FizzBuzz is just so happens to be the common test for programmers to determine whether they can actually write code.


I'm not gonna go too deep into explaining this so here's a Tom Scott video:
[FizzBuzz: One Simple Interview Question](https://www.youtube.com/watch?v=QPZ0pIK_wsc)

Week 1 Question
----------------
This weeks challenge is (again!) pretty straight forward. We just need to make a piece of software that plays FizzBuzz. We count from 1 to 100. If the number is a multiple of 3, we say "Fizz"; If the number is a multiple of 5, we say "Buzz"; If the number is both a multiple of 3 and 5, we say "FizzBuzz". Like so.

    ...
    8
    Fizz
    Buzz
    11
    Fizz
    13
    14
    FizzBuzz
    ...

Of course in our case the words have been switched to "Johnny" and "English" respectively, and we also have a special test case: If a number is a multiple of 3, 5 and 20, we say "EnglishJohnny" along with the __number in reverse__ 3 times. Like below.

    ...
    59
    EnglishJohnny06EnglishJohnny06EnglishJohnny06
    61
    62
    Johnny
    64
    English
    ...


Now for the execution. We start of making a ```for``` loop to count our numbers. Then make a bunch of ```if``` conditionals to handle the numbers. There's plenty of way you can achieve this so feel free to mess around.

In each of the conditionals, we could either change the outcome of the outputted string or we can just outright print the output. Either way works fine.

Bonus questions
---------------
The first bonus questions maybe misleading seeing as most code should be able to any range of numbers already. Except that 0 modulo 3,5 and 20 will always be 0, messing up the output. And unless I'm living in an alternate reality, 0 is definitely not a multiple of those three numbers. So you only have to make an extra condition like ```number!=0```.

The second one is the harder challenge. You would need to have an extra counter which starts at 3 that increments each time the number is a multiple of 3,5 and 20. Along with a different for loop which relies on this counter to output "EnglishJohnny*NumberInReverse" the way the challenge asks for.

The third challenge is not really a challenge in a literal sense, but kinda a goal that you all should aim for once your code is finished.

Final words
-----------
That should be all for this week's editorial...

Sorry if I did a lousy job at explaining this question. I was hoping you guys would get the general gist of FizzBuzz from the video linked above.

If you want to translate this to Chinese for your fellow friends who can't read this, feel free to do so, because I suck at Chinese.

Good luck and Happy coding. :)



