#include <iostream>
#include <vector>
#include <cassert>

using vector = std::vector<std::vector<int>>;

class Graph
{
private:
	std::vector<int> vortex; //Вершина
	vector mass; //Матрица смежности
public:
	Graph() noexcept;
	void getMass(vector);
	void search(int, int);
	void printGraph();
	vector retMass();
	std::vector<int> get_Vortex();
};



Graph::Graph() noexcept : vortex(0)
{
	for (auto i = 0; i < vortex.size(); i++)
	{
		vortex[i] = 0;
	}
}

std::vector<int> Graph::get_Vortex()
{
	return vortex;
}

vector Graph::retMass()
{
	return mass;
}

void Graph::getMass(vector _mass)
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
	if (st != vortex[0] && n != vortex.size())
	{
		throw "Hoooray! \n Please enter first elements in garph";
	}

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
