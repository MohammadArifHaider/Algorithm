#include<bits/stdc++.h>
using namespace std;

const int SIZE =25;

int graph[SIZE][SIZE],visited[SIZE],parent[SIZE];

queue <int> Q ;

void bfs(int x);

int main(){
	graph[1][5] = 1;
	graph[5][1] = 1;
	graph[6][1] = 1;
	graph[4][3] = 1;
	graph[3][5] = 1;
	graph[3][4] = 1;
	graph[5][3] = 1;
	graph[1][6] = 1;
	bfs(1);
}

void bfs(int x){
	Q.push(x);
	visited[x] = 1;
	parent[x] = 0;
	
	while(!Q.empty()){
		int y = Q.front();
		Q.pop();
		//cout<<"found y "<<y<<endl;
		for(int i = 0;i<SIZE;i++){
			if(graph[y][i]==1){
				if(visited[i] !=1){				
					Q.push(i);
					visited[i] = 1;
					parent[i] = 1 + parent[y];
				//	cout<<"found"<<endl;
				}
			}
		}
	}
	
	for(int i =0;i<SIZE;i++)
		cout<<parent[i]<<" ";
	cout<<endl;	
	
	return;
}
