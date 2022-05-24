#pragma once
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <math.h>
using namespace std;
// Глобальные переменные
int* result;
int** dop;
int*** matrX;
int R;
int n;
int quantity;
const int maxSize = 10;
// Структура координат
struct Cord {
	int x, y;
};
Cord vertC[20];
// Класс Графа
class Graph {
	vector<int> ListV;
	bool* used = new bool[ListV.size()];
public:
	int adjacency[maxSize][maxSize] = { 0 };
	Graph();
	~Graph();
	void DrawGraph();
	void InsertEdge(const int& vertex1, const int& vertex2, int weight);
	void InsertVertex(const int& vertex);
	void DeleteVertex();
	int GetVertPos(const int& vertex);
	bool Empty();
	bool Full();
	void Print();
};
// Функция вставки вершины
void Graph::InsertVertex(const int& vertex) {
	if (!this->Full())
		this->ListV.push_back(vertex);
	else
	{
		cout << "Граф переполнен" << endl;
		return;
	}
}
// Функция удаления вершины
void Graph::DeleteVertex() {
	this->ListV.pop_back();
}
// Функция проверки пустоты графа
bool Graph::Empty() {
	if (this->ListV.size() != 0)
		return false;
	else
		return true;
}
// Присваивание графу максимального количества вершин
bool Graph::Full() {
	return (ListV.size() == maxSize);
}

int Graph::GetVertPos(const int& vertex) {
	for (int i = 0; i < this->ListV.size(); ++i) {
		if (this->ListV[i] == vertex)
			return i;
	}
	return -1;
}
// Конструктор
Graph::Graph() {
	for (int i = 0; i < maxSize; ++i) {
		for (int j = 0; j < maxSize; ++j)
			this->adjacency[i][j] = 0;
	}
}
// Деструктор
Graph::~Graph() {}
// Функция для составления Графа
Graph makeGR() {
	Graph graph;
	int amountEdges, sourceVertex, targetVertex, edgeWeight;
	cout << "Введите количество вершин: "; cin >> quantity; cout << endl;
	cout << "Введите количество путей: "; cin >> amountEdges; cout << endl;
	for (int i = 1; i <= quantity; ++i) {
		int* vertPtr = &i;
		graph.InsertVertex(*vertPtr);
	}
	for (int i = 0; i < amountEdges; ++i) {
		cout << "Путь из вершины: "; cin >> sourceVertex; cout << endl;
		int* sourceVertPtr = &sourceVertex;
		cout << "В вершину: "; cin >> targetVertex; cout << endl;
		int* targetVertPtr = &targetVertex;
		cout << "длина пути: "; cin >> edgeWeight; cout << endl;
		graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);
	}
	cout << endl;
	return graph;
}
// Функция вставки ребра
void Graph::InsertEdge(const int& vertex1, const int& vertex2, int weight) {
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjacency[vertPos1][vertPos2] != 0
			&& this->adjacency[vertPos2][vertPos1] != 0) {
			cout << "Путь уже использован" << endl;
			return;
		}
		else {
			this->adjacency[vertPos1][vertPos2] = weight;
			this->adjacency[vertPos2][vertPos1] = weight;
		}
	}
	else {
		cout << "Нельзя вставить вершину" << endl;
		return;
	}
}
// Функция отрисовки матрицы смежности
void Graph::Print() {
	if (!this->Empty())  {
		cout << "Матрица смежности: " << endl;
		for (int i = 0, ListVSize = this->ListV.size(); i < ListVSize; ++i) {
			cout << this->ListV[i] << " ";
			for (int j = 0; j < ListVSize; ++j) 
				cout << " " << this->adjacency[i][j] << " ";
			cout << endl;
		}
	}
}

Graph graph;
// Функция для решения задачи методом ветвей и границ
void BaB(int*** matrX, int n, int** dop, int* path) {
	for (int l = 0; l < n; l++) {
		for (int i = 0; i < n; i++) {
			int min = 1000000;
			for (int j = 0; j < n; j++)
				if (matrX[i][j] && min > *matrX[i][j])
					min = *matrX[i][j];
			for (int j = 0; j < n; j++)
				if (matrX[i][j])
					*matrX[i][j] -= min;
		}
		for (int j = 0; j < n; j++) {
			int min = 1000000;
			for (int i = 0; i < n; i++)
				if (matrX[i][j] && min > *matrX[i][j])
					min = *matrX[i][j];
			for (int i = 0; i < n; i++)
				if (matrX[i][j])
					*matrX[i][j] -= min;
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				dop[i][j] = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				if (matrX[i][j] && !*matrX[i][j]) {
					int hmin = 1000000;
					int vmin = 1000000;
					for (int l = 0; l < n; l++)
						if (l != i && matrX[l][j] && hmin > *matrX[l][j])
							hmin = *matrX[l][j];
					for (int l = 0; l < n; l++)
						if (l != j && matrX[i][l] && vmin > *matrX[i][l])
							vmin = *matrX[i][l];
					dop[i][j] = hmin + vmin;
				}
			}
		int mcost = 0, mi = 0, mj = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (matrX[i][j] && mcost < dop[i][j]) {
					mcost = dop[i][j];
					mi = i;
					mj = j;
				}
		path[mi] = mj;
		for (int i = 0; i < n; i++)
			matrX[i][mj] = nullptr;
		for (int i = 0; i < n; i++)
			matrX[mi][i] = nullptr;
		matrX[mj][mi] = nullptr;
	}
}
// Функция подготовки для решения задачи
void Prep(int***& matrX, int& n, int**& dop, int*& result) {
	n = quantity;
	dop = new int* [n];
	result = new int[n];
	matrX = new int** [n];
	for (int i = 0; i <= n; i++)
		dop[i] = new int[n];
	for (int i = 0; i < n; i++) {
		matrX[i] = new int* [n];
		for (int j = 0; j < n; j++) {
			if (graph.adjacency[i][j] == 0) {
				matrX[i][j] = nullptr;
				continue;
			}
			matrX[i][j] = new int(graph.adjacency[i][j]);
		}
	}
}
// Функция для нахождения минимального пути
void minDistance(int*** matrX, int n, int** dop, int* result) {
	Prep(matrX, n, dop, result);
	int s = 0;
	BaB(matrX, n, dop, result);
	for (int i = 0, j = 0; i < n; i++){
		j = result[i];
		s += graph.adjacency[i][j];
	}
	cout << "\nИспользованные пути: ";
	int temp = 0;
	for (int l = 0; l < n;) {
		for (int i = 0, j = 0; i < n; i++) {
			if (temp == 0 || i + 1 == temp) {
				if (temp == 0) cout << i + 1;
				j = result[i];
				temp = j + 1;
				if (temp > 0)	cout << " => " << temp;
				l++;
			}
		}
	}
	cout << "\nИтоговое значение кратчайшего пути = " << s;
	cout << endl;
}
// Функция для координат вершин и т.п.
void setCoord(int i, int n) {
	int R_;
	int x0 = 1200 / 2;
	int y0 = 800 / 2;
	R = 5 * (800 / 13) / n;
	R_ = 800 / 2 - R - 10;
	float theta = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = R_ * cos(theta) + y0;
	float x1 = R_ * sin(theta) + x0;
	vertC[i].x = x1;
	vertC[i].y = y1;
}
// Функция для печати текста
void CircEdgeText(int nom, int x1, int y1) {
	string s = to_string(nom);
	glRasterPos2i(x1 - 5, y1 - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, s[j]);
}
// Функция для отрисовки кругов
void drawCircle(int x, int y, int R) {
	glColor3f(0.99, 1, 0.36);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}
