#include <bits/stdc++.h> 
using namespace std;

int minDistance(int dist[], bool sptSet[],int V) { 
    int min = INT_MAX, min_index;   
    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v;   
    return min_index; 
} 
void printSolution(int dist[],int V) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 

void dijkstra(vector<vector<int>>& graph, int src,int V){ 
    int dist[V];  
    bool sptSet[V];
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
    dist[src] = 0; 
    for (int count = 0; count < V - 1; count++) { 
        int u = minDistance(dist, sptSet,V); 
        sptSet[u] = true; 
        for (int v = 0; v < V; v++) 
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    } 
    printSolution(dist,V); 
} 
int main() 
{ 
    vector<vector<int>>graph = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0,9); 
  
    return 0; 
} 