#include <iostream>
#include <cmath>
#include <tuple>
#include <random>

class Cell {
protected:
    std::tuple<int, int> position;
    char type;

public:
    Cell(int x, int y, char type)
        : position(std::make_tuple(x, y)), type(type) {}

    std::tuple<int, int> getPos() {
        return position;
    }

    char getType() {
        return type;
    }

    void setPos(int x, int y) {
        position = std::make_tuple(x, y);
    }

    void setType(char newType) {
        type = newType;
    }
};

class Effect {
public:
    virtual void apply(Cell& cell) = 0;
};

class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distX(0, gridWidth - 1);
        std::uniform_int_distribution<int> distY(0, gridHeight - 1);

        int x = distX(gen);
        int y = distY(gen);

        return std::make_tuple(x, y);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        int x1, y1, x2, y2;
        std::tie(x1, y1) = pos1;
        std::tie(x2, y2) = pos2;

        double dx = x2 - x1;
        double dy = y2 - y1;

        return std::sqrt(dx * dx + dy * dy);
    }
};

class Trap : public Cell, public Effect {
private:
    bool active;

public:
    Trap(int x, int y)
        : Cell(x, y, 'T'), active(true) {}

    bool isActive() {
        return active;
    }

    void apply(Cell& cell) {
        if (active) {
            cell.setType('T');
            active = false;
            std::cout << "Trap applied to cell at position (" << std::get<0>(cell.getPos()) << ", "
                      << std::get<1>(cell.getPos()) << ")\n";
        }
    }
};

class Character : public Cell {
public:
    Character(int x, int y)
        : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        int x, y;
        std::tie(x, y) = getPos();
        setPos(x + dx, y + dy);
        std::cout << "Character moved to position (" << std::get<0>(getPos()) << ", "
                  << std::get<1>(getPos()) << ")\n";
    }
};




