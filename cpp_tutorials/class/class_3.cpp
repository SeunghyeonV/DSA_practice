#include <iostream>
using namespace std;

// constructor tutorial
class Marine {
    int hp;
    int coord_x, coord_y;
    int damage;
    bool is_dead;

    public:
    Marine();
    Marine(int x, int y);

    int attack();
    void be_attacked(int damage_earn);
    void move(int x, int y);
    void show_status();
};

    Marine::Marine() {
        hp = 40;
        coord_x = coord_y = 0;
        damage = 6;
        is_dead = false;
    }

    Marine::Marine(int x, int y) {
        coord_x = x;
        coord_y = y;
        hp = 40;
        damage = 6;
        is_dead = false;
    }

    int Marine:: attack() {
        return damage;
    }

    void Marine::be_attacked(int damage_earn) {
        hp -= damage_earn;
        if (hp <= 0) {
            is_dead = true;
        }
    }

    void Marine::move(int x, int y) {
        coord_x = x;
        coord_y = y;
    }

    void Marine::show_status() {
        cout << "Marine " << endl;
        cout << "Location: " << "(" << coord_x << ", " << coord_y << ")" << endl;
        cout << "HP: " << hp << endl;
    }




int main(){
    Marine marine1(2,3);
    Marine marine2(3,4);

    marine1.show_status();
    marine2.show_status();

    cout << "Marine 1 attacks marine 2! " << endl;
    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();
    return 0;
}