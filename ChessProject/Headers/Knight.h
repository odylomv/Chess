﻿#pragma once
#include "Piece.h"


class Knight : public Piece
{
    public:
        Knight(char, char, Color);
        Knight(const Knight&);

        Piece* CreateCopy();
        bool IsValidMove(char, char);
};
