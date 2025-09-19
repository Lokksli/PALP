#include <stdlib.h>
#include <string.h>
#include "palp.h"

char* readPalp(int map[8][12]) //Reading array and creating string result
{
    char* result = (char*) malloc(25);

    int pos = 0;
    int lat[6];

    for(int i = 0; i < 8; i++) //Go through columns
    {
        for(int f = 0; f < 12; f++) //Go through rows
        {
            for(int b = 0; b < 6; b++) //writing only 6 bits to another array in order to read it 
            {
              lat[b] = map[i][f+b];
            }
            if (lat[0] == 1 && lat[1] == 0 && lat[2] == 0 && lat[3] == 0 && lat[4] == 0 && lat[5] == 0) //Creating string 
            {
              result[pos++] = 'A';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 0 && lat[3] == 0 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'B';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 1 && lat[3] == 0 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'C';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 0 && lat[3] == 1 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'D';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 0 && lat[3] == 0 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'E';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 0 && lat[3] == 0 && lat[4] == 0 && lat[5] == 1)
            {
              result[pos++] = 'F';
            } else if (lat[0] == 1 && lat[1] == 1 && lat[2] == 0 && lat[3] == 0 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'G';
            } else if (lat[0] == 1 && lat[1] == 0 && lat[2] == 1 && lat[3] == 0 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'H';
            } else if (lat[0] == 1 && lat[1] == 0 && lat[2] == 0 && lat[3] == 1 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'I';
            } else if (lat[0] == 1 && lat[1] == 0 && lat[2] == 0 && lat[3] == 0 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'J';
            } else if (lat[0] == 1 && lat[1] == 0 && lat[2] == 0 && lat[3] == 0 && lat[4] == 0 && lat[5] == 1)
            {
              result[pos++] = 'K';
            } else if (lat[0] == 1 && lat[1] == 1 && lat[2] == 1 && lat[3] == 0 && lat[4] == 0 && lat[5] == 1)
            {
              result[pos++] = 'L';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 0 && lat[3] == 1 && lat[4] == 0 && lat[5] == 1)
            {
              result[pos++] = 'M';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 1 && lat[3] == 1 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'N';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 1 && lat[3] == 1 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'O';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 1 && lat[3] == 1 && lat[4] == 1 && lat[5] == 1)
            {
              result[pos++] = 'P';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 1 && lat[3] == 1 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'Q';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 1 && lat[3] == 1 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'R';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 1 && lat[3] == 1 && lat[4] == 1 && lat[5] == 1)
            {
              result[pos++] = 'S';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 0 && lat[3] == 1 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'T';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 0 && lat[3] == 1 && lat[4] == 1 && lat[5] == 1)
            {
              result[pos++] = 'U';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 0 && lat[3] == 1 && lat[4] == 0 && lat[5] == 0)
            {
              result[pos++] = 'V';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 0 && lat[3] == 0 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'W';
            } else if (lat[0] == 1 && lat[1] == 0 && lat[2] == 1 && lat[3] == 1 && lat[4] == 0 && lat[5] == 1) 
            {
              result[pos++] = 'X';
            } else if (lat[0] == 0 && lat[1] == 1 && lat[2] == 0 && lat[3] == 0 && lat[4] == 0 && lat[5] == 1)
            {
              result[pos++] = 'Y';
            } else if (lat[0] == 0 && lat[1] == 0 && lat[2] == 1 && lat[3] == 0 && lat[4] == 1 && lat[5] == 0)
            {
              result[pos++] = 'Z';
            }
            f+=5; //Next 6 digits
        }
    }
    result[pos] = '\0';
    return result;
}

int* writePalp(int map[8][12], char* text)
{
    for (int i = 0; i < 8; i++) //cleaning array
        for (int j = 0; j < 12; j++)
            map[i][j] = 0;

    
    struct { //creating struct for characters
        char letter;
        int bits[6];
    } letterMap[] = {
        {'A', {1,0,0,0,0,0}},
        {'B', {0,1,0,0,0,0}},
        {'C', {0,0,1,0,0,0}},
        {'D', {0,0,0,1,0,0}},
        {'E', {0,0,0,0,1,0}},
        {'F', {0,0,0,0,0,1}},
        {'G', {1,1,0,0,0,0}},
        {'H', {1,0,1,0,0,0}},
        {'I', {1,0,0,1,0,0}},
        {'J', {1,0,0,0,1,0}},
        {'K', {1,0,0,0,0,1}},
        {'L', {1,1,1,0,0,1}}, 
        {'M', {0,1,0,1,0,1}},
        {'N', {0,1,1,1,0,0}},
        {'O', {0,1,1,1,1,0}},
        {'P', {0,1,1,1,1,1}},
        {'Q', {0,0,1,1,0,0}},
        {'R', {0,0,1,1,1,0}},
        {'S', {0,0,1,1,1,1}},
        {'T', {0,0,0,1,1,0}},
        {'U', {0,0,0,1,1,1}},
        {'V', {0,1,0,1,0,0}},
        {'W', {0,1,0,0,1,0}},
        {'X', {1,0,1,1,0,1}},
        {'Y', {0,1,0,0,0,1}},
        {'Z', {0,0,1,0,1,0}}
    };

    int totalLetters = sizeof(letterMap) / sizeof(letterMap[0]); //Calculating total number of characters
    int row = 0, col = 0;

    for (int t = 0; text[t] != '\0'; t++) { //Going through text till null termiantor
        char ch = text[t];
        int found = 0;

        for (int i = 0; i < totalLetters; i++) {
            if (letterMap[i].letter == ch) {
                found = 1;

                for (int b = 0; b < 6; b++) {
                    map[row][col++] = letterMap[i].bits[b];

                    if (col >= 12) {
                        col = 0;
                        row++;
                        if (row >= 8) {
                            return NULL; 
                        }
                    }
                }
                break;
            }
        }

        if (!found) {
        }
    }

    return (int*)map;
}

