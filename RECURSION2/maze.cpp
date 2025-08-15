#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
	if(sr > er || sc > ec) return 0;
	if(sr == er && sc == ec) return 1;
	int rightWays = maze(sr,sc+1, er,ec);
	int leftWays = maze(sr+1, sc,er,ec);
	return rightWays + leftWays;
}
int maze2(int row, int col){
	if(row<1 || col <1) return 0;
	if(row==1 && col==1) return 1;
	int rightWays = maze2(row, col-1);
	int leftWays = maze2(row-1, col);
	return rightWays + leftWays;
}

void printPath(int sr, int sc, int er, int ec, string s){
	if(sr > er || sc > ec) return;
	if(sr == er && sc == ec){ // destination reached
		cout << s << endl;
	}
	printPath(sr,sc+1, er,ec,s+'R');
	printPath(sr+1, sc,er,ec,s+'D');
}
void printPath2(int row, int col , string s){
	if(row<1 || col <1) return ;
	if(row==1 && col==1) {
		cout << s << endl;
	}
	printPath2(row, col-1, s+'R');
	printPath2(row-1, col, s+'D');
}
int main(){
	cout << maze2(3,3)<< endl;
	cout << maze(1,1,3,3) << endl;
	printPath(1,1,3,3,"");
	cout << endl;
	printPath2(3,3,"");
}