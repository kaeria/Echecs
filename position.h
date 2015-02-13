#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position
{
    public:

    Joueur getJoueur();
    ~position ();
    position();
    int val_pos();

    private:

    int i;
    int j;
    Joueur Joueur_pos;
    position *pos_soeur;
    position *pos_fille;



};


#endif // POSITION_H_INCLUDED
