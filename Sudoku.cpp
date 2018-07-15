#include<iostream>
#include<time.h>
#include<ctime>
#include<cstdlib>
#include<string>
//11
using namespace std;
bool guidence(long int a[][9]) {
	
	int checks[10] = { 1,1,2,3,4,5,6

	for (int i = 0; i<9; i++) {
		for (int j = 0; j<9; j++) {
			for (int o = 0; o<10; o++) {
				if (o == 0) {
					
					checks[o] = 10;
					check1[o] = 10;
					checkr[o] = 10;
				}
				else {
					check1[o] = o;
					checks[o] = o;
					checkr[o] = o;
				}
			}



			
					for (int y = 0; y<3; y++)
						if (a[x][y] != 0)
							check1[a[x][y]] = 10;

			if (j<3 && i>5)+)
					for (int y = 6; y<9; y++)
						if (a[x][y] != 0)
							check1[a[x][y]] = 10;

			if (j>5 && i>2 && i<6)
				for (int x = 3; x<6; x++)
					for (int y = 6; y<9; y++)
						if (a[x][y] != 0)
							check1[a[x][y]] = 10;

			if (j>5 && i>5)


			if (p == 1 && s == 1 && r == 1 && a[i][j] == 0) {
				cout << "\nguidence:you can add num

	if (v == false)
		cout << "no guidence is possible";
	return 1;
}

	
	}
	//ta inja check kardane soton va radif ha tamam shod hala mirim vase moraba ha
	//dar fore payin baz neshani mikonim
	for (int k = 0; k < 10; k++)
		check1[k] = k;

	for (int i = 0; i <= 6; i = i + 3) {
		for (int j = 0; j <= 6; j = j + 3) {
			for (int x = i; x<i + 3; x++) {
				for (int y = j; y<j + 3; y++) {
					check1[a[x][y]] = 0;
				}
			}
			for (int k = 0; k < 10; k++)
				if (check1[k] != 0)
					return false;

		6, 7, 2, 1, 9, 5, 3, 4, 8 ,
		1, 9, 8, 3, 4, 2, 5, 6, 7 ,
		8, 5, 9, 7, 6, 1, 4, 2, 3 ,
		4, 2, 6, 8, 5, 3, 7, 9, 1 ,
		7, 1, 3, 9, 2, 4, 8, 5, 6 ,
		9, 6, 1, 5, 3, 7, 2, 8, 4 ,
		2, 8, 7, 4, 1, 9, 6, 3, 5 ,
		3, 4, 5, 2, 8, 6, 1, 7, 9 }, k[9][9];
	bool c, komaki = false;
	//hala mikhahim pak konim
	unsigned seed = time(NULL);
	srand(seed);
	cout << "chand adad mikhahid hazf konid?\n";
	cin >> n;
	for (int i = 0; i<n; i++) {
		else i--;
		cout << rr << rs;
	}
	for (int i = 0; i<9; i++)
		for (int j = 0; j<9; j++)
		cout << "\ndo you want guidence?\n";
		cin >> answer;
		if (answer == "yes")
			c = guidence(a);

				cout << "enter the position you want to erase\n";
				cin >> x >> y;
				if (k[x][y] == 0) {
					a[x][y] = 0;
					komaki = true ;
				}
				else cout << " shoma ejaze nadarid in adad ra pak konid chon male jadvale asli ast\n ";
			}
		komaki = false;

	}
	cout << " you won ";

