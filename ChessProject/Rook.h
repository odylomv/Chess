﻿#pragma once
#include "Piece.h"


class Rook : public Piece
{
    public:
        Rook(char, char, Color);
        Rook(const Rook&);

        Piece* CreateCopy();
        bool IsValidMove(char, char);
        void Move(char, char);

        bool HasMoved;
};
