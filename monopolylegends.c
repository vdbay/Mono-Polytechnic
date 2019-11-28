/*=================================================
Monopoly Game
Author & Developer : Fachri Bandang & Azhar Subhan
Start Develop: (11.46 A.M) 26/11/2019
===================================================
 /$$$$$$$                  /$$   /$$             /$$            /$$$$$$                                      /$$      /$$ /$$   /$$     /$$                             /$$           /$$$$$$$                                   /$$                    /$$                           /$$
| $$__  $$                | $$$ | $$            | $$           /$$__  $$                                    | $$  /$ | $$|__/  | $$    | $$                            | $$          | $$__  $$                                 |__/                   |__/                          | $$
| $$  \ $$  /$$$$$$       | $$$$| $$  /$$$$$$  /$$$$$$        | $$  \__/  /$$$$$$   /$$$$$$  /$$   /$$      | $$ /$$$| $$ /$$ /$$$$$$  | $$$$$$$   /$$$$$$  /$$   /$$ /$$$$$$        | $$  \ $$ /$$$$$$   /$$$$$$  /$$$$$$/$$$$  /$$  /$$$$$$$ /$$$$$$$ /$$  /$$$$$$  /$$$$$$$       | $$
| $$  | $$ /$$__  $$      | $$ $$ $$ /$$__  $$|_  $$_/        | $$       /$$__  $$ /$$__  $$| $$  | $$      | $$/$$ $$ $$| $$|_  $$_/  | $$__  $$ /$$__  $$| $$  | $$|_  $$_/        | $$$$$$$//$$__  $$ /$$__  $$| $$_  $$_  $$| $$ /$$_____//$$_____/| $$ /$$__  $$| $$__  $$      | $$
| $$  | $$| $$  \ $$      | $$  $$$$| $$  \ $$  | $$          | $$      | $$  \ $$| $$  \ $$| $$  | $$      | $$$$_  $$$$| $$  | $$    | $$  \ $$| $$  \ $$| $$  | $$  | $$          | $$____/| $$$$$$$$| $$  \__/| $$ \ $$ \ $$| $$|  $$$$$$|  $$$$$$ | $$| $$  \ $$| $$  \ $$      |__/
| $$  | $$| $$  | $$      | $$\  $$$| $$  | $$  | $$ /$$      | $$    $$| $$  | $$| $$  | $$| $$  | $$      | $$$/ \  $$$| $$  | $$ /$$| $$  | $$| $$  | $$| $$  | $$  | $$ /$$      | $$     | $$_____/| $$      | $$ | $$ | $$| $$ \____  $$\____  $$| $$| $$  | $$| $$  | $$          
| $$$$$$$/|  $$$$$$/      | $$ \  $$|  $$$$$$/  |  $$$$/      |  $$$$$$/|  $$$$$$/| $$$$$$$/|  $$$$$$$      | $$/   \  $$| $$  |  $$$$/| $$  | $$|  $$$$$$/|  $$$$$$/  |  $$$$/      | $$     |  $$$$$$$| $$      | $$ | $$ | $$| $$ /$$$$$$$//$$$$$$$/| $$|  $$$$$$/| $$  | $$       /$$
|_______/  \______/       |__/  \__/ \______/    \___/         \______/  \______/ | $$____/  \____  $$      |__/     \__/|__/   \___/  |__/  |__/ \______/  \______/    \___/        |__/      \_______/|__/      |__/ |__/ |__/|__/|_______/|_______/ |__/ \______/ |__/  |__/      |__/
                                                                                  | $$       /$$  | $$                                                                                                                                                                                   
                                                                                  | $$      |  $$$$$$/                                                                                                                                                                                   
                                                                                  |__/       \______/                                                                                                                                                                                    
=================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void menu(){
	int choice;
	system("cls");
	printf("=====Monopoly Legends=====\n");
	printf("1. Play\n");
	printf("2. How To Play\n");
	printf("3. High Score\n");
	printf("4. Exit\n");
	printf("===========================\n");
	choice:
	printf("Input your choice:");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			play();
			break;
		case 2:
			howtoplay();
			break;
		case 3:
			highscore();
			break;
		case 4:
			exit(0);
			break;
		default :
			printf("Invalid Input!\n");
			goto choice;
			break;
	}
	return;
}

int highscore(){
	system("cls");
	printf("This is highscore\n");
	printf("Press any key to back to menu\n");
	system("pause");
	menu();
	return 0;
}

int howtoplay(){
	system("cls");
	printf("This is how to play\n");
	printf("Press any key to back to menu\n");
	system("pause");
	menu();
	return 0;
}

void board(){
	char persegi[100][100];
	system("cls");
	int i,j,n;	
        for (i=0; i<11; i++){
            for(j=0; j<11; j++)
            {
                if ((i==0) || (i==10) || (j==0) || (j== 10))
                {
                    persegi[i][j]='_';
                }
			}
		}
		persegi[10][10]='S';
		persegi[0][10]='J';
		persegi[0][0]='F';
		persegi[10][0]='K';
		for (i=0; i<11; i++){
            for(j=0; j<11; j++){
            	 if ((i==0) || (i==10) || (j==0) || (j== 10))
            	 {
            	 	printf("|%c|",persegi[i][j]);
				 }else
				 {
				 	printf("   ");
				 }
			}
        printf("\n");
		}
		return;
}
int play(){
	char nama[10];
	system("cls");
	printf("Insert your name:");
	scanf("%s", &nama);
	printf("Hello %s !\n", nama);
	system("pause");
	board();
	return 0;
}

int main(){
	system("cls");
	menu();
	return 0;
}
