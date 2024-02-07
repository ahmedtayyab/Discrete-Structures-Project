#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bipartite {
public:

	//Constructor
	Bipartite()
	{
		vertices = 0;
		edges = 0;

		getInput();

		//adjacency list
		adjacency_list = vector<vector<int>>(vertices);

		//for visiting nodes
		visited = vector<bool>(vertices, false);

		//for coloring the graph
		coloring = vector<string>(vertices, "white");

		getGraph();
	}

	//--------------------------------------- Class Variables -----------------------------
	int vertices, edges;
	int u, v;
	bool bipartite = true;

	//adjacency list
	vector<vector<int>> adjacency_list;

	//for visiting nodes
	vector<bool> visited;

	//for coloring the graph
	vector<string> coloring;

	//--------------------------------------- Class Functions -----------------------------
	void getInput()
	{
		cout << "Enter the number of vertices: ";
		cin >> vertices;
		vertices++;
		cout << "Enter the number of edges: ";
		cin >> edges;
	}

	void getGraph()
	{
		for (int i = 0; i < edges; i++)
		{
			cout << "\nEnter in the (x,y) format\n";
			cout << "x. ";
			cin >> u;
			cout << "y. ";
			cin >> v;
			adjacency_list[u].push_back(v);
			adjacency_list[v].push_back(u);
		}
		traverse();

	}

	void traverse()
	{
		for (int i = 0; i < vertices; i++)
		{
			if (!visited[i])
			{
				colour(i, "red");
			}
		}
		isBipartitie();
	}

	void colour(int node, string assign_color) {

		//check if the node is visited
		if (coloring[node] == "white")
		{
			//storing color
			coloring[node] = assign_color;
			visited[node] = true;
			for (auto i : adjacency_list[node])
			{
				if (coloring[node] == "red")
					colour(i, "blue");
				else
					colour(i, "red");
			}
		}
		else if (coloring[node] != assign_color)
		{
			bipartite = false;
		}
		else
		{
			return;
		}
	}

	void isBipartitie()
	{
		char emoji = 4;

		if (bipartite) {
			cout << "\n\t" << emoji << emoji << emoji << " The Graph is Bipartite " << emoji << emoji << emoji << endl;
		}
		else
		{	//to store the conflicting vertices
			vector<int> conflicting_vertices;
			for (int i = 0; i < vertices; i++)
			{
				for (auto j : adjacency_list[i])
				{
					if (coloring[i] == coloring[j])
					{
						conflicting_vertices.push_back(i);
						conflicting_vertices.push_back(j);
					}
				}
			}

			//printing the conflicting vertices
			cout << "\nThese are the conflicting vertices: ";
			for (auto v : conflicting_vertices)
			{
				cout << v << " ";
			}
			cout << "\n\nHence,\n\t" << emoji << emoji << emoji << " The Graph is not Bipartite " << emoji << emoji << emoji << endl;
		}
	}
};

//----------------------------------------------------- MAIN -----------------------------------------------------

int main()
{
	Bipartite obj;

	return 0;
}

//----------------------------------------------------- END -----------------------------------------------------



