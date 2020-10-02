
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int board[3][3], turn ,comp_turn,game_count=1;
char name[50];
void printLayout()  //print initial board
{
	cout << ".............\n";
	for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|";
            cout << " " << i * 3 + j + 1 << " ";
        }
        cout << "|\n";
        cout << ".............\n";
    }
}

void printCurrent() //print the current status of the  board
{
    int i,j;
    cout << "\n.......\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	cout << "|";
            if(board[i][j]==0)
                cout<<" ";
            else if(board[i][j]==1)
                cout<<"X";
            else
                cout<<"O";
        }
        cout << "|\n";
        cout << ".......\n";
        cout<<endl;
    }
}


int check_win() //checks if anyone won the game.
{
    for(int i=0;i<3;i++)
        if((board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) || ( board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i] ))            //checking for winner in straight row or column
            return 1;
    
    if(board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2] )                                                                   //checking for winner in diagonal 
        return 1;
    else if(board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0])                                                               //checking for winner in other diagonal
        return 1;
    else
        return 0;
}

void takeinp()                                                                                                               // taking user's input move
{
    int x, r=0,c=0;
    cout<< name << "'s turn : Enter the cell no.";
    cin>>x;

    int p = x-1;
    
    r = p/3;		//assigning row in board
    c = p%3;		//assigning column in board

    
    if(x>9 || x<1)	// if out of bound input entered
    {
        cout << "Enter value between 1 to 9\n";
        takeinp();
    }
    else if(board[r][c]!=0)	//if cell already filled
    {
        cout<<"It is already filled.\n";
        takeinp();
    }
    else
        board[r][c] = turn;
}

