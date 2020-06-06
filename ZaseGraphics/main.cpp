#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

#define X 750
#define Y 750

char* filename;

using namespace std;

int main()
{
    /*int gm = DETECT, gd;
    initgraph(&gm, &gd, "");*/

    initwindow(X/2, Y/2);

    int mx = getmaxx();
    int my = getmaxy();
    cout << mx << endl;
    cout << my << endl;
    gets(filename);

    readimagefile(filename, 75, 100, 300, 300);

    getch();
    closegraph();

    return 0;
}
