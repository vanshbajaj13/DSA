class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentGas = 0,n = cost.size(),totalGas = 0, totalCost = 0,startingPoint = 0;
        for(int i = 0 ; i < n ; i++){
            totalGas += gas[i];
            totalCost += cost[i];

            currentGas += gas[i] - cost[i];
            if(currentGas < 0){
                currentGas = 0;
                startingPoint = i+1;
            }
        }
        
        return (totalGas < totalCost)?-1:startingPoint;
        
    }
};
