#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// My Node implementation
struct Node{
  int n;
  struct Node *left;
  struct Node *right;
};

/*
  In order to avoid repeating code, I created a function that
  builds up my new nodes with left and right NULL
*/
struct Node *nodeBuilder(int i){
  struct Node *newNode = malloc(sizeof(newNode));
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->n = i;
  return newNode;
}

int insert(int i, struct Node *head){

  /*
    Here in case the new node is smaller than the existing one
  */
  if(head->n > i){
    /*
      If my left is NULL it means this is where I would like to place my node
    */
    if(head->left == NULL)
    {
      head->left = nodeBuilder(i);
      return 1;
    }else{
      /*
        If my left IS NOT NULL,
        it means I need to go further left as this already has a Node,
        this time, our left node will become the head of the tree
      */
      return insert(i, head->left);
    }
  }
  /*
    Same as above but this time I go to the right of my head as my new node is higher
  */
  if(head->n < i){
    if(head->right == NULL)
    {
      head->right = nodeBuilder(i);
      return 1;
    }else{
      return insert(i, head->right);
    }
  }
  /*
    If it is neither higher or smaller it means they are the same number, therefore,
    we cannot add to our tree.
  */
  if(head->n == i){
    printf("%d has already been inserted \n", i);
    return 0;
  }

  return 0;
}

/*
  Function to make a search on my tree
*/
int search(int i, struct Node *head){
  /*
    If this is NULL, we either had an empty tree or we got to the end of it
    either case, the number isn't around, we shall return 0 (not found)
  */
  if (head == NULL)
    return 0;
  /*
    If the current number is the one we wanted, we return 1
  */
  if(head->n == i)
    return 1;
  /*
    If the number is smaller than the one I'm checking now
    I better look to the left of the tree
  */
  if(head->n > i)
    return search(i, head->left);
  /*
    If the number is higher than the one I'm checking now
    I better look to the right of the tree
  */
  if(head->n < i)
    return search(i, head->right);
  return 0;
}

/*
  Simple method to simply print all my numbers
*/
void printAll(struct Node *head){
    // Print the current number
    printf("%d \n", head->n);]

    /*
      If there is something to the left
      recursivelly print that number on the left too
    */
    if(head->left != NULL)
        printAll(head->left);
    /*
      If there is something to the right
      recursivelly print that number on the right too
    */
    if(head->right != NULL)
        printAll(head->right);
}

int main()
{
  // Creating the main node
  struct Node *head = nodeBuilder(8);
  // Inserting a couple of random numbers
  insert(3,head);
  insert(10,head);
  insert(1,head);
  insert(6,head);
  insert(14,head);
  insert(4,head);
  insert(7,head);
  insert(13,head);
  // Inserting a repeated number, this should return a message
  insert(10,head);
  // Printing all the tree
  printAll(head);
  // Testing if I can find the numbers I inserted before
  printf("TESTING \n" );
  printf("%d\n",search(1, head) );
  printf("%d\n",search(3, head) );
  printf("%d\n",search(4, head) );
  printf("%d\n",search(6, head) );
  printf("%d\n",search(7, head) );
  printf("%d\n",search(10, head) );
  // Testing with an unexistent number
  printf("%d\n",search(20, head) );
}
