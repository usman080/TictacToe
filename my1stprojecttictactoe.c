/*Created By Usman YusufAli Patel (copyrights are reserved)*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 char check();
 char board[3][3]={'_','_','_','_','_','_','_','_','_'};//, f[30], m[30];
 void input();
 void display();
 void inputdisplay(int y, int f);
 int main()
 {
    int i, j;
    char usm;
    display();
    /*int position[3][3]={'1','2','3','4','5','6','7','8','9'};
     printf("The positions in Board for playing the game:\n");
     //dispalying board position
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++){
     printf("%d |" , &position[i][j]);
         }
         printf("\n");
     }*/
     printf("Enter player1 name:");
     //gets(f);//scanf("%s\n",&f);
     printf("Enter player2 name:");
     //gets(m);//scanf("%s\n",&m);
     input();//starting the game
     usm = check();//displaying the winner
     if(usm=='X')
     {
         printf(" players 1 is winner");
     }
     else if(usm=='O')
     {
         printf("player 2 is winner");
     }
     else
     {
         printf("Game is Draw");
     }
     return 0;
 }

void input()//for inputting the users moves in game
{
    int i, j, k=1,y;
   for(i=0;i<9;i++)
   {
       if(k==1)
        {
            printf("player 1 input your position:");//,f);
            scanf("%d",&y);
            inputdisplay(y,k);
            display();
            if(check() != '_')//after inputing elements checking
            break;

            k++;
        }
        else
        {
            printf("player 2 input your position");//,m);
            scanf("%d",&y);
            inputdisplay(y,k);
            display();
            if(check() != '_')//after inputing elements checking
            break;

            --k;

        }

}
}
void inputdisplay(y,f)//for assigning users moves
{
    if(f==1)
    {
        if(y==1)
            board[0][0] = 'X';
        else if(y==2)
            board[0][1] ='X';
        else if(y==3)
            board[0][2] ='X';
        else if(y==4)
            board[1][0] ='X';
        else if(y==5)
            board[1][1] ='X';
        else if(y==6)
            board[1][2] ='X';
        else if(y==7)
            board[2][0] ='X';
        else if(y==8)
            board[2][1] ='X';
        else if(y==9)
            board[2][2] ='X';
        else
            printf("Invalid Move\n");
    }
    else
    {
         if(y==1)
            board[0][0] = 'O';
        else if(y==2)
            board[0][1] ='O';
        else if(y==3)
            board[0][2] ='O';
        else if(y==4)
            board[1][0] ='O';
        else if(y==5)
            board[1][1] ='O';
        else if(y==6)
            board[1][2] ='O';
        else if(y==7)
            board[2][0] ='O';
        else if(y==8)
            board[2][1] ='O';
        else if(y==9)
            board[2][2] ='O';
        else
            printf("Invalid Move\n");
    }
}


void display()//displaying the game
{

    int i, j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c |",board[i][j]);

        }
        printf("\n");
    }
}/*
char check()//checking the winning possibilities
{
     int i;
      char uk = '_';
    for(i=0;i<=2;i++)
    {
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2]) //for winning possibility in rows
        {
            uk = board[i][0];
        }

        else if(board[0][i]==board[1][i] && board[0][i]==board[2][i]) //for winning possibility in columns
        {
            uk = board[0][i];
        }
    }//for winning possibilities in diagonals
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2])
        uk = board[0][0];
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
        uk = board[1][1];

    return uk ;
}*/
char check(void)
{
   int i;
   char letter='-';
  for(i=0; i<3; i++)  // check rows
if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
letter= board[i][0];
for(i=0; i<3; i++)  // check columns
 if(board[0][i]==board[1][i] && board[0][i]==board[2][i] )
letter= board[0][i];
  // test diagonals
 if( board[0][0]==board[1][1] && board[1][1]==board[2][2] )
letter= board[0][0];
  if( board[0][2]==board[1][1] && board[1][1]==board[2][0] )
letter= board[0][2];
return letter;
}

