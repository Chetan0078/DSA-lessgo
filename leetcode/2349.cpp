#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
public:
    unordered_map<int, int> indexMap;  
    map<int, set<int>> numberMap;      // we are just inverting indexmap here

    NumberContainers() { }

    void change(int index, int number) {
        if (indexMap.count(index)) { 
            int oldNumber = indexMap[index];  
            numberMap[oldNumber].erase(index);  
            if (numberMap[oldNumber].empty()) {
                numberMap.erase(oldNumber);
            }
        }

        indexMap[index] = number;
        numberMap[number].insert(index);
    }

    int find(int number) {
        if (numberMap.count(number) && !numberMap[number].empty()) {
            return *numberMap[number].begin(); 
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index, number);
 * int param_2 = obj->find(number);
 */
int main(){
    NumberContainers s;
    s.change(3,5);
    s.change(5,5);
    s.change(9,5);
    s.change(2,5);
    cout<<s.find(5);
}