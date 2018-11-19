#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <limits>

namespace DstarLite_planner{
    class DstarLite_planner{
        public:
        void initialize(std::vector<std::vector<double> > map, std::vector<int> start_position, std::vector<int>goal_position);
        void MakePath();
        
        private:
        double Heuristic(std::vector<int> point_1, std::vector<int> point_2);
        std::vector<double> CalculateKey(std::vector<int> u);
        void ComputeShortestPath();
        void UpdateVertex(std::vector<int> u);
        void ResizeVec(std::vector<std::vector<double> > mas,int width, int height);


        std::vector<std::vector<double> > rhs, g;
        int k;







    };
}