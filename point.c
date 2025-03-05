// pointers4.c
// Chapter 13
// Learn C Programming, 2nd Edition
//
// This program builds on program pointers2.c
// and demonstrates double indirection in a function
// parameter.
//
// Specifically
//   modifies showInfo() to pass a pointer to a pointer
//   (double indirection) so the address of pDimension
//   can be properly accessed in the function.
//
// compile with:
//
//   cc pointers4.c -o pointers4 -Wall -Werror -std=c17


#include <stdio.h>
#include <stdlib.h>
#include "Date.h"


void showInfo( int height, int width , int length , int** ppDim )  {
  printf( "  sizeof(int)  = %2lu\n" ,  sizeof(int) );
  printf( "  sizeof(int*) = %2lu\n" , sizeof(int*) );
  printf( "  [height, width, length] = [%2d,%2d,%2d]\n\n" ,
             height , width , length );
  printf( "  address of pDimension = %p\n" ,
             ppDim  );
}


void showVariable( char* pId , int* pDim )  {
  printf( "  address of %s = %p, value at address = %2d\n" ,
              pId, pDim , *pDim );
}


int main( void )  {
  int height = 10;
  int width  = 20;
  int length = 40;

  int*  pDimension = NULL;
  int** ppDimension = &pDimension;
  char* pIdentifier = NULL;

  printf( "\nValues:\n\n");

  showInfo( height , width , length , ppDimension );

  printf( "\nUsing address of each named variables...\n\n");

  pIdentifier = "height";
  pDimension = &height;
  showVariable( pIdentifier , pDimension );
  pIdentifier = "width ";
  pDimension = &width;
  showVariable( pIdentifier , pDimension );
  pIdentifier = "height";
  pDimension = &length;
  showVariable( pIdentifier , pDimension );


  printf("\n------------------\n");


  Date anniversary;             //Date anniversary={18,8,1990};
  anniversary.month=8;
  anniversary.day=18;
  anniversary.year=1990;

  Date* pAnniversary = &anniversary;

  printDate(&anniversary);

  //printf_s("%d\n",(*pAnniversary).day);
  //printf_s("%d\n",pAnniversary->day);
  return 0;
}

  /* eof */

  /* eof */
  