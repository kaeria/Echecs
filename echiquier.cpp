#include "echiquier.h"
#include "piece.h"
#include <iostream>


using namespace std;

ehciquier::echiquier() //initialisation
{
    dim=8;
    echiquier=new piece*[8];
    for(int i=0;i<8;i++)
    {
        piece[i]=new piece[8];
        {
            for(j=0;j<8;j++)
            piece[i][j]=piece_vide;
        }
    }
}
echiquier::~echiquier()
{
    if(echiquier!=NULL)
    for(int i=0:i<8;i++)
    {
        delete piece[]
    }

}
void echiquier::print()
{

}
echiquier::echiquier(const echiquier &)
{

}
echiquier::echiquier & operator=(const operator &)
{

}
