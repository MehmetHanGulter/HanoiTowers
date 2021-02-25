
#include <iostream>
using namespace std;

class HanoiTower
{
private:
    int numberOfDisc, baseTower, midTower, destinationTower;
public:
    HanoiTower(int numberOfDisc, int baseTower, int midTower, int destinationTower)
    {
        this->numberOfDisc = numberOfDisc;
        this->baseTower = baseTower;
        this->midTower = midTower;
        this->destinationTower = destinationTower;
    }
    void solveHanoiTower(int numberOfDisc, int baseTower, int midTower, int destinationTower)
    {

        if (numberOfDisc>0) 
        {
            solveHanoiTower(numberOfDisc - 1, baseTower, destinationTower, midTower);
            cout << "MOVE DISK FROM " << baseTower << " to " << destinationTower << '\n';
            solveHanoiTower(numberOfDisc - 1, midTower, baseTower, destinationTower);
            
        }   
    }
};

int main()
{
    HanoiTower hanoi3(3, 1, 2, 3);
    hanoi3.solveHanoiTower(3, 1, 2, 3);
}

