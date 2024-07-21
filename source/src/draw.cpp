//
// Created by byzac on 21/07/2024.
//

#include "engine.hpp"

void Engine::draw() {
    window.clear(Color::Black);

    window.draw(car.getShape());

    window.display();
}