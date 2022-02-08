int addDigits(int num){
    while(num%10!=num)
    {
        int t=0;
        while(num)
        {
            t+=num%10;
            num=num/10;
        }
       num = t;
    }
    return num;
}