#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

#include <iostream>
#include <ostream>
#include <stdlib.h>

using namespace std;
class TypePiece
{
    public:
    TypePiece type;
    int placementl;
    int placementc;
    bool deplacement(int l,int c);
    int val_piece;
    int getvaleurpiece(int v);
};
class Piece
{
    public:
    Piece type;
    string *couleur;
    int **position;
    void print();
    piece();
    piece & operator=(const piece &);
    ~piece();
};
#endif // PIECE_H_INCLUDED
