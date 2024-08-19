#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2;

    cin >> h1 >> m1 >> h2 >> m2;

	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;

	if (t1 >= t2)
		t2 += 24 * 60;

    int xxx = (t2 - t1) / 60;
    int yyy = (t2 - t1) % 60;

	cout << "O JOGO DUROU " << xxx
        << " HORA(S) E " << yyy << " MINUTO(S)" << endl;

    return 0;
}

