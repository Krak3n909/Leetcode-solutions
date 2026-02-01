1class RideSharingSystem {
2public:
3    vector<int> driver;
4    vector<int> rider;
5    int i =0;
6    RideSharingSystem() {
7        i++;
8    }
9    
10    void addRider(int riderId) {
11        rider.insert(rider.begin(),riderId);
12    }
13    
14    void addDriver(int driverId) {
15        driver.insert(driver.begin(),driverId);
16    }
17    
18    vector<int> matchDriverWithRider() {
19        if(driver.size()<1 || rider.size()<1)
20        {
21            return {-1,-1};
22        }
23        int d = driver[driver.size() -1];
24        int r = rider[rider.size() - 1];
25        driver.pop_back();
26        rider.pop_back();
27        return {d,r};
28    }
29    
30    void cancelRider(int riderId) {
31        std::erase(rider, riderId);
32    }
33};
34
35/**
36 * Your RideSharingSystem object will be instantiated and called as such:
37 * RideSharingSystem* obj = new RideSharingSystem();
38 * obj->addRider(riderId);
39 * obj->addDriver(driverId);
40 * vector<int> param_3 = obj->matchDriverWithRider();
41 * obj->cancelRider(riderId);
42 */