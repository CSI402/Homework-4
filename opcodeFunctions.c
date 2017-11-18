/*
Daniel Hug dhug@albany.edu: Monitor
Alana Ruth Aruth@albany.edu : Recorder
Jessica Kanczura jKanczura@albany.edu : Leader

Functions related to the machine opcodes
*/

#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "opcodePrototypes.h"
#include "opcodeStruct_def.h"
#include "externs.h"

//inserts node into opcode table
void insertOpcodeNode(poNode top, char *instruction,  int opcode, int format){
  poNode temp = NULL;
  if(!(top)){
    temp = (oNode *)malloc(sizeof(oNode));
    temp->left = NULL;
    temp->right = NULL;
    temp->opcode = opcode;
    temp->instruction = instruction;
    temp->format = format;
    return;
  }

  if(opcode <(top)->opcode){
    insertOpcodeNode((top)->left, instruction, opcode, format);
  }
  else if(opcode > (top)->opcode){
    insertOpcodeNode((top)->right, instruction, opcode, format);
  }
}

//retrieve opcode based on instruction name
void retrieveOpcode(char *instruction[]){

}

//retrieve instruction format based on instruction name
void retrieveInstructionFormat(char *instruction[]){

}

//print contents of tree to stdout
void printTree(){

}

//read through instruction set
void fileRead(char *fileName){

  FILE *instructionSet;
  char line[1000];
  char instruction[100];
  int opcode;
  int format;

  if ((instructionSet = fopen(fileName, "r")) == NULL){
    fprintf(stderr, "Instruction set could not be opened");
    return;
  }

  while(TRUE){
    if(!fgets(line, sizeof(line), instructionSet)) break;
    strcpy(instruction, (strtok(line, " ")));
    opcode = atoi(strtok(NULL, " "));
    format = atoi(strtok(NULL, " "));
    printf("PASS:\n%s\n%i\n%i\n", instruction, opcode, format);
    //    insertOpcodeNode(oHead, instruction, opcode, format);
  }



}
