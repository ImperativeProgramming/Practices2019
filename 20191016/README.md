# C Programs Structure
*This class is based on  [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/structures-c/)*

## Before Starting

- What was new on the last class exercises?
- Hey Siri, who's gonna show the homeworks?


## Memory Scope
Until when will the following variables be in our memory? (Test it)

      void f1()
      {
        int function_variable = 5;
      }

      int main(){
        int main_variable = 6;
        int i;
        for(i=0; i<2; i++)
        {
          int for_variable;
        }
      }

## Sorting things



### Bubble sort
We have all the knowledge to use it, now is time to put hands on, in the image bellow, you have the bubblesort method explained.

![](https://codingcompiler.com/wp-content/uploads/2017/10/bubble-sort-in-c-768x456.png)



### Task 1
Implement the following code and implement the method described in the above image, i.e. sort the numbers and print them out as 1,11,14,20,41... (where commas are new lines)

    #include <stdio.h>

    int main(){
      int numbers[5],i;
      numbers[0] = 20;
      numbers[1] = 1;
      numbers[2] = 14;
      numbers[3] = 41;
      numbers[4] = 11;

      for(i=0; i<5; i++)
      {
    	printf("%d\n", numbers[i]);
      }
    }


## Structures

Structures are heterogenous structures implemented in C, like in the picture bellow:
![](https://www.geeksforgeeks.org/wp-content/uploads/Structure-In-C.png)

Example of structure:

    #include<stdio.h>

    struct Point
    {
       int x, y;
    };

    int main()
    {
       struct Point p1 = {0, 1};

       // Accesing members of point p1
       p1.x = 20;
       printf ("x = %d, y = %d", p1.x, p1.y);

       return 0;
    }

Example with designated initialization:
    #include<stdio.h>

    struct Point
    {
       int x, y, z;
    };

    int main()
    {
       // Examples of initializtion using designated initialization
       struct Point p1 = {.y = 0, .z = 1, .x = 2};
       struct Point p2 = {.x = 20};

       printf ("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
       printf ("x = %d", p2.x);
       return 0;
    }

Example with Array:


    #include<stdio.h>

    struct Point
    {
       int x, y;
    };

    int main()
    {
       // Create an array of structures
       struct Point arr[10];

       // Access array members
       arr[0].x = 10;
       arr[0].y = 20;

       printf("%d %d", arr[0].x, arr[0].y);
       return 0;
    }

Example Linked List (attached)

### Homework
 - Implement a list with 5 struct People (linked_list.c).
 - Sort the 5 struct people (change their internal links)
