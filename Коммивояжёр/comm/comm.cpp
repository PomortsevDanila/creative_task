﻿#include "Header.h"
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	glutInit(&argc, argv);
	graph = makeGR();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1200, 800);
	glutCreateWindow("Comm");
	glutDisplayFunc(display);
	glutMouseFunc(mouseClick);
	glutMainLoop();
	return 0;
}