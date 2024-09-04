#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Hall
{
    vector<vector<int>> seats;
    Hall()
    {
        seats = vector<vector<int>>(20, vector<int>(20, 0));
    }

public:
    void printSeats()
    {
        for (auto x : seats)
        {
            for (auto y : x)
            {
                cout << y << " ";
            }
            cout << endl;
        }
    }
    bool reserveSeat(int row, int column)
    {
        row--, column--;
        if (row >= 20 || row < 0 || column >= 20 || column < 0 || seats[row][column] == 1)
        {
            return false;
        }
        seats[row][column] = 1;
        return true;
    }
};