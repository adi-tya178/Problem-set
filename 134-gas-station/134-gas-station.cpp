class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0,total_cost=0;
        for(int i=0;i<gas.size();i++)
        {
            total_gas+=gas[i];
            total_cost+=cost[i];
        }
        if(total_gas<total_cost)
        {
            return -1;
        }
        int fuel=0,start=0;
        for(int i=0;i<gas.size();i++)
        {
            if(fuel<0)
            {
                start=i;
                fuel=0;
            }
            
            fuel +=(gas[i]-cost[i]);
        }
        return start;
    }
};