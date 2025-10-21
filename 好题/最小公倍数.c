// 给你一个正整数 n ，返回 2 和 n 的最小公倍数（正整数）。

int smallestEvenMultiple(int n) {
    int gys(int a,int b)
    {
        if (b==0)
           return a;
        else
           return gys(b,a%b);
    }
    int k,o;
    if(n<=2)k=gys(2,n);
    else k=gys(n,2);
    if(n%2==0||2%n==0)
        o = n>2?n:2;
    else
        o = 2*n/k/k;
return o;
}