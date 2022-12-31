//
// Created by lscha on 30/12/2022.
//

#ifndef SFML1_INPUT_H
#define SFML1_INPUT_H

#include <SFML/Graphics.hpp>

class Input
{

//Structures
    struct Button { bool left, right, up, down, jump, attack, enter; };

public:

//Constructeur
    Input();

//Accesseur
    Button getButton(void) const;

//Mutateur
    void setButton(int bouton, bool etat);

//Fonctions
    void gestionInputs(sf::RenderWindow &window);
    void getInput(sf::RenderWindow &window);


private:

//Variables de la classe en accès privé
    sf::Event event;
    Button button;

//Enum pour les boutons
    enum{ up, down, right, left, attack, jump, enter };

};

#endif //SFML1_INPUT_H