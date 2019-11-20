# C Files
*This class is based on  [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/basics-file-handling-c/)*

## Before Starting

- Discussion on the assignment
- Hey Siri, who's gonna show the home works?
- Quizz

## strtok
    char *strtok(char *str, const char *delim

 '*

Where:

* str − Represents the contents of this string are modified and broken into smaller strings (tokens).

* delim −represents the delimiter

Example:

    #include <string.h>
    #include <stdio.h>

    int main () {
       char str[80] = "This is - sparta - whoooooo";
       const char s[2] = "-";
       char *token;

       /* Reads the first token */
       token = strtok(str, s);

       /* Go throgh the tokens one by one */
       while( token != NULL ) {
          printf( " %s\n", token );

          token = strtok(NULL, s);
       }

       return(0);
    }

'*

## Exercise
Let's create our first database, a very simple one to store a list of people, we shall also create a way to read them in and out.

Let's do it step by step

* Create a struct **person** with two Strings, **name** and **familyname**;

* Create an array **people** that stores the previously created struct of **person**;

* Create a function that prints all the people in **people** array into a file separated by pipes "|";

* Create a function that reads the file and feeds into the array;

* Create a function that checks if a first name exists inside the file, this function should take two strings as parameters, the name of the file and the name to be searched. It should return an integer (zero or 1);

*IMPORTANT*
We know, the size of the array can vary, the amount of people and so on, for now, let's assess it the way we can, and, later on when everything is working you do the checks and manage the exceptions that may happen :)
