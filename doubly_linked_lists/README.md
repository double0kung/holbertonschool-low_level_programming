# Doubly Linked Lists

This project is part of the low-level programming and algorithm track at Holberton School. It focuses on implementing and working with doubly linked lists in C.

## Description

A doubly linked list is a type of linked data structure that consists of a set of sequentially linked records called nodes. Each node contains three fields: two link fields (references to the previous and to the next node in the sequence of nodes) and one data field.

This project implements various operations on doubly linked lists, including:

- Printing all elements of a list
- Getting the length of a list
- Adding nodes at the beginning and end of a list
- Freeing a list
- Getting a node at a specific index
- Summing all the data in a list
- Inserting a node at a given position
- Deleting a node at a given position

## Files

* `lists.h`: Header file containing the structure definition and function prototypes.
* `0-print_dlistint.c`: Function that prints all the elements of a dlistint_t list.
* `1-dlistint_len.c`: Function that returns the number of elements in a linked dlistint_t list.
* `2-add_dnodeint.c`: Function that adds a new node at the beginning of a dlistint_t list.
* `3-add_dnodeint_end.c`: Function that adds a new node at the end of a dlistint_t list.
* `4-free_dlistint.c`: Function that frees a dlistint_t list.
* `5-get_dnodeint.c`: Function that returns the nth node of a dlistint_t linked list.
* `6-sum_dlistint.c`: Function that returns the sum of all the data (n) of a dlistint_t linked list.
* `7-insert_dnodeint.c`: Function that inserts a new node at a given position.
* `8-delete_dnodeint.c`: Function that deletes the node at index index of a dlistint_t linked list.