#ifndef GRAPH_HPP
#define GRAPH_HPP

class Graph
{
	private:
		int vertexCount;
		bool ** matrix;
	public:
		Graph (int vertexCount);
		bool HasAdjacency (int s, int t);
		void SetAdjacency (int s, int t);
};

#endif /*GRAPH_HPP*/
