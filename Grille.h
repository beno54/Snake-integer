#ifndef GRILLE_H
#define GRILLE_H

#include "Case.h"
#include "NumGenerator.h"

class Grille
{
    public:
        Grille(Vector2f posi, int taille);
        virtual ~Grille();
        Case* get_Case_pointed(Vector2f posi);
        Case* get_neighbourOfCase_pointed(Vector2f posi,Case *caseSelected);
        vector<Case*> get_Cases();
        Case* get_Case_score();
        void draw_cases(RenderWindow &win);
        NumGenerator* get_numG();
        void update_score(int valeur);
        void reset();
    protected:
    private:
        vector<Case*> cases;
        Font font;
        int taille;
        Vector2f posi;
        NumGenerator* numG;
        Case* case_score;
};

#endif // GRILLE_H