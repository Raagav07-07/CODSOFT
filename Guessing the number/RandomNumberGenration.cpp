#include<bits/stdc++.h>
#include<cstdlib>
#include<time.h>
using namespace std;
bool guessing(){
	cout<<"-------Random Number Guessing Game-------"<<endl;
	cout<<endl;
	cout<<"You have 7 chances to guess the right number"<<endl;
	cout<<endl;
	int r=rand()%100+1;
	for(int i=1;i<=7;i++){
	int guess;
	cout<<"Enter Your Guess:";
	cin>>guess;
	if(guess==r){
		cout<<"Congratulations ! You won..Wanna Try Again(Y/N)"<<endl;
		char c;
		
		cin>>c;
		c=tolower(c);
		switch (c){
		
			case 'y':
				return true;
			case 'n':
				return false;
			default:
				cout<<"Invalid choice"<<endl;
	}}
	else if(r<guess){cout<<"Try a little lower"<<endl;}
	else if(r>guess){cout<<"Try a little higher"<<endl;}
	}
		cout<<"You have ran out of guesses.Wanna Try again(Y/N)"<<endl;
			char c;
		cin>>c;
		c=tolower(c);
		switch(c){
		
			case 'y':
				return true;
			case 'n':
				return false;
			default:
				cout<<"Invalid choice"<<endl;
	
	}}
	int main(){
		srand(time(0));
		bool play;
		do{
			play=guessing();
		}while(play!=false);
		if(play==false){
			cout<<"Thanks for playing"<<endl;
		}
		return 0;
	}



