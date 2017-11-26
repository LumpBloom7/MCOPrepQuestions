Week 1 Editorial
================

Intro
-----
Congratulations on participating in this week's challenge(If you participated). I started this week with something considerably simple to get you guys acquainted with the challenge format.

MCO questions will be presented in a similar format, the only difference is the difficulty and the answering method. Answers during the MCO competitions will be run by bots in order to determine whether your code is good or not.

Week 1 Question
----------------
Now on to the main topic.

This weeks challenge is pretty straight forward. Basically you are asked to make a simple calculator that specifically finds the circumference, area or volume of a circle/sphere based on the argument and radius given by the input.

We of course prepare our variables. We know that we have to use **3.14** as pi in this program. So we declare a float or a double to hold that number, along with another to hold in the inputted radius and a char/string to hold the argument.

A ```while(true)``` loop is suffice for keeping the program running indefinately. We then grab the input using ```std::cout >> *CHAR* >> *RADIUS*;```. After that we could start the calculation.

Two choices are available to determine the type of calculation to be performed, one is to use a ```switch``` statement or with an ```if-else``` conditional. I used ```switch``` in the answers, but ```if-else``` can also be used without any downsides as shown below.

    if( t == 'c' ) { std::cout << ( 2 * pi * r ) << std::endl; }
    else if ( t == 'a' ) { std::cout << ( pi * pow( r, 2 ) ) << std::endl; }
    else if ( t == 'v' ) { std::cout << ( 4 * pi * ( pow( r, 3 ) / 3 ) ) << std::endl; }
    else { std::cout << "Invalid Argument" << std::endl; }

The mathematical formula can be found on most search engines so I guess I do not need to explain much. The only problem is that parentheses are really important in the math formulae.

```( 4 * pi * ( pow( r, 3 ) / 3 ) )``` != ```(4 * pi * pow( r,3 ) /3 )```

**NOTE: Since *pi == 3.14* in this challenge, the answers may vary from the answers given by search engines.**


Final words
-----------
That should be all for this week's editorial...

If you want to translate this to Chinese for your fellow friends who can't read this, feel free to do so, because I suck at Chinese.

Good luck and Happy coding. :)



