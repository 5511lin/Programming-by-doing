#include <cstdlib>
#include <unistd.h>
#include <iostream>
int table[7][6];
int choice, player;
bool end = false;
int a=0;

void check(int x) //Checks if the column the player chose is all filled out and unavailable.
{
    if(table[x-1][a]!=0 && a<6)
    {
        a++;
        check(x);
    }   else if (player==1 && a<6)
            {
            table[x-1][a]=1;
            a=0;
            }
        else if (player==2 && a<6)
            {
            table[x-1][a]=2;
            a=0;
            }
        else
        {
        std::cout << "UNAVAILABLE SPOT!\n";
        a=0;
        player++;
        }
}

void draw_table() //Sets up an empty table for players to play
{
    system("clear");
    for(int i = 0; i<9; i++)
    {
        if(i<2)
        {
        std::cout<<"-";
        } else if(i>7)
        {
        std::cout<<i-1<<"--"<<std::endl;
        } else {
        std::cout<<i-1<<"----";
        }
    }
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<7; j++)
        {
            if(table[j][i]!=0)
            {
                if(table[j][i]==1)
                {
                std::cout<<"| X |";
                }else std::cout<<"| O |";
            }
            else std::cout<<"|   |";
        } std::cout<<std::endl;
    }
    for(int i = 0; i<35; i++)
    {
        std::cout<<"=";
    } std::cout<<std::endl;
}

void win_check() //check the lines to see which player wins.
{
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<7; j++)
        {
        if(table[j][i]==1 && table[j+1][i+1]==1 && table[j+2][i+2]==1 && table[j+3][i+3]==1)
            {
            end = true;
            std::cout << "\nPLAYER 1 WIN!\n";
            }
        if(table[j][i]==1 && table[j+1][i-1]==1 && table[j+2][i-2]==1 && table[j+3][i-3]==1)
            {
            std::cout << "\nPLAYER 1 WIN!\n";
            end = true;
            }
        if(table[j][i]==2 && table[j+1][i-1]==2 && table[j+2][i-2]==2 && table[j+3][i-3]==2)
            {
            std::cout << "\nPLAYER 2 WIN!\n";
            end=true;
            }
        else if(table[j][i]==2 && table[j-1][i-1]==2 && table[j-2][i-2]==2 && table[j-3][i-3]==2)
            {
            end = true;
            std::cout << "\nPLAYER 2 WIN!\n";
            }
        else if(table[j][i]==1 && table[j][i-1]==1 && table[j][i-2]==1 && table[j][i-3]==1)
            {
            std::cout << "\nPLAYER 1 WIN!\n";
            end = true;
            }
        else if(table[j][i]==1 && table[j-1][i]==1 && table[j-2][i]==1 && table[j-3][i]==1)
            {
            std::cout << "\nPLAYER 1 WIN!\n";
            end = true;
            }
        else if(table[j][i]==2 && table[j][i-1]==2 && table[j][i-2]==2 && table[j][i-3]==2)
            {
            std::cout << "\nPLAYER 2 WIN!\n";
            end = true;
            }
        else if(table[j][i]==2 && table[j-1][i]==2 && table[j-2][i]==2 && table[j-3][i]==2)
            {
            std::cout << "\nPLAYER 2 WIN!\n";
            end = true;
            }
        }
    }
}
void p_choice() //let player choose a column and also check if the player has chosen a column outside of the table's horizontal range. 
//If the column is in the table's horizontal range, it runs the check function.
//If the column is outside of the horizontal range, it prints unavailable spot.
//Runs the win_check function at the end.

{
    player = 1;
    while(end!=true)
    {
    std::cout << "PLAYER " << player << ": ";
    std::cin >> choice;
        if (choice>0 && choice<8)
        {
            check(choice);
            draw_table();
            if (player == 1)
            {
                player++;
            }
            else
            {
                player--;
            }
        }
    else
        {
    std::cout << "UNAVAILABLE SPOT!\n";
        }
    win_check();
    }
}


int main()
{
    system("clear");
    std::cout<<"WELCOME TO CONNECT 4"<<std::endl;
    sleep(1);
    draw_table();
    p_choice();
    return 0;
}