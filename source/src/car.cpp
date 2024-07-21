//
// Created by byzac on 21/07/2024.
//

#include "car.hpp"

Car::Car(Vector2f startPosition, Vector2f startDimension)
    : position(startPosition),
      dimension(startDimension),
      rotation(0.f),
      speed(0),
      ammo(0),
      drifting(false),
      turbo(0)
{
    shape.setPosition(position);
    shape.setSize(dimension);
    shape.setRotation(rotation);
    shape.setFillColor(Color::Red);
}

// Set
void Car::setPosition(const Vector2f newPosition) {
    position = newPosition;
}

void Car::setDimension(const Vector2f newDimension) {
    dimension = newDimension;
}

void Car::setRotation(const float deg) {
    rotation = deg;
}

void Car::setHealth(const int newHealth) {
    health = newHealth;
}

void Car::setAmmo(const int newAmmo) {
    ammo = newAmmo;
}

void Car::setTurbo(const int newTurbo) {
    turbo = newTurbo;
}

void Car::setDrifting(const bool isDrifting) {
    drifting = isDrifting;
}


// Get
Vector2f Car::getPosition() const {
    return position;
}

Vector2f Car::getDimension() const {
    return dimension;
}

float Car::getRotation() const {
    return rotation;
}

RectangleShape Car::getShape() {
    return shape;
}

int Car::getHealth() const {
    return health;
}

int Car::getAmmo() const {
    return ammo;
}

int Car::getTurbo() const {
    return turbo;
}

bool Car::isDrifting() const {
    return drifting;
}