# C Files
*This class is based on  [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/basics-file-handling-c/)*

## Before Starting

- Discussion on the assignment
- Information regarding the exam
- Quizz

## One more thing
* On the previous exercise you should develop functions that do the following:
  - Insert in the tree
  - Check if a given number is in the tree
  - Print all the members of the list
  - Print the depth of the tree (How deep is the longest branch?)


## Christmas Exercise

![](https://media.giphy.com/media/K90ckojkohXfW/giphy.gif)

Christmas again and Santa got the list of the 100 better behaving kids from Imperativeland, they after all have similar requests, bicycles and ice skaters. They all also prefer bicycles over the skaters.

Santa is going through a deep crisis, he has got 25 bicycles left from last year and decided he will distribute those and the rest of the group will get the ice skaters since these are cheaper.

Santa had an idea on how to fairly solve the issue, he has a list of names (names.txt), which he will sort in reverse order, store them in an array of strings and then select the 25 ones which are registered in a prime index (i.e. the ones that are positioned in the array of names (from zero to 00) in a prime position).

Your task is to read from the names.txt file, store the names in an array and print out the names with their respective gift.

The expected outcome is:

    ZOE	Ice skaters
    ZARA	Ice skaters
    TILLY	Biclycle
    TIA	Biclycle
    SUMMER	Ice skaters
    SOPHIE	Biclycle
    SOPHIA	Ice skaters
    SOFIA	Biclycle
    SKYE	Ice skaters
    SIENNA	Ice skaters
    SCARLETT	Ice skaters
    SARAH	Biclycle
    RUBY	Ice skaters
    ROSIE	Biclycle
    [...]

You as a Santa helper, are responsible to make this software run according to his requirements.

Santa is not sure about the guidelines for implementing, but he left some tips:

- In order to read the list of names, create a function that gets a pointer as paramenter and read the names from the file to the array;

- Using bubble sort, sort the names in reverse order;

- Implement two functions is_prime_recursive and is_prime_iterative (without using C libraries), that takes an integer as paramenter and returns 1 or zero;

- Using one of the above mentioned functions, you interact the indexes printing the names and defining the gift.
