#ifndef PLAYER_H
#define PLAYER_H


#pragma once
#include <iostream>
#include<string>


class Player
{
public:
    Player();
    ~Player();

    void getPlayerName(std::string name) ;
    virtual void Attack();
    void CheckInventory();

private:
std::string m_PlayerName;
int m_health;
int m_demage;

};

#endif