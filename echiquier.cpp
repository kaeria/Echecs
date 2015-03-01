#include "echiquier.h"
#include "piece.h"
#include <iostream>


using namespace std;

ehciquier::echiquier() //initialisation
{
    dim=8;
    echectab=new piece*[8];
    for(int i=0;i<8;i++)
    {
        echectab[i]=new piece[8];
        {
            for(j=0;j<8;j++)
            echectab[i][j]=Piecevide;
        }
    }
    for(int i=0;i<8;i++)
    {
        piece Pb;
        Pb.type
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
