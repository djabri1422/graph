#include <iostream>
#include <vector>

using vector = std::vector<std::vector<int>>;

class Graph
{
private:
	std::vector<int> vortex; //Вершина
	vector mass; //Матрица смежности

public:
	Graph() noexcept;
	void get_mass(vector);
	void search(int, int);
	void printGraph();
};