class Solution {
public:
    bool checkDivisibility(int n) {
        int digisum=0;
        int digiprod=1;
        int k=n;
        while(n>0)
        {
            int x=n%10;
            digisum+=x;
            digiprod*=x;
            n/=10;
        }
        if(k%(digisum+digiprod)==0) return true;
        else return false;
    }
};