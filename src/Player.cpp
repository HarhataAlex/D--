#include "Player.h"
#include <string>

Player::Player() {};
//  Player::Player(std::string name, int health, int demage)
//  :m_PlayerName(name),
//   m_health(health),
//   m_demage(demage)
//  {
//      std::cout<<" ";
//  };

Player::~Player()
{

}

void Player::getPlayerName(std::string name)
{
    std::cin >> name;
    m_PlayerName = name;
}

void Player::Attack()
{
    std::cout<< "Un Player Ataca\n";
}