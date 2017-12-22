/**
 * Implements a dictionary's functionality.
 * Hash Function referenced from https://www.reddit.com/r/cs50/comments/1x6vc8/pset6_trie_vs_hashtable/cf9nlkn/
 */

#include <stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "dictionary.h"

#define HTSIZE 5000

typedef struct node
{
    char word[LENGTH+1];
    struct node *next;
}
node;

//declaration of hash table
node *hashtable[HTSIZE];

//hash function declaration
int hash_function (char *word);

//for counting the number of words in dictionary
int counter = 0;


/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    //open dictionary file
    FILE *file = fopen(dictionary, "r");

    if (file == NULL)
    {
        printf("Could not open dictionary\n");
        return false;
    }

    //temporary variable
    char buffer[LENGTH+1];


    //store the hashed dictionary words into hash table
    while (fscanf(file, "%s", buffer) != EOF)
    {
        //memory allocation for current word
        node *currentw = malloc(sizeof(node));

        //copy the word into buffer
        strcpy(currentw->word, buffer);

        //hash the word
        int key = hash_function(buffer);

        //if the location is NULL
        if (hashtable[key] == NULL)
        {
            hashtable[key] = currentw;
            currentw -> next = NULL;

        }
        else
        {
            currentw -> next = hashtable[key];
            hashtable[key] = currentw;
        }

        counter++;
    }

    fclose(file);

    return true;
}


/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{

    char lower[LENGTH+1];

    int wordsize = strlen(word);

    //converts all the alphabets to lower
    for(int i = 0; i < wordsize; i++)
    {
        lower[i] = tolower(word[i]);
    }

    //string terminator character
    lower[wordsize] = '\0';

    //hashing the word
    int hashvalue = hash_function(lower);

    //checks if the location is empty
    if(hashtable[hashvalue] == NULL)
    {
        return false;
    }

    //seeking pointer
    node *ptr = hashtable[hashvalue];

    while(ptr != NULL)
    {
        if(strcmp(ptr->word, lower) == 0)
        {
            return true;
        }
        ptr = ptr->next;
    }

    return false;

}


/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    if(counter != 0)
        return counter;
    else
        return 0;
}

//hash function (reference cited)
int hash_function (char *word)
{
    unsigned int hash = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        hash = (hash << 2) ^ word[i];
    }

    return hash % HTSIZE;
}


/**
 * Unloads dictionary from memory.
 */
bool unload(void)
{
    for(int i = 0; i < HTSIZE; i++)
    {
        node *cursor = hashtable[i];
        while (cursor != NULL)
        {

            node *temp = cursor;
            cursor = cursor -> next;
            free(temp);
        }
    }

    return true;

}
