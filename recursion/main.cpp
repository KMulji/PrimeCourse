#include <iostream>
#include <vector>
#include <stack>
using std::stack;
using std::vector;
bool solver(vector<vector<int>> &mz, int x, int y, vector<vector<bool>> &visited, int destX, int destY, vector<std::pair<int, int>> &path);
/*
    Problem: Maze Finder
    A rat starts at a position (source) and can only move in 4 directions:
    up
    down
    left
    right
    The goal is to reach the destination.
    First, we generate the corresponding matrix of the maze. White represents the area where the rat can travel and is represented by 1. Grey represents the area where the rat cannot go and is represented by 0.
*/
// 0 is a wall 1 is a space
bool Maze(vector<vector<int>> &mz, int sourceX, int sourceY, int desX, int destY)
{
    vector<vector<bool>> visited(mz.size(), vector<bool>(mz[0].size(), false));
    vector<std::pair<int, int>> st;
    if (solver(mz, sourceX, sourceY, visited, desX, destY, st))
    {
        for (int i = 0; i < st.size(); i++)
        {
            std::cout << st[i].first << "," << st[i].second << std::endl;
        }
        return true;
    }

    return false;
}

bool solver(vector<vector<int>> &mz, int x, int y, vector<vector<bool>> &visited, int destX, int destY, vector<std::pair<int, int>> &path)
{
    // out of bounds
    if (x < 0 || x >= mz.size() || y < 0 || y >= mz[0].size())
    {
        return false;
    }
    // wall
    if (mz[x][y] == 0)
    {
        return false;
    }
    // visited
    if (visited[x][y])
    {
        return false;
    }
    // reached destination
    if (x == destX && y == destY)
    {
        path.push_back({x, y});

        return true;
    }
    visited[x][y] = true;
    // recurse
    // pre
    path.push_back({x, y});
    // recurse
    // up
    if (solver(mz, x - 1, y, visited, destX, destY, path))
    {
        return true;
    }
    // down
    if (solver(mz, x + 1, y, visited, destX, destY, path))
    {
        return true;
    };

    // left
    if (solver(mz, x, y - 1, visited, destX, destY, path))
    {
        return true;
    }

    // right
    if (solver(mz, x, y + 1, visited, destX, destY, path))
    {
        return true;
    };

    // post
    path.pop_back();
    return false;
}

int main()
{
    vector<vector<int>> x{{1, 0, 0, 0},
                          {1, 0, 0, 0},
                          {1, 1, 1, 0},
                          {0, 0, 1, 1}};

    std::cout << Maze(x, 3, 3, 0, 0) << std::endl;
    return 0;
}