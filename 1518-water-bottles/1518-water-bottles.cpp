class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        while (numBottles >= numExchange) {
            int d = numBottles / numExchange;
            count = count + d;
            numBottles = d + (numBottles % numExchange);
        }

        return count;
    }
};