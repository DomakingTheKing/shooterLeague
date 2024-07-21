//
// Created by byzac on 21/07/2024.
//

#ifndef SHOOTERLEAGUE_ENGINE_HPP
#define SHOOTERLEAGUE_ENGINE_HPP

#include <SFML/Graphics.hpp>

using namespace sf;

class Engine {
public:
    Engine();

    void run();

    void input();
    void update();
    void draw();

private:
    Vector2f resolution; // Risoluzione schermo, 2 valori, resolution.x e resolution.y
    RenderWindow window; // Effettiva finestra

    const int FPS = 60;
};


#endif //SHOOTERLEAGUE_ENGINE_HPP
