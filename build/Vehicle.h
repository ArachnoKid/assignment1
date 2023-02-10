#pragma once
#include "GameObject.h"
class Vehicle :
    public GameObject
{
protected: 
    string s_type;
    int i_wheels;
    int i_seats;
    string s_color;
    float f_acceleration;
    float f_weight;
public:
    Vehicle();
    ~Vehicle();
    void setType(string);
    virtual float accelCalculate(float);
};

