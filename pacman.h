#ifndef PACMAN_FUNCTIONS_H_
#define PACMAN_FUNCTIONS_H_

int pacmanControl(int*, int*, pacmanInfo*, clock_t*, char[HEIGHT][WIDTH], ghosts*, int);
void movePacman(pacmanInfo*, char[HEIGHT][WIDTH]);
void testLimits(pacmanInfo*);
void testColision(pacmanInfo*, char[HEIGHT][WIDTH]);
void setDirection(char, int*, pacmanInfo*);

#endif // PACMAN_FUNCTIONS_H_
