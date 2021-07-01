#include <bits/stdc++.h>
using namespace std;

int rnd(int a, int b){
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]){
	int seed = atoi(argv[1]);
	int n = rnd(1, seed);
	cout << n << endl;
}