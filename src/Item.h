#ifndef ITEM_H
#define ITEM_H

#pragma once
#include<iostream>
#include<string>
class Item
{
public:
    Item();
    ~Item();
    int AttackPower;
    int MagicPower;
    int Defence;
    std::string ItemType;

private:

};

#endif