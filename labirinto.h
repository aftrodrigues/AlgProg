#ifndef LABIRINTO_FUNCTIONS_H_
#define LABIRINTO_FUNCTIONS_H_

int readLab(char[30][100]); //Reads the maze and puts it in the matrix lab
int showLab(char[30][100], int*, pacmanInfo*, ghosts*); //Prints the original lab
int startLab(char[30][100], int*, pacmanInfo*, ghosts*); //Sets initial positions

#endif // LABIRINTO_FUNCTIONS_H_