// Функция для отрисовки вершин
void drawVertex(int n) {
	for (int i = 0; i < n; i++) {
		drawCircle(vertC[i].x, vertC[i].y, R);
		CircEdgeText(i + 1, vertC[i].x, vertC[i].y);
	}
}
// Функция для отрисовки рёбер
void drawLine(int text, int x0, int y0, int x1, int y1) {
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();
	CircEdgeText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);
}
// Функция отрисовки Графа
void Graph::DrawGraph() {
	int n = ListV.size();
	for (int i = 0; i < n; i++)
		setCoord(i, n);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int a = adjacency[i][j];
			if (a != 0)
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
		}
	}
	drawVertex(n);
}

void MenuText(string text, int x1, int y1) {
	string s = text;
	glRasterPos2i(x1 + 5, y1 - 20);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, s[j]);
}
// Функция для печати текста, линий и т.п. в меню
void drawMenu() {
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(1050, 400);
	glVertex2f(1050, 600);
	glVertex2f(1200, 600);
	glVertex2f(1200, 400);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 400);
	glVertex2i(1050, 600);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1200, 400);
	glVertex2i(1200, 600);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 600);
	glVertex2i(1200, 600);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 560);
	glVertex2i(1200, 560);
	glEnd();

	
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 520);
	glVertex2i(1200, 520);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 480);
	glVertex2i(1200, 480);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 440);
	glVertex2i(1200, 440);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(1050, 400);
	glVertex2i(1200, 400);
	glEnd();

	glColor3d(0, 0, 0);
	MenuText("adjacency matrix", 1050, 520);
	glColor3d(0, 0, 0);
	MenuText("RE:matrix", 1050, 480);
	glColor3d(0, 0, 0);
	MenuText("Result", 1050, 440);
	glColor3d(0, 0, 0);
	MenuText("del Vertex", 1050, 560);
	glColor3d(0, 0, 0);
	MenuText("add Edge/Vertex", 1050, 600);
	glColor3d(0, 0, 0);
}
// Функция тригера при нажатии на экран
void mouseClick(int btn, int stat, int x, int y) {
	if (stat == GLUT_DOWN) {
		if (x > 1050 && x < 1200 && y > 200 && y < 240) {
			int sourceVertex;
			int targetVertex;
			int edgeWeight;
			cout << "Путь из вершины: "; cin >> sourceVertex; cout << endl;
			int* sourceVertPtr = &sourceVertex;
			cout << "В вершину: "; cin >> targetVertex; cout << endl;
			int* targetVertPtr = &targetVertex;
			if (sourceVertex > quantity || targetVertex > quantity) {
				quantity++;
				int* vertPtr = &quantity;
				graph.InsertVertex(*vertPtr);
			}
			cout << "Длина пути: "; cin >> edgeWeight; cout << endl;
			graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight); 
		}
		if (x > 1050 && x < 1200 && y > 240 && y < 280) {
			int sourceVertex;
			cout << "Какую вершину удалить: "; cin >> sourceVertex; cout << endl;
			int* sourceVertPtr = &sourceVertex;
			if (sourceVertex == quantity) {
				quantity--;
				graph.DeleteVertex();
			}
			else cout << "Невозможно удалить вершину\n";
		}
		if (x > 1050 && x < 1200 && y >  280 && y < 320)
			graph.Print();
		if (x > 1050 && x < 1200 && y >  320 && y < 360)
			graph = makeGR();
		if (x > 1050 && x < 1200 && y > 360 && y < 400)
			minDistance(matrX, n, dop, result);
	}
	glutPostRedisplay();
}
// Функция отрисовки главного экрана со всем содержимым
void display() {
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1200, 0, 800);
	glViewport(0, 0, 1200, 800);
	glClearColor(0.61, 1.0, 0.97, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	graph.DrawGraph();
	drawMenu();
	glutSwapBuffers();
}
