#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b){
    return a + rand() % (b - a + 1);
}

// generates n distinct elements from [l, r] inclusive
// Condition : n >= (r-l + 1)
void distinctArray_(int n, int l, int r){
	set<int> s;
	while(s.size()!=n){
		int x = rand(l, r);
		if(s.find(x) == s.end()){
			s.insert(x);
			cout << x << " ";
		}
	}
	cout << "\n";
}

// generates n elements from [l, r] inclusive
void Array_(int n, int l, int r){
	for(int i=0; i<n; i++){
		int x = rand(l, r);
		cout << x << " ";
	}
	cout << "\n";
}


// generated permution of n -> 1 to n
void generate_permuatation(int n){
	set<int> s;
	while(s.size()!=n){
		int x = rand(1, n);
		if(s.find(x) == s.end()){
			s.insert(x);
			cout << x << " ";
		}
	}
	cout << "\n";
}

int main(int argc, char* argv[]){
	srand(atoi(argv[1]));
	int n = rand(1, 10);
	cout << n << "\n";
	
}
