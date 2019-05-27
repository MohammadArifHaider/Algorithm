#include<bits/stdc++.h>
using namespace std;

define mx 1000

class SegmentTree(){
	int arr[mx];
	int tree[mx*3];
	
	public:
		
		void init(int node, int b, int e){ 
			if(b==e)
				tree[node] = arr[b];
			int left = node * 2; 
			int right = (node * 2) + 1;
			int mid = (b + e) /2;
			init(left,b,mid);
			init(right,mid+1,e);
			tree[node] = tree[left] + tree[right];
		}
		
		int search(int node, int b, int e, int i, int j){
			if(i>e || b>j)
				return 0;
			if(i>=b && j<= e)
				return tree[node];
			int left = node * 2;
			int right = node * 2 + 1;
			int mid = (b+e)/2;
			int p1 = serach(left,b,mid,i,j);
			int p2 = serach(right,mid+1,e,i,j);
			return p1 + p2;
		}
		
		int update(int node, int b, int e, int i, int value){
			if(i>e || i<b)
				return;
			if( b == e){
				tree[node] = value;
				return;
				}
			int left = node * 2;
			int right = (node * 2) + 1
			int mid = (b+e)/2;
			update(left,b,mid,i,value);
			update(right,mid+1,e,i,value);
			tree[node] = tree[left] + tree[right];
		}
	
}
