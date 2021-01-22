#define black_define 0

constexpr auto black_constexpr = 0;

enum Side { black_enum, RED };
enum Type { MAN, KING, DEAD };

struct Move{
    Side side;
    int src_x;
    int src_y;
    int dst_x;
    int dst_y;
};

struct Piece {
    Side side;
    Type type;
};

struct Game {

    void make_move(Move);
    void start_game();

    Piece field[8][8];
    Side side;
};