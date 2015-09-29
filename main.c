#include <stdio.h>
#include <stdlib.h>
#include "mp1.h"
int main(void){
	
	int choice;
	char done;
	printmenu();
	printf("play??\n");
	scanf("%d, &choice");
	if(choice == 2)
		return;
	done =  ' ';
	init_matrix();

	do{
        	display_matrix();
        	player_move();
  		/* see if player is winner */
    		done = check(); 
    		if(done != ' ') 
			break; /* player is winner!*/
    		computer_move();
    		done = check(); /* see if computer is winner */	
	} 
	while(done == ' ');
	if(done == 'X') 
   		printf("-----YOU WON!!!-----\n");
        else{
		printf("-----I WON!!!!-----\n");
		printf("-----OOPS!!! YOU LOSE...TRY NEXT TIME-----\n");
		printmenu();
	}
   		display_matrix(); /* show final positions */

        return 0;
}

