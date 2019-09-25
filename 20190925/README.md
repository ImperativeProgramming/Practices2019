# C Programs Structure
*This class is based on [Professor Zoltán's Materia](http://gsd.web.elte.hu/lectures/c-en/c-lecture-2/), his [other material](http://gsd.web.elte.hu/lectures/c-en/c-lecture-5/) and [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/c-programming-language/)*

## Wrap up

During the last lecture we learned:
- How the C software is structured
- How do make a loop
- How to use variables
- How to compile our software
- How to execute our software

## Warm up

Let's have a short warm up and play,

![1,2,pi](https://media.giphy.com/media/l41YtZOb9EUABnuqA/giphy.gif)

First let's learn a new function...

modulo(modulus): the remainder of an euclidian division e.g.: 10 mod 2 = 0, 3 mod 2 =1.

How to do it in C:

    // module of 3 divided by 2:
    3 % 2

Now that you know how to operate that, make a C program (from scratch, DO NOT COPY AND PASTE ANYTHING) that will count from 1 to 100 and every time the number is a divider of 3 you should replace the number with "pi".

example:

    1
    2
    pi
    4
    5
    pi

## Todays class

- If else

      if(something)
      {
        //this happens
      }
      else
      {
        //otherwise this will happen
      }

      if(this_happens)
        if (this_also_happens)
          {
              // this all will happen
          }

- Switch Case

      int day_of_week;
      //...
      switch ( day_of_week )
      {
        default: printf("Undefined"); break;
        case  2: printf("Monday");    break;
        case  3: printf("Tuesday");   break;
        case  4: printf("Wednesday"); break;
        case  5: printf("Thursday");  break;
        case  6: printf("Friday");    break;
        case  1:
        case  7: printf("Week-end");  break;
      }

- Some Loops

      #include <stdio.h>
      int main()
      {
        int t[10];
        int i = 0;
        while( i < 10 )
        {
          t[i] = i;
          ++i;
        }
        for ( i = 0; i < 10; ++i )
        {
          printf("%d ", t[i]);
        }
        return 0;
      }

- [Functions](http://gsd.web.elte.hu/lectures/c-en/c-lecture-8/)

      #include <stdio.h>
      // An example function that takes two parameters 'x' and 'y'
      // as input and returns max of two input numbers
      int max(int x, int y)
      {
        if (x > y)
          return x;
        else
          return y;
      }


### Homework
 - Make a function called is_even, takes an integer as parameter and returns true in case the number is an even number otherwise returns false
 - Write a program which adds two positive integers and produces a result which is negative! Explain what happens!
 - Write a software that produces a linkage error
