//Approach : Math

class Solution {
public:
    string multiply(string num1, string num2) {
        if(!num1.compare("0") || !num2.compare("0"))    return "0";
        int size_1 = num1.size(), size_2 = num2.size();
        string res(size_1 + size_2, '0');
        
        for(int i = size_1 - 1; i >= 0; i--)
            for(int j = size_2 - 1; j >= 0; j--)
            {
                int num = (num1[i] - '0') * (num2[j] - '0') + res[i + j + 1] - '0';
                if(num >= 10)
                    res[i + j] += num / 10;
                res[i + j + 1] = num % 10 + '0';
            }
        size_t found = res.find_first_not_of('0');
        return res.substr(found, res.size() - found);
    }
};