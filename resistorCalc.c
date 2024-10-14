#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  convert_char(char c);
char t='Y';

int main(){
  while(t=='Y'){
    char  c1, c2, c3,c4;   /*for colours*/
    double  rvalue;
    double resistance;
    int  colour1, colour2, colour3, colour4;

    system("cls"); 	/*for clear the screen*/


    //printf("\n\n\t***********************************************************************\n");
    printf("\t\t\t  _________\t\t   _________ \n");
	printf("\t\t\t /  \t   \\______________/\t    \\ \n");
	printf("\t\t\t/   \t\t\t\t     \\ \n");
	printf("\t _______________|        RESISTOR COLOUR CODE        |_______________ \n");
	printf("\t\t\t|\t      CALCULATOR \t     | \n");
	printf("\t\t\t\\\t    ______________\t     /\n");
	printf("\t\t\t \\_________/\t          \\_________/ \n");
    //printf("\n\n\t***********************************************************************");

	printf( "\n\n\t\tPlease enter the color bands as indicated below:\n\n\t" );
	printf( "\t\tCOLOUR             CODE\n" );
    printf( "\t\t\t------             ----\t\t\t\t\n" );
	printf( "\t\t\tBlack--------------> B\n" );
	printf( "\t\t\tBrown--------------> N\n" );
	printf( "\t\t\tRed----------------> R\n" );
	printf( "\t\t\tOrange-------------> O\n" );
	printf( "\t\t\tYellow-------------> Y\n" );
	printf( "\t\t\tGreen--------------> G\n" );
	printf( "\t\t\tBlue---------------> E\n" );
	printf( "\t\t\tViolet-------------> V\n" );
	printf( "\t\t\tGray---------------> A\n" );
	printf( "\t\t\tWhite--------------> W\n" );
	printf( "\t\t\tGold---------------> D\n" );
	printf( "\t\t\tSilver-------------> S\n" );

	/* for reading three colours */
	printf("\n\t\tEnter the codes : ");
    c1 = getchar();
    c2 = getchar();
    c3 = getchar();
    c4 = getchar();

    /*converting colour characters to numbers */
    colour1 = convert_char( c1 );
    colour2 = convert_char( c2 );
    colour3 = convert_char( c3 );
    colour4 = convert_char( c4 );

    /*finding resistance*/
    rvalue = (10*colour1+colour2)*pow(10,colour3);

    if (rvalue<1000) {
		resistance = rvalue;
		printf( "\n\t\tResistance : %.0f  +-%d Ohms\n", resistance,colour4 );
    }
    else{
		resistance = rvalue/1000;
		printf("\n\t\tResistance : %.2f +-%d% %K\n", resistance,colour4);
    }
	printf("\n\n\t\t*****************************\n\n" );

	printf("\n\t\tDo you want run the program again? Y/N: ");
    t = getchar();
  }
}

/*function for converting colour characters to numbers*/
int convert_char(char c){
	switch(c){
		 case 'B':
			  return 0;
		 case 'N':
			  return 1;
		 case 'R':
			  return 2;
		 case 'O':
			  return 3;
		 case 'Y':
			  return 4;
		 case 'G':
			  return 5;
		 case 'E':
			  return 6;
		 case 'V':
			  return 7;
		 case 'A':
			  return 8;
		 case 'W':
			  return 9;
		 case 'D':
			  return 5;
		 case 'S':
			  return 10;
		 default:
			  return 99999;
    }
}


