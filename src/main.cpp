#include "dstar_lite.h"

using namespace DstarLite_planner;

int main(){
    DstarLite_planner::DstarLite_planner d_star;
    std::vector<double> map_col(100, 0);
    std::vector< std::vector<double> > map(70, map_col);
    std::vector<int> start_position(2, 0);
    std::vector<int> goal_position(2, 5);
    
    for (int i = 0; i < map.size(); i++){
        for (int j=0; i< map[0].size(); i++){
            std::cout << map[i][j];
        }
        std::cout<< std::endl;
    }

    // d_star.initialize(map, );
    return 0;
}