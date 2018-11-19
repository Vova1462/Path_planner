#include "dstar_lite.h"
namespace DstarLite_planner{
    
    void DstarLite_planner::ResizeVec(std::vector<std::vector<double> > mass, int rows, int columns){
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < columns; j++)
                mass[i][j] = std::numeric_limits<double>::infinity();
    }

    void DstarLite_planner::initialize(std::vector<std::vector<double> > map, std::vector<int> start_position, std::vector<int> goal_position){
        if (map.size() > 0){
            DstarLite_planner::ResizeVec(rhs, map.size(), map[0].size());
            DstarLite_planner::ResizeVec(g, map.size(), map[0].size());
            rhs[goal_position[0]][goal_position[1]] = 0;
            
        }
        else
            std::cout << "Map error, can\' read" << std::endl;
        

        

    }
}