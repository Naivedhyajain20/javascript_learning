class Solution {
public:
    double angleClock(int hour, int minutes) {
        float a = abs((30 * hour) - (5.5 * minutes));
        float b = 360 - a  ;
        return min(a,b);
    }
};