#include<bits/stdc++.h>
using namespace std;
 
class Trie{
 
	Trie* t[27];
	bool endmark;
	int occur;
 
 
	public:
 
	Trie(){
		for(int i = 0; i<27;i++)
			this->t[i] = 0;
			this->endmark = false;
			this->occur = 0;
	}

	void insert(string s){
		Trie curr = *this;
		for(int i = 0; i<s.length();i++){
			int id = s[i] - 'a';
			if(curr->t[id] == 0 ){
				curr->t[id] = new Trie();
			}
			curr = curr->t[id];
		}
		curr->endmark = true;
		curr->occur++;
		return;
	}
 
	int search(string s){
		Trie curr = *this;
		for(int i = 0; i<s.length();i++){
			int id = s[i] - 'a';
			if(curr->t[id] == 0 ){
				return false;
			}
			curr = curr->t[id];
		}
		return curr->occur;
	}
};
 
int main(){
	Trie *trie = new Trie();	
	trie->insert("arif");
	trie->insert("arif");
	trie->insert("arif");
	trie->insert("arif");
	trie->insert("arif");
 
	cout<<trie->search("arif");
 
	return 0;
 
}
