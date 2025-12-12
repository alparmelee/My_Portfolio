int disclog(int b, int y, int p) {
    int ans = 1;
    for (int i = 0; i < p-1; i++) {
        if (ans == y) return i;
        ans = (ans * b) % p;
    }
}
