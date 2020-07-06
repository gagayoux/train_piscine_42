/*--- Condition de remplissage de base ---*/

/*--- Si on retrouve 1 ---*/

/*--- colup ---*/
if (tab[1][0] == 1)
    tab[1][1] = 4;
if (tab[2][0] == 1)
    tab[2][1] = 4;
if (tab[3][0] == 1)
    tab[3][1] = 4;
if (tab[4][0] == 1)
    tab[4][1] = 4;

/*--- coldown ---*/
if (tab[1][5] == 1)
    tab[1][4] = 4;
if (tab[2][5] == 1)
    tab[2][4] = 4;
if (tab[3][5] == 1)
    tab[3][4] = 4;
if (tab[4][5] == 1)
    tab[4][4] = 4;

/*--- rowleft ---*/
if (tab[0][1] == 1)
    tab[1][1] = 4;
if (tab[0][2] == 1)
    tab[1][2] = 4;
if (tab[0][3] == 1)
    tab[1][3] = 4;
if (tab[0][4] == 1)
    tab[1][4] = 4;

/*--- rowright ---*/
if (tab[5][1] == 1)
    tab[4][1] = 4;
if (tab[5][2] == 1)
    tab[4][2] = 4;
if (tab[5][3] == 1)
    tab[4][3] = 4;
if (tab[5][4] == 1)
    tab[4][4] = 4;
