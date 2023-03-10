/* Card shuffling and dealing program */ 

#include <iostream> 
#include <stdlib.h> 
#include <time.h> 

using namespace std;

void shuffle( int [] [ 13 ]); 
void deal( const int [][ 13 ], const char *[], const char *[]); 

main() 
{ 
	const char *suite[ 4 ] = {"Hearts", "Diamonds", "Clubs", "Spades" }; 
	const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"}; 
	int deck[ 4 ][ 13 ] = { 0 }; 
 
	srand( time( 0 ) ); 
	shuffle( deck ); 
	deal( deck, face, suite ); 
 return 0; 
} 

//  Randomly shuffles the 52 cards

void shuffle( int wDeck[][13] ) 
{ 
	int row, column, card; 
	for ( card = 1; card <= 52; card++)
	{
		do{
			row = rand() % 4; 
			column = rand() % 13; 
	  	}
		while( wDeck [ row ][ column ] != 0 ); 
		
		wDeck[ row ][ column ] = card; 
	} 
}

//  Deal function prints the random deal of shuffled deck of 52 cards on screen

void deal( const int wDeck[][ 13 ], const char *wFace[], const char *wSuit[]) 
{
	int card, row, column; 
	const char *space; 
	for ( card = 1; card <= 52; card++ ) 
	{
		for( row = 0; row <= 3; row++) 
		{
			for( column = 0; column <= 12; column++) 
			{
				if( wDeck[ row ][ column ] == card ) 
				{
					cout << card << ". " <<wFace[ column ] << " of " << wSuit [row ] << '\n';
				}
			}
		}
	}
}
