#include<iostrem>
#include<cstdlib>
#include<string>
#include"maxit.h"


void maxit :: DisplayRules()
{
    cout<<"Maxit \n";
    cout<<"\n";
    cout<<"The object in maxit is to get as many points as possible when the game ends. \n";
    cout<<"Two players can play against each other, or one against the computer AI. \n";
    cout<<"You get points in the game by moving your marker to a space with a number in it. \n";
    cout<<"Each space will contain random numbers from -9 to 15. \n";
    cout<<"The first player always move horizontally and the second player always move vertically. \n";
    cout<<"You move to the place that you want to go by using the arrow buttons. \n";
    cout<<"The game ends after every space has been filled out. \n";
    cout<<"The scoreboard will show at the bottom of the chart. \n";
    cout<<"\n";
    cout<<"1 or 2 players? \n";
}

void maxit :: InitialGrid()
{
    int temp;
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			do
			{
				temp = -9 + rand() % 25; // No.s between -9 to 15
			} while (freq[9 + temp] >= n/2); // Max freq. of each no. = 4
			a[i][j] = temp;
			freq[9 + temp]++;
		}
	}
	c_row = rand() % n;  // Starting position of game
	c_col = rand() % n;
}

void maxit :: Result()
{
    cout << "\n\nGAME OVER!!!";
	if (P1sum > P2sum) cout << "\n\n"<<P1name<<" wins!\n\n";  // Decides the winner
	else if (P1sum < P2sum) cout << "\n\n"<<P2name<<" wins!\n\n";
	else cout << "\n\nGame Draw\n\n"; 
}

void maxit :: Player1Choice()
{

}

void maxit :: Player2Choice()
{
    
}