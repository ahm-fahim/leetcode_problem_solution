bool isHappy(int n){
    int arr[800] = {0};
    while(n != 1)
    {
        int i = n;
        n = 0;
        while(i)
        {
            n += (i%10)*(i%10);
            i/=10;
        }
        arr[n]++;
        if (arr[n] == 2)
            return false;
    }
    return true;
}