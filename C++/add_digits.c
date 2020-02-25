class Solution {
public:
    int addDigits(int num) {   
        while(num > 9){
            int tmp = 0;
            string tmp2 = to_string(num); 
            for(int i = 0; i < tmp2.size(); i++){
                tmp += (tmp2[i] - '0');
            }
            num = tmp;
        }
        return num;
    }
};
