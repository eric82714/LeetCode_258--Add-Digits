int len(int num){
    int tmp = 0, len = 1;
    while(tmp != num){
        tmp = num % (int)pow(10, len);
        len ++;
    }
    return len-1;
}

int addDigits(int num){
    while(num > 9){
        int tmp = 0;
        int n = len(num);
        char tmp2[100];
        sprintf(tmp2, "%d", num);
        for(int i = 0; i < n; i++){
            tmp += (tmp2[i] - '0');
        }
        num = tmp;
    }
    return num;
}
