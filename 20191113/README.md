# C Files
*This class is based on  [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/basics-file-handling-c/)*

## Before Starting

- Discussion on the assignment
- Hey Siri, who's gonna show the home works?




## Files
![](https://media.geeksforgeeks.org/wp-content/uploads/File-functions.jpg)

## Opening modes
* **“r”** READING – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. If the file cannot be opened fopen( ) returns NULL.
* **“w”** WRITING – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
* **“a”** APPEND – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
* **“r+”** READ AND WRITE– Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. Returns NULL, if unable to open the file.
* **“w+”** WRITE AND READ– Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.
* **“a+”** READING AND APPENDING– Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.


## Atoi (converts numbers that are stored as Strings into Int)

*atof* is the brother that does the same with floats

    #include <stdlib.h>
    #include <stdio.h>

    int main(void)
    {
        int i;
        char *s;

        s = " -9885";
        i = atoi(s);     /* i = -9885 */

        printf("i = %d\n",i);
    }
