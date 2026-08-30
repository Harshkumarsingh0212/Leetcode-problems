class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if((source[0]+source[1])%2 !=(target[0]+target[1])%2) return -1;
        if(abs(source[1]-target[1])-abs(source[0]-target[0])==0) return 1;
        else return 2;
    }
};