# 0x1E. C - Search Algorithms

Search algorithms are at the center of solving search problems. Search engines apply various search algorithms to retrieve information. Actually, the appropriateness of a search algorithm to a search problem depends on data strucrure being searched, prior knowledge about the data. This folder contains exercises that aim to answer the following questions through code:

	* What is a search algorithm
	* What is a linear search
	* What is a binary search
	* What key factors to look at when identifying the most appropriate search engine



## Task 0: Linear search

File:

	- 0-linear.c
A function that searches for a value in an array of integers using the Linear search algorithm
- int linear_search(int array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- If value is not present in array or if array is NULL, your function must retu



## Task 1: Binary search

File: 
	- 1-binary.c
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

- Prototype : int binary_search(int array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the index where value is located
- You can assume that array will be sorted in ascending order
- You can assume that value won’t appear more than once in array
- If value is not present in array or if array is NULL, your function must return -1



## Task 2: Big O #0

File:

	- 2-O
What is the time complexity (worst case) of a linear search in an array of size n?



## Task 3: Big O #1

File:

	- 3-O
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?



## Task 4: Big O #2

File:

	- 4-O
What is the time complexity (worst case) of a binary search in an array of size n?



## Task 5: Big O #3

File: 

	- Big O #3
What is the space complexity of this function / algorithm?



## Task 6: Big O #4

File:

	- 5-O
What is the space complexity of this function / algorithm?



## Task 7: Jump search

File:

	- 100-jump.c
Write a function that searches for a value in a sorted array of integers using the Jump search algorithm

- Prototype : int jump_search(int array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is NULL, your function must return -1
- You have to use the square root of the size of the array as the jump step.
- You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)



## Task 8: Big O #5

File: 

	- 101-O
What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?



## Task 9: Interpolation search

File:

	- 102-interpolation.c
Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm

- Prototype : int exponential_search(int array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is NULL, your function must return -1
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)



## Task 12: Jump search in a singly linked list

File: 

	- 105-jump_list.c
Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.

- Prototype : listint_t jump_list(listint_t list, size_t size, int value);
- Where list is a pointer to the head of the list to search in
- size is the number of nodes in list
- And value is the value to search for
- Your function must return a pointer to the first node where value is located
- You can assume that list will be sorted in ascending order
- If value is not present in head or if head is NULL, your function must return NULL
- You have to use the square root of the size of the list as the jump step.
- You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)



## Task 13: Linear search in a skip list

File:

	- 106-linear_skip.c
Write a function that searches for a value in a sorted skip list of integers.

- Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
- Where list is a pointer to the head of the skip list to search in
- A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
- And value is the value to search for
- You can assume that list will be sorted in ascending order
- Your function must return a pointer on the first node where value is located
- If value is not present in list or if head is NULL, your function must return NULL
