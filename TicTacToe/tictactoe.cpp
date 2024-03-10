#include<bits/stdc++.h>
using namespace std;
void showboard(char b[3][3]){
	cout << "-------------\n"; 
    for (int i = 0; i < 3; i++) { 
        cout << "| "; 
        for (int j = 0; j < 3; j++) { 
            cout << b[i][j] << " | "; 
        } 
        cout << "\n-------------\n"; 
    } 
	}
bool iswin(char board[3][3],char play){
	for(int i=0;i<3;i++){
		    if(board[i][0]==play && board[i][1]==play && board[i][2]==play){
		        return true;
		    }
		    if(board[0][i]==play && board[1][i]==play && board[2][i]==play){
		        return true;
		    }}
		    if(board[0][0]==play && board[1][1]==play && board[2][2]==play){
		        return true;
		    }
		    if(board[0][2]==play && board[1][1]==play && board[2][0]==play){
		        return true;
		    }
		    return false;
		}

int main(){
    char again='Y';
    do{
    char board[3][3] = { { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } };
    char symbol='X';
    int row,col;
    int i;
    for(i=0;i<9;i++){
        showboard(board);
    while(true){
        cout<<"Now it's Player "<<symbol<<" turn:"<<endl;
        cout<<"Select row(0-2) and column(0-2):";
        cin>>row>>col;
        if (cin.fail() || board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Invalid Move! Try again" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue;
        }
        else break;
    }
    board[row][col]=symbol;
    if(iswin(board,symbol)){
        showboard(board);
        cout<<"Player "<<symbol<<" has won"<<endl;
        break;
    }
    symbol=(symbol=='X')?'O':'X';
    }
    if(i==9 ){
        cout<<"IT's A DRAW!!"<<endl;
    }
    cout<<"Do you want to play another game?(Y/N):";
    cin>>again;}while(again=='Y' || again=='y');
    return 0;
}
