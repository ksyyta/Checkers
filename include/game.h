#define black_define 0

constexpr auto black_constexpr = 0;

enum Side { black_enum, RED };

struct Game {

    // public method
    void start_game();
private:
    // private member
    Side side;
};