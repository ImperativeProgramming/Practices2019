# C Programs Structure
*This class is based on [Programiz material](https://www.programiz.com/c-programming/c-strings) and [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/c-programming-language/)*

## Wrap up

During the last lecture we learned:
- How a switch case is structured
- How we make and deal with loops
- How to declare functions and send parameters


## Warm up

Let's check our homework together

## Todays class

### Arrays
Array is a block of sequential data, let's check a first example with an array containing 4 numbers.

    int j, numbers[4];
    numbers[0]=12;
    numbers[1]=13;
    numbers[2]=14;
    numbers[3]=15;
    for(j = 0; j < 4; ++j)
    {
      printf("&x[%d] = %d\n", j, numbers[j]);
    }

#### Task 1
Make an algorithm that reads 10 numbers and prints them out, later on, prints its sum.

### Strings

A bit about strings in C

![](https://media.giphy.com/media/eeGcAuoE4yV48bihMs/giphy.gif)


![](https://media.giphy.com/media/46zGsq0JNimhzfkABV/giphy.gif)


How do we initialize "Strings"

      char c[] = "abcd";
      char c[50] = "abcd";
      char c[] = {'a', 'b', 'c', 'd', '\0'};
      char c[5] = {'a', 'b', 'c', 'd', '\0'};

How is it organized? (I hope Charles has a board marker this time...)

Writing a program that reads a vector of char...

    int main()
    {
        char str[15];
        printf("Enter a string: ");
        scanf("%s", str);
        printf("You entered %s.", str);
        return 0;
    }

This approach has a problem... Did you spot it?

Another way of doing it would be:

      int main()
      {
          char str[30];
          printf("Enter the string with space: ");
          fgets(str, sizeof(str), stdin);  // read string
          printf("Str: ");
          puts(str);    // display string
          return 0;
      }
#### Task 2
Create a function that reads the first name, a second function that reads the family name and a third function that takes both and prints them out.


### Homework
 - Print the sum of the numbers of Task 1
 - Fix the task 2 as instructed by the teacher
