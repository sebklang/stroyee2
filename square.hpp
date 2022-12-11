#ifndef SQUARE_HPP
#define SQUARE_HPP

typedef unsigned char File; // 0..7
typedef unsigned char Rank; // 0..7

typedef signed char FileDelta; // -7..7
typedef signed char RankDelta; // -7..7

struct Square
{
    File file;
    Rank rank;

    constexpr Square(File file, Rank rank)
        : file{ file }, rank{ rank }
    {}

    bool isValid()
    {
        return file >= 0 && rank >= 0 && file <= 7 && rank <= 7;
    }

    Square operator+(SquareDelta &delta)
    {
        return Square{ file + delta.d_file, rank + delta.d_rank };
    }
};

struct SquareDelta
{
    FileDelta d_file;
    RankDelta d_rank;

    constexpr SquareDelta(FileDelta d_file, RankDelta d_rank)
        : d_file{ d_file }, d_rank{ d_rank }
    {}

    SquareDelta operator+(SquareDelta &delta)
    {
        return SquareDelta{ d_file + delta.d_file, d_rank + delta.d_rank };
    }
};

#endif
