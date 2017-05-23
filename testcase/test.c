bool check(int a, int N) {
    return ((a < N) && (a >= 0));
}

int main() {
    int N;
    int head;
	int startx;
	int starty;
    int targetx;
	int targety;
	int tail;
	int ok;
	int now;
    int x;
	int y;
    int[] xlist;
	int[] ylist;
    int[][] step;
    int i;
	int j;

    N = getInt();
    head = tail = startx = starty = 0;
    targetx = targety  = N - 1;
    x = y = 0;
    now = ok = 0;
    xlist = new int[N * N];
    for (i = 0; i < N * N; i ++ )
        xlist[i] = 0;
    ylist = new int[N * N];
    for (i = 0; i < N * N; i ++ )
        ylist[i] = 0;
    step = new int[N][];
    for (i = 0; i < N;  i ++ ) {
		step[i] = new int[N];
        for (j = 0; j < N; j ++ )
        step[i][j] = -1;
    }
    xlist[0] = startx;
    ylist[0] = starty;
    step[startx][starty] == 0;
    while (head <= tail)
    {
        now = step[xlist[head]][ylist[head]];
        x = xlist[head] - 1;
        y = ylist[head] - 2;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] - 1;
        y = ylist[head] + 2;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] + 1;
        y = ylist[head] - 2;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] + 1;
        y = ylist[head] + 2;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] - 2;
        y = ylist[head] - 1;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] - 2;
        y = ylist[head] + 1;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] + 2;
        y = ylist[head] - 1;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        x = xlist[head] + 2;
        y = ylist[head] + 1;
        if (check(x, N) && check(y, N) && step[x][y] == -1)
        {
            tail = tail + 1;
            xlist[tail] = x;
            ylist[tail] = y;
            step[x][y] = now + 1;
            if (x == targetx && y == targety) ok = 1;
        }
        if (ok == 1) break;
        head = head + 1;
    }
    if (ok == 1) println(toString(step[targetx][targety]));
    else print("no solution!\n");
    return 0;
}
