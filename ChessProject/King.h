﻿#pragma once
#include "Piece.h"


class King : public Piece
{
    public:
        King(char, char, Color);
        King(const King&);
        Piece* CreateCopy();

        bool IsValidMove(char, char);
        void Move(char, char);

        bool HasMoved;  
};
