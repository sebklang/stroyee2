#ifndef PIECE_HPP
#define PIECE_HPP

#include <vector>
#include "square.hpp"

enum PieceColor
{
    WHITE, BLACK, NO_PIECE_COLOR
};

class Piece
{
public:
    Piece(Square, PieceColor);
    Square getSquare();
    PieceColor getColor();
    virtual std::vector<Square> getAvailableSquares() = 0;
protected:
    Square square;
private:
    PieceColor color;
};

class King : public Piece
{
public:
    King(Square, PieceColor);
    virtual std::vector<Square> getAvailableSquares() override;
};

class Queen : public Piece
{
public:
    Queen(Square, PieceColor);
    virtual std::vector<Square> getAvailableSquares() override;
};

class Rook : public Piece
{
public:
    Rook(Square, PieceColor);
    virtual std::vector<Square> getAvailableSquares() override;
};

class Knight : public Piece
{
public:
    Knight(Square, PieceColor);
    virtual std::vector<Square> getAvailableSquares() override;
};

class Bishop : public Piece
{
public:
    Bishop(Square, PieceColor);
    virtual std::vector<Square> getAvailableSquares() override;
};

#endif
