#include <vector>
#include "piece.hpp"
#include "square.hpp"

Piece::Piece(Square square, PieceColor color)
    : square{ square }, color{ color }
{}

Square Piece::getSquare()
{
    return square;
}

PieceColor Piece::getColor()
{
    return color;
}


King::King(Square square, PieceColor color)
    : Piece{ square, color }
{}

std::vector<Square> King::getAvailableSquares()
{
    std::vector<Square> vec{};
    static constexpr SquareDelta kingDeltas[] = {
        {-1, +1}, {0, +1}, {+1, +1},
        {-1,  0},          {+1,  0},
        {-1, -1}, {0, -1}, {+1, -1},
    };

    for (SquareDelta d : kingDeltas)
    {
        Square consideredSquare = square + d;

        if (!consideredSquare.isValid() || )
            continue;
        

    }
}


Queen::Queen(Square square, PieceColor color)
    : Piece{ square, color }
{}

std::vector<Square> Queen::getAvailableSquares()
{
    std::vector<Square> vec{};
    
}


Rook::Rook(Square square, PieceColor color)
    : Piece{ square, color }
{}

std::vector<Square> Rook::getAvailableSquares()
{
    std::vector<Square> vec{};
    
}


Knight::Knight(Square square, PieceColor color)
    : Piece{ square, color }
{}

std::vector<Square> Knight::getAvailableSquares()
{
    std::vector<Square> vec{};
    
}


Bishop::Bishop(Square square, PieceColor color)
    : Piece{ square, color }
{}

std::vector<Square> Bishop::getAvailableSquares()
{
    std::vector<Square> vec{};
    
}