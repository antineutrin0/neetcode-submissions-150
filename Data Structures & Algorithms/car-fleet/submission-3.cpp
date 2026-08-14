class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed){
        
        vector<pair<int, double>> cars;
        
        for(int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.rbegin(), cars.rend());

        int cnt = 0;
        double fleetTime = 0;

        for(int i = 0; i < cars.size(); i++) {
            
            double curtime = cars[i].second;

            if(curtime > fleetTime) {
                cnt++;
                fleetTime = curtime;
            }
        }

        return cnt;
    }
};