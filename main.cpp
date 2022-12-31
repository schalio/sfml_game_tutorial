#include "main.h"


int main(int argc, char *argv[])
{
// Création d'une fenêtre en SFML
    RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32),
                        "Big Tuto SFML2");

//Limite les fps à 60 images / seconde
    window.setFramerateLimit(60);

//On active la synchro verticale
    window.setVerticalSyncEnabled(true);

//Instanciation des classes
    Input input;

// Boucle infinie, principale, du jeu
    while (window.isOpen())
    {
/** GESTION DES INPUTS (CLAVIER, JOYSTICK) **/
        input.gestionInputs(window);

/** DESSIN - DRAW **/
//On efface l'écran et on l'affiche
        window.clear();
        window.display();
    }

// On quitte
    return 0;

}