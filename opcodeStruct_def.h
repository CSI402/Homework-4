/*
Daniel Hug dhug@albany.edu: Monitor
Alana Ruth Aruth@albany.edu : Recorder
Jessica Kanczura jKanczura@albany.edu : Leader


Struct definitions for binary search tree for machine opcode table
*/

//Structure for the nodes in the opcode BST
typedef struct opcodeNode{
  char *key;
  char *data;
  struct opcodeNode *left;
  struct opcodeNode *right;
} oNode;