int defend_move(int c, int p, int b)                                                                                 //determines the step in response of player's steps
{
    if(board[0][0] + board[1][1] + board[2][2] == 2*c && board[0][0] != p && board[1][1] != p && board[2][2] != p)                                   
    {
        for(int i = 0;i < 3; i++)
        {
            if(board[i][i] == 0)
            {
                board[i][i] = comp_turn;
                cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                return 1;
            }
        }
    }
    else if(board[0][2] + board[1][1] + board[2][0] == 2*c && board[0][2] != p && board[1][1] != p && board[2][0] != p)
    {
        for(int i=0;i<3;i++)
        {
            if(board[i][2-i]==0)
            {
                board[i][2-i] = comp_turn;
                cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                return 1;
            }
        }
    }
    else
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            if(board[i][0] + board[i][1] + board[i][2] == 2*c && board[i][0] != p && board[i][1] != p && board[i][2] != p)
            {
                for(j=0;j<3;j++)
                {
                    if(board[i][j] == 0)
                    {
                        board[i][j] = comp_turn;
                        cout<<"Computer turn"<<endl;
                        return 1;
					}
                }
            }
            else if(board[0][i]+board[1][i]+board[2][i]==2*c&&board[0][i]!=p&&board[1][i]!=p&&board[2][i]!=p)
            {
                for(j=0;j<3;j++)
                {
                    if(board[j][i]==0)
                    {
                        board[j][i] = comp_turn;
                        cout<<"Computer turn: "<<j+1<<" "<<i+1<<endl;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int shouldAttack1()			// check for attacking move 1
{
	int i,j;
	for(i=0;i<3;i++)
        {
            if( board[i][0] + board[i][1] + board[i][2] == comp_turn && (board[i][0] == comp_turn || board[i][1] == comp_turn || board[i][2] == comp_turn) )
            {
                if(i==1)
                {
                    for(j=0;j<3;j++)
                    {
                        if(board[i][j]==0)
                        {
                            board[i][j] = comp_turn;
                            cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                            return 1;
                        }
                    }
                }
                else
                {
                    for(j=2;j>=0;j--)
                    {
                        if(board[i][j]==0)
                        {
                            board[i][j] = comp_turn;
                            cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                            return 1;
                        }
                    }
                }
            }
            if(board[0][i] + board[1][i] + board[2][i] == comp_turn && (board[0][i] == comp_turn || board[1][i] == comp_turn || board[2][i] == comp_turn))
            {
                if(i==1)
                {
                    for(j=0;j<3;j++)
                    {
                        if(board[j][i]==0)
                        {
                            board[j][i] = comp_turn;
                            cout<<"Computer turn: "<<j+1<<" "<<i+1<<endl;
                            return 1;
                        }
                    }
                }
                else
                {
                    for(j=2;j>=0;j--)
                    {
                        if(board[j][i]==0)
                        {
                            board[j][i] = comp_turn;
                            cout<<"Computer turn: "<<j+1<<" "<<i+1<<endl;
                            return 1;
                        }
                    }
                }
                
            }
        }
        
        if(board[0][0] + board[1][1] + board[2][2] == comp_turn && (board[0][0] == comp_turn || board[1][1] == comp_turn || board[2][2] == comp_turn))
        {
            for(i=2;i>=0;i--)
            {
                if((board[i][i] == 0)&& ((board[i][0] + board[i][1] + board[i][2] == comp_turn && (board[i][0] == comp_turn || board[i][1] == comp_turn || board[i][2] == comp_turn)) || ((board[0][i] + board[1][i] + board[2][i] == comp_turn) && (board[0][i] == comp_turn || board[1][i] == comp_turn || board[2][i] == comp_turn))))
                {
                    board[i][i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][i]==0)
                {
                    if((board[i][0] + board[i][1] + board[i][2] == turn && (board[i][0] == turn || board[i][1] == turn || board[i][2] == turn)) && (board[0][i] + board[1][i] + board[2][i] == turn && (board[0][i] == turn || board[1][i] == turn || board[2][i] == turn)))
                    {
                        board[i][i] = comp_turn;
                        cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                        return 1;
                    }
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][i]==0)
                {
                    board[i][i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
        }
        else if( board[0][2] + board[1][1] + board[2][0] == comp_turn && (board[0][2] == comp_turn || board[1][1] == comp_turn || board[2][0] == comp_turn))
        {
            for(i=2;i>=0;i--)
            {
                if(board[i][2-i] == 0 && ((board[i][0] + board[i][1] + board[i][2] == comp_turn && (board[i][0] == comp_turn || board[i][1] == comp_turn || board[i][2] == comp_turn)) || ( (board[0][2-i]+board[1][2-i]+board[2][2-i] == comp_turn) && (board[0][2-i] == comp_turn || board[1][2-i] == comp_turn || board[2][2-i] == comp_turn))))
                {
                    board[i][2-i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][2-i]==0)
                {
                    if((board[i][0] + board[i][1] + board[i][2] == turn && (board[i][0] == turn || board[i][1] == turn || board[i][2] == turn)) && (board[0][2-i] + board[1][2-i] + board[2][2-i] == turn && (board[0][2-i] == turn || board[1][2-i] == turn || board[2][2-i] == turn)))
                    {
                        board[i][2-i] = comp_turn;
                        cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                        return 1;
                    }
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][2-i]==0)
                {
                    board[i][2-i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
        }

        return 0;
}

int shouldAttack2()		// check for attacking move 2
{
	int i,j;
	if(board[0][0] + board[1][1] + board[2][2] == comp_turn && (board[0][0] == comp_turn || board[1][1] == comp_turn || board[2][2] == comp_turn))
        {
            for(i=2;i>=0;i--)
            {
                if((board[i][i] == 0) && ((board[i][0]+board[i][1]+board[i][2] == comp_turn && (board[i][0] == comp_turn || board[i][1] == comp_turn || board[i][2] == comp_turn)) || ((board[0][i]+board[1][i]+board[2][i] == comp_turn) && (board[0][i] == comp_turn || board[1][i] == comp_turn || board[2][i] == comp_turn))))
                {
                    board[i][i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][i]==0)
                {
                    if((board[i][0] + board[i][1] + board[i][2] == turn && (board[i][0] == turn || board[i][1] == turn || board[i][2] == turn)) && (board[0][i] + board[1][i] + board[2][i] == turn && (board[0][i] == turn || board[1][i] == turn || board[2][i] == turn)))
                    {
                        board[i][i] = comp_turn;
                        cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                        return 1;
                    }
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][i]==0)
                {
                    board[i][i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<i+1<<endl;
                    return 1;
                }
            }
        }
        
        else if( board[0][2]+board[1][1]+board[2][0] == comp_turn && (board[0][2] == comp_turn || board[1][1] == comp_turn || board[2][0] == comp_turn))
        {
            for(i=2;i>=0;i--)
            {
                if(board[i][2-i] == 0 && ((board[i][0]+board[i][1]+board[i][2] == comp_turn && (board[i][0] == comp_turn || board[i][1] == comp_turn || board[i][2] == comp_turn))||( (board[0][2-i]+board[1][2-i]+board[2][2-i] == comp_turn) && (board[0][2-i] == comp_turn || board[1][2-i] == comp_turn || board[2][2-i] == comp_turn))))
                {
                    board[i][2-i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
            for(i=2;i>=0;i--)
            {
                if(board[i][2-i]==0)
                {
                    if((board[i][0] + board[i][1] + board[i][2] == turn && (board[i][0] == turn || board[i][1] == turn || board[i][2] == turn)) && (board[0][2-i] + board[1][2-i] + board[2][2-i] == turn && (board[0][2-i] == turn || board[1][2-i] == turn || board[2][2-i] == turn)))
                    {
                        board[i][2-i] = comp_turn;
                        cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                        return 1;
                    }
                }
            }
            
            for(i=2;i>=0;i--)
            {
                if(board[i][2-i]==0)
                {
                    board[i][2-i] = comp_turn;
                    cout<<"Computer turn: "<<i+1<<" "<<3-i<<endl;
                    return 1;
                }
            }
        }
        
        else
        {
            for(i=0;i<3;i++)
            {
                if( board[i][0]+board[i][1]+board[i][2] == comp_turn && (board[i][0] == comp_turn || board[i][1] == comp_turn || board[i][2] == comp_turn) )
                {
                    if(i==1)
                    {
                        for(int j=0;j<3;j++)
                        {
                            if(board[i][j]==0)
                            {
                                board[i][j] = comp_turn;
                                cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                                return 1;
                            }
                        }
                    }
                    else{
                        for(j=2;j>=0;j--)
                        {
                            if(board[i][j]==0)
                            {
                                board[i][j] = comp_turn;
                                cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                                return 1;
                            }
                        }
                    }
                }
                else if(board[0][i]+board[1][i]+board[2][i] == comp_turn && (board[0][i] == comp_turn || board[1][i] == comp_turn || board[2][i] == comp_turn))
                {
                    if(i==1)
                    {
                        for(j=0;j<3;j++)
                        {
                            if(board[j][i]==0)
                            {
                                board[j][i] = comp_turn;
                                cout<<"Computer turn: "<<j+1<<" "<<i+1<<endl;
                                return 1;
                            }
                        }
                    }
                    else
                    {
                        for(j=2;j>=0;j--)
                        {
                            if(board[j][i]==0)
                            {
                                board[j][i] = comp_turn;
                                cout<<"Computer turn: "<<j+1<<" "<<i+1<<endl;
                                return 1;
                            }
                        }
                    }
                }
            }
        }

        return 0;
}

int attack_move()			//takes a move as to win in future.
{
    
    if(board[0][0] + board[0][2] + board[2][0] + board[2][2] == turn || board[0][0] + board[0][2] + board[2][0] + board[2][2] == 2*turn)
    {
        if(shouldAttack1()) return 1;
    }
    else
    {
        if(shouldAttack2()) return 1;
    }
    return 0;
}

void computer_Dec(int b)		//taking decision for computer's move
{
	  if((board[0][0] + board[0][2] + board[2][0] + board[2][2] == turn+comp_turn || board[0][0] + board[0][2] + board[2][0] + board[2][2] == turn+2*comp_turn) && board[1][1] == 0)
            {
                for(int i=0;i<3;i+=2)
                {
                    for(int j=0;j<3;j+=2)
                        if(board[i][j]==0)
                        {
                            board[i][j] = comp_turn;
                            cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                            cout << endl;
                            return;
                        }
                }
                
            }
            else if(b==2&&board[1][1]==0)
            {
                board[1][1] = comp_turn;
                cout<<"Computer turn: 2 2\n";
                cout << endl;
                return;
            }
            if(!attack_move())
            {
                if(b==0)
                {
                    int i,j;
                    board[2][2] = comp_turn;
                    for(i=0;i<3;i+=2)
                    {
                        for(j=0;j<3;j+=2)
                            if(board[i][j] == comp_turn)
                                cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                    }
                }
                else if(board[1][1]==0)
                {
                    board[1][1] = comp_turn;
                    cout<<"Computer turn: 2 2\n";
                }
                else
                {
                    int i,j;
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            if(board[i][j]==0)
                            {
                                board[i][j] = comp_turn;
                                cout<<"Computer turn: "<<i+1<<" "<<j+1<<endl;
                                cout << endl;
                                return;
                            }
                        }
                    }
                }
            }
}

void computer_move(int b)		//	compter's move
{
    if(!defend_move(comp_turn,turn,b))
    {
        if(!defend_move(turn,comp_turn,b))
        {
          computer_Dec(b);
        }
    }
}

void play_game()		// setup of the game
{

	int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            board[i][j]=0;
    if(game_count>0)
        cout << "Instructions: Enter numbers from 1 to 9 to insert your symbols in the designated place. Like shown below: \n";
    
    printLayout();
    cout << "Do you want to play first or would you let computer play first: \n (1 to play first, 2 to play 2nd)\n";
    cin >> turn;

    if(turn == 1)		// if user plays first
    {
    	comp_turn=2;
            cout<<"\nSo your symbol is X.\n.";
            printCurrent();
            for(i = 0;i < 9;)
            {
            takeinp();
            printCurrent();
            i++;
            if(i>=8)
             	break;
            computer_move(i);
            printCurrent();
            i++;
             if(i>5)
                if(check_win())
                {
                    cout << "Computer won\n";
                    break;
                }
		}
    }
    else if(turn == 2)		// if user plays second
    {
    	comp_turn=1;
    	cout<<"\nSo your symbol is O.\n.";
    	printCurrent();
    	for(i=0;i<9;)
    	{
    	    computer_move(i);
    	    printCurrent();
    	    i++;
    	    if(i>4)
    	        if(check_win())
    	        {
    	            cout << "Computer won\n";
    	            break;
    	        }
    	    if(i>=8)
    	        break;
    	    takeinp();
    	    printCurrent();
    	    i++;
    	}
    }
	else
		cout << "Please enter either 1 or 2" << endl; 
    

    if(!check_win())
    {
        if(game_count>0)
           cout << "It is a tie.\n";

    }
    char c;
    cout << "Want to play again? Press Y to play again, N to exit";
    cin >> c;
    if(c == 'y' || c == 'Y')
    {
        game_count++;
        play_game();		// recursively play the game again
    }
    else return;
}

int main()
{
	cout << "Enter your name: ";
	cin >> name;
    play_game();		// initialize the game

    
    
    return 0;
}


