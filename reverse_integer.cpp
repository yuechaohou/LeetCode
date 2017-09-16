class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long int result =0;
        while(temp){
            result = result*10 + temp%10;
            if (result>2147483647) return 0;
            if (result< -2147483647) return 0;
            temp = temp/10;
        }
        return (int)result;
    }
};