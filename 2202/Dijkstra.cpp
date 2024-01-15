#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll minDistance(ll dist[], bool sptSet[],ll V)
{
	ll mini = INT_MAX, min_index;

	for (ll v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= mini)
			mini = dist[v], min_index = v;

	return min_index;
}
void printSolution(ll dist[],ll V,ll src)
{
	cout << "Vertex \t Distance from " <<src<< endl;
	for (ll i = 0; i < V; i++)
		cout << i << " \t\t" << dist[i] << endl;
}

void dijkstra(vector<vector<ll>>graph,ll src,ll V){
	ll dist[V];

	bool sptSet[V];
	for (ll i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;

	dist[src] = 0;

	for (ll cnt = 0; cnt < V - 1; cnt++) {
		ll u = minDistance(dist, sptSet,V);
		sptSet[u] = true;

		for (ll v = 0; v < V; v++)

			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];

	}

	printSolution(dist,V,src);
}

int main()
{
    ifstream file;
    file.open("C:\\Users\\HP\\Desktop\\New folder\\DijkstraData.txt");

    ll V;  file>>V;

    ll src=0;

	vector<vector<ll>>graph(V,vector<ll>(V,0));

	for(ll i=0;i<V;i++){
        for(ll j=0;j<V;j++){
            file>>graph[i][j];
        }
	}

	dijkstra(graph, src,V);
    file.close();
	return 0;
}

