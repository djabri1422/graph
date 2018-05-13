
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

Graph::Graph() noexcept : vortex(0)
{

	for (auto i = 0; i < vortex.size(); i++)
	{
		vortex[i] = 0;
	}
}

void Graph::get_mass(vector _mass)
{
	mass = _mass;

	for (unsigned int i = 0; i < mass.size(); i++)
	{
		for (unsigned int j = 0; j < mass.size(); j++)
		{
			std::cout << mass[i][j] << " "; 
		}
		std::cout << "\n";
	}

	auto temp = mass.size();
	vortex.resize(temp);
}

void Graph::search(int st, int n)
{
	vortex[st] = 1;


	for (int r = 0; r < n; r++)
	{
		if (mass[st][r] != 0 && vortex[r] == 0)
		{
			search(r, n);
		}
	}
}


void Graph::printGraph()
{
	for (unsigned int i = 0; i < mass.size(); i++)
	{
		std::cout << i << "\n";
		for (unsigned int j = 0; j < mass.size(); j++)
		{
			if (mass[i][j] == 1 && mass[j][i] == 1)
			{
				std::cout << " - " << j << "  \n";
			}
		}
		std::cout << "\n";
	}
}

