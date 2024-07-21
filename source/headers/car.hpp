//
// Created by byzac on 21/07/2024.
//

#ifndef SHOOTERLEAGUE_CAR_HPP
#define SHOOTERLEAGUE_CAR_HPP

#include <SFML/Graphics.hpp>

using namespace sf;

class Car {
public:
    Car(Vector2f startPosition, Vector2f startDimension);

    void setDimension(Vector2f newDimension);
    void setPosition(Vector2f newPosition);
    void setRotation(float deg);

    void setHealth(int newHealth);
    void setAmmo(int newAmmo);
    void setTurbo(int newTurbo);
    void setDrifting(bool isDrifting);

    Vector2f getDimension() const;
    Vector2f getPosition() const;
    float getRotation() const;
    RectangleShape getShape();

    int getHealth() const;
    int getAmmo() const;
    int getTurbo() const;
    bool isDrifting() const;

private:
    RectangleShape shape;

    Vector2f position;
    Vector2f dimension;
    float rotation;

    int health;
    float speed;
    int ammo;
    int turbo;
    bool drifting;
};


#endif //SHOOTERLEAGUE_CAR_HPP
