class Solution {
public:
    int reverse(int x) {
        int temp=0;
        while(x!=0){
            int d = x%10;
            if(temp<INT_MIN/10 || temp>INT_MAX/10) return 0;
            temp = temp*10 + d;
            x = x/10;
        }
        return temp;
    }
};
