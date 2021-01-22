#define black_define 0

constexpr auto black_constexpr = 0;

enum class Side { black_enum, RED };

struct Game {

    // public method
    void make_move(Move);
    void start_game();
    Piece field[8][8];
    Side side;
};
struct Move{
    Side side;
    int src_x;
    int src_y;
    int dst_x;
    int dst_y;
};

struct Piece {
    enum Type {MAN, KING, DEAD};
    Side side;

};