#ifndef AUXILIARS_FUNCTIONS_H_
#define AUXILIARS_FUNCTIONS_H_

void readSettings(int*, int*, int*, char*, char*, char*, char*, char*);
void writeSettings(int, int, int, char, char, char, char, char);
void reconstructMaze(int, int, int, int, char[HEIGHT][WIDTH], pacmanInfo);
void gotoXY(int, int);
void cursorType(int);
void textcolor(); //Conio.c Prototype

#endif // AUXILIARS_FUNCTIONS_H_
