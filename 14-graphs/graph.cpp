#include "graph.hpp"

Graph::Graph (int vertexCount)
{
	this->vertexCount = vertexCount;
	this->matrix = new bool*[vertexCount];
	for (int i = 0; i < vertexCount; ++i)
	{
		this->matrix[i] = new bool[vertexCount] {};
	}
}

void Graph::SetAdjacency (int s, int t)
{
	this->matrix[s][t] = true;
	// because undirected
	this->matrix[t][s] = true;
}

bool Graph::HasAdjacency (int s, int t)
{
	return this->matrix[s][t];
}
