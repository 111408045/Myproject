/*the game is played between a player and computer*/
#include <stdio.h>
#include <stdlib.h>
#include "mp1.h"


/*the gameboard is represented by two dimensional character array*/
char arr[3][3];
  
/*init_matrix will initialise the array with spaces as all entries of the matrix*/
/*the check function will check the gameboard after each turn of player and computer*/
/*the player_move will function the movement of the player*/
/*the computer_move will function the movement of the player*/
/*display_matrix will display the matrix*/


/*the first view of the game is the main menu page, which prints the following commands*/
void printmenu(){
	printf("------TIC TAC TOE-----\n");
	printf("1. NEW GAME\
		2. EXIT \n");
	printf("-----You will be playing against the computer-----\n");
}

/* Initialize the matrix. */
void init_matrix(void){
	int i, j;
	for(i=0; i<3; i++){
	  	for(j=0; j<3; j++) 
			arr[i][j] =  ' ';
	}
}

/* Get a player's move. */
/*void player_move(void){
	int x, y;
	printf("Enter X and Y coordinates for your move: ");
	scanf("%d\t%d", &x, &y);
	x--; 
	y--;

  	if(matrix[x][y] != ' '){
    		printf("Invalid move, try again.\n");
    		player_move();
  	}
  	else 
		matrix[x][y] = 'X';
}*/

/* Get a move from the computer. */
void computer_move(void)
{
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
      			if(arr[i][j] == ' ') 
				break;
		
    			if(arr[i][j] == ' ') 
				break;
		}
  	}

 	if(i*j == 9){
		printf("game over....\n");
		printf("go to main menu\n");
    		exit(0);
  	}
  	else
    		arr[i][j] = 'O';
}

/* Display the matrix on the screen. */
void display_matrix(void){
	int t;

	for(t=0; t<3; t++){
		printf(" %c | %c | %c ", arr[t][0],
        	arr[t][1], arr[t][2]);
    	if(t != 2) 
		printf("\n---|---|---\n");
  	}
  	printf("\n");
}


//void putintobox(char arr[3][3], char ch, int box)
void player_move(void)
{
  int box;
  char ch;
  printf("enter the box in which u want to enter\n");
  scanf("%d", &box);
  switch(box)
  {

    case 1 :	if(arr[0][0] != 'X' && arr[0][0]!= 'O'){
			scanf("%c", &ch);
                	arr[0][0] = ch;
			//disp_matrix();
		          
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 2 :	if(arr[0][1] != 'X' && arr[0][1]!= 'O'){
			scanf("%c", &ch);
		        arr[0][1] = ch;
			//disp_matrix();
		        
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 3 :	if(arr[0][2] != 'X' && arr[0][2]!= 'O'){
			scanf("%c", &ch);
                	arr[0][2] = ch;
			//disp_matrix();
		          
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 4 :	if(arr[1][0] != 'X' && arr[1][0]!= 'O'){
			scanf("%c", &ch);
		        arr[1][0] = ch;
			//disp_matrix();
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 5 :	if(arr[1][1] != 'X' && arr[1][1]!= 'O'){
			scanf("%c", &ch);
		        arr[1][1] = ch;
			//disp_matrix();
		        
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 6 :	if(arr[1][2] != 'X' && arr[1][2]!= 'O'){
			scanf("%c", &ch);
		        arr[1][2] = ch;
			//disp_matrix();
                  
		}
	        break;

    case 7 :	if(arr[2][0] != 'X' && arr[2][0]!= 'O'){
			scanf("%c", &ch);
     		       arr[2][0] = ch;
			//disp_matrix();
		          
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 8 :	if(arr[2][1] != 'X' && arr[2][1]!= 'O'){
			scanf("%c", &ch);
		        arr[2][1] = ch;
			//disp_matrix();
		          
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;

    case 9 :	if(arr[2][2] != 'X' && arr[2][2]!= 'O'){
			scanf("%c", &ch);
		        arr[2][2] = ch;
			//disp_matrix();
		          
		}
		else{
			printf("Invalid move, try again.\n");
    			player_move();
		}
		break;
   }
	//num = boxesleft(char arr[3][3]);
	//printf("number of boxes left are = %d\n", num);
}
char check(void)
{
	int i;
	/* check rows */
	for(i=0; i<3; i++)  
		if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) 
		return arr[i][0];

	/* check columns */
        for(i=0; i<3; i++)  
    		if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i]) 
		return arr[0][i];

 	 /* test diagonals */
 	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
       		return arr[0][0];

  	if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
       		return arr[0][2];

  	return ' ';
}

/*int boxesleft(char a[3][3]){
	int i, j, boxesleft=9;
	for(i=0;i<3;i++){
     		for(j=0;j<3;j++){
       			if((a[i][j] == 'X') ||(a[i][j] == 'O'))
          boxesleft--;
      }
    }

   return boxesleft;
}*/
