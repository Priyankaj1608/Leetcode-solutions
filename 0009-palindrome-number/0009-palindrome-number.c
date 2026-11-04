bool isPalindrome(int x) {
    int num=  x;
    long long rev =0,remainder;
    if(x<0)
    return false;
    while(num > 0){
        remainder = num % 10;
        rev = rev*10+remainder;
        num = num/10;
    }
    return x == rev;
    
    }
