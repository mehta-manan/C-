int main()
{
    //int to double implicit
    int a = 5;
    double b = a;

    // double to int implicit
    double c = 5.25;
    int d = c;

    // double to int explicit - safe style cast
    double e = 5.56;
    int f = (int)e + 5.67;
}