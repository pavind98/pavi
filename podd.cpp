int main()
{
    int n, c;
    cin >> n;
    while (n != 0) {
        c = n % 10;
        if (c % 2 == 1) {
            n = n / 10;
            if (n == 0) {
                cout << " Number has only odd digits";
            }
        }
        else
            cout << " Number doesn't have only odd digits";
        return 0;
    }
}
