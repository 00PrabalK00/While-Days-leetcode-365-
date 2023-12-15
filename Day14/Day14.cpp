/*1436. Destination City*/
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> firstCities;
        for (int i = 0; i < paths.size(); ++i) {
            firstCities.insert(paths[i][0]);
        }
        for (int i = 0; i < paths.size(); ++i) {
            if (firstCities.find(paths[i][1]) == firstCities.end()) {
                return paths[i][1];
            }
        }
        return "";
    }
};
/*
Runtime
Details
10ms
Beats 62.92%of users with C++
Memory
Details
11.07MB
Beats 59.81%of users with C++*/