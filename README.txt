

Hello Zakarie Leskowsky! :)



Name/ONID: Wesley Grandmont IV/grandmow@oregonstate.edu/934-432-990



Description:
The first part of this program prints out a hollow diamond per the user's
specifications. The first number the user inputs will determine the size/specific row
of the diamond that will have the leading spaces, and the second number will determine
the number of leading spaces that row will have.

The scond part of this program will enable the user to use a linked list curated
to be unique from the one used in the standard STL library. This linked list will
serve the same functionality as a normal linked list, just with it being special
because I wrote it and someone else didn't ;)



Instructions:
 - For the first program -

1) Run "make" into the terminal where the diamond program
is saved (should be the first folder titled "assignment-5" in the hierarchy)

2) After making the program, enter in the numbers you wish to in order to size the hollow
diamond to your desired specifications.


 - For the second program -

1) Run "make" into the terminal where the linked list file is located (should be the second 
folder in the hierarchy, titled "linked_list")

2) After making the program,
feel free to run the program and watch it work (the tests are already done for you from within
the "test_linked_list.cpp" file provided).



Limitations: 
Do not enter in a negative or even integer for n, and ensure to not provide a non-negative integer for col.



Extra Credit:
N/A



Complexity Analysis:

a. sort_ascending():
    for the sort_ascending() function, I decided to use the merge sort. I chose this because it has more
    consistency in its time complexity. This allows for more balance. This helps to eliminate a bias toward
    small and larger datasets, and keeps the speed neutral between both (compared to Insertion & Selection).

b. sort_descending():
    for the sort_descending() function, I decided to use the merge sort. I chose this because of the
    consistency of time complexity it has. It ensures more balance, and eliminates favoritism of small
    vs larger datasets (compared to Insertion & Selection).