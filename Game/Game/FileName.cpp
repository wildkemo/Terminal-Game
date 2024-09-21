#include <iostream>
#include <conio.h>
using namespace std;

void drawlevel1(int& MAG, int& columnlvl1enemy3, int& rowlvl1enemy3, int& lvl1enemy3health, int& columnlvl1enemy2, int& rowlvl1enemy2, int& lvl1enemy2health, int& bulletdirection, int& singlebullet, int& columnbullet, int& rowbullet, int& vsinglebullet, int& columnlvl1enemy1, int& rowlvl1enemy1, int& lvl1enemy1health, int& rowhero, int& columnhero, int& playerhealth, char screen[240][156]) {

	for (int r = 0; r < 245; r++) {
		for (int c = 0; c < 156; c++) {

			screen[r][c] = ' ';
		}
	}
	int rowground = 239;
	for (int i = 27; i < 156; i++) {
		screen[rowground][i] = 202;
	}
	for (int i = 0; i < 27; i++) {
		screen[rowground][i] = 205;
	}


	for (int i = 28; i < 156; i++) {
		screen[238][i] = 206;
	}
	for (int i = 33; i < 156; i++) {
		screen[237][i] = 206;
	}
	for (int i = 39; i < 156; i++) {
		screen[236][i] = 206;
	}
	for (int i = 45; i < 156; i++) {
		screen[235][i] = 206;
	}
	for (int i = 51; i < 156; i++) {
		screen[234][i] = 203;
	}


	screen[239][27] = 202;

	screen[238][27] = 201;
	screen[238][28] = 203;
	screen[238][29] = 203;
	screen[238][30] = 203;
	screen[238][31] = 203;
	screen[238][32] = 203;
	screen[238][33] = 206;

	screen[237][33] = 201;
	screen[237][34] = 203;
	screen[237][35] = 203;
	screen[237][36] = 203;
	screen[237][37] = 203;
	screen[237][38] = 203;
	screen[237][39] = 206;

	screen[236][39] = 201;
	screen[236][40] = 203;
	screen[236][41] = 203;
	screen[236][42] = 203;
	screen[236][43] = 203;
	screen[236][44] = 203;
	screen[236][45] = 206;

	screen[235][45] = 201;
	screen[235][46] = 203;
	screen[235][47] = 203;
	screen[235][48] = 203;
	screen[235][49] = 203;
	screen[235][50] = 203;
	screen[235][51] = 206;

	screen[234][51] = 201;
	screen[234][52] = 203;
	screen[234][53] = 203;
	screen[234][54] = 203;
	screen[234][55] = 203;
	screen[234][56] = 203;





	//ladder 1
	screen[233][153] = 185;
	screen[233][152] = 205;
	screen[233][151] = 205;
	screen[233][150] = 205;
	screen[233][149] = 205;
	screen[233][148] = 205;
	screen[233][147] = 205;
	screen[233][146] = 205;
	screen[233][145] = 204;



	screen[232][153] = 185;
	screen[232][152] = 205;
	screen[232][151] = 205;
	screen[232][150] = 205;
	screen[232][149] = 205;
	screen[232][148] = 205;
	screen[232][147] = 205;
	screen[232][146] = 205;
	screen[232][145] = 204;



	screen[231][153] = 185;
	screen[231][152] = 205;
	screen[231][151] = 205;
	screen[231][150] = 205;
	screen[231][149] = 205;
	screen[231][148] = 205;
	screen[231][147] = 205;
	screen[231][146] = 205;
	screen[231][145] = 204;



	screen[230][153] = 185;
	screen[230][152] = 205;
	screen[230][151] = 205;
	screen[230][150] = 205;
	screen[230][149] = 205;
	screen[230][148] = 205;
	screen[230][147] = 205;
	screen[230][146] = 205;
	screen[230][145] = 204;

	screen[229][153] = 185;
	screen[229][152] = 205;
	screen[229][151] = 205;
	screen[229][150] = 205;
	screen[229][149] = 205;
	screen[229][148] = 205;
	screen[229][147] = 205;
	screen[229][146] = 205;
	screen[229][145] = 204;

	screen[228][153] = 185;
	screen[228][152] = 205;
	screen[228][151] = 205;
	screen[228][150] = 205;
	screen[228][149] = 205;
	screen[228][148] = 205;
	screen[228][147] = 205;
	screen[228][146] = 205;
	screen[228][145] = 204;

	screen[227][153] = 185;
	screen[227][152] = 205;
	screen[227][151] = 205;
	screen[227][150] = 205;
	screen[227][149] = 205;
	screen[227][148] = 205;
	screen[227][147] = 205;
	screen[227][146] = 205;
	screen[227][145] = 204;

	screen[226][153] = 185;
	screen[226][152] = 205;
	screen[226][151] = 205;
	screen[226][150] = 205;
	screen[226][149] = 205;
	screen[226][148] = 205;
	screen[226][147] = 205;
	screen[226][146] = 205;
	screen[226][145] = 204;

	screen[225][153] = 185;
	screen[225][152] = 205;
	screen[225][151] = 205;
	screen[225][150] = 205;
	screen[225][149] = 205;
	screen[225][148] = 205;
	screen[225][147] = 205;
	screen[225][146] = 205;
	screen[225][145] = 204;

	screen[224][153] = 185;
	screen[224][152] = 205;
	screen[224][151] = 205;
	screen[224][150] = 205;
	screen[224][149] = 205;
	screen[224][148] = 205;
	screen[224][147] = 205;
	screen[224][146] = 205;
	screen[224][145] = 204;

	screen[223][153] = 185;
	screen[223][152] = 205;
	screen[223][151] = 205;
	screen[223][150] = 205;
	screen[223][149] = 205;
	screen[223][148] = 205;
	screen[223][147] = 205;
	screen[223][146] = 205;
	screen[223][145] = 204;

	screen[222][153] = 185;
	screen[222][152] = 205;
	screen[222][151] = 205;
	screen[222][150] = 205;
	screen[222][149] = 205;
	screen[222][148] = 205;
	screen[222][147] = 205;
	screen[222][146] = 205;
	screen[222][145] = 204;

	screen[221][153] = 185;
	screen[221][152] = 205;
	screen[221][151] = 205;
	screen[221][150] = 205;
	screen[221][149] = 205;
	screen[221][148] = 205;
	screen[221][147] = 205;
	screen[221][146] = 205;
	screen[221][145] = 204;

	screen[220][153] = 185;
	screen[220][152] = 205;
	screen[220][151] = 205;
	screen[220][150] = 205;
	screen[220][149] = 205;
	screen[220][148] = 205;
	screen[220][147] = 205;
	screen[220][146] = 205;
	screen[220][145] = 204;

	screen[219][153] = 185;
	screen[219][152] = 205;
	screen[219][151] = 205;
	screen[219][150] = 205;
	screen[219][149] = 205;
	screen[219][148] = 205;
	screen[219][147] = 205;
	screen[219][146] = 205;
	screen[219][145] = 204;

	for (int i = 155; i > 129; i--) {
		screen[219][i] = 205;
	}

	screen[219][129] = 202;

	screen[218][129] = 187;
	screen[218][128] = 203;
	screen[218][127] = 203;
	screen[218][126] = 203;
	screen[218][125] = 203;
	screen[218][124] = 203;
	screen[218][123] = 206;

	screen[217][123] = 187;
	screen[217][122] = 203;
	screen[217][121] = 203;
	screen[217][120] = 203;
	screen[217][119] = 203;
	screen[217][118] = 203;
	screen[217][117] = 206;

	screen[216][117] = 187;
	screen[216][116] = 203;
	screen[216][115] = 203;
	screen[216][114] = 203;
	screen[216][113] = 203;
	screen[216][112] = 203;
	screen[216][111] = 206;

	screen[215][111] = 187;
	screen[215][110] = 203;
	screen[215][109] = 203;
	screen[215][108] = 203;
	screen[215][107] = 203;
	screen[215][106] = 203;
	screen[215][105] = 206;

	screen[214][105] = 187;
	screen[214][104] = 203;
	screen[214][103] = 203;
	screen[214][102] = 203;
	screen[214][101] = 203;
	screen[214][100] = 203;
	screen[214][99] = 203;

	for (int i = 0; i < 129; i++) {
		screen[219][i] = 202;
	}
	for (int i = 0; i < 123; i++) {
		screen[218][i] = 206;
	}
	for (int i = 0; i < 117; i++) {
		screen[217][i] = 206;
	}
	for (int i = 0; i < 111; i++) {
		screen[216][i] = 206;
	}
	for (int i = 0; i < 106; i++) {
		screen[215][i] = 206;
	}
	for (int i = 0; i < 101; i++) {
		screen[214][i] = 203;
	}
	for (int i = 15; i < 156; i++) {
		screen[193][i] = 203;
	}








	if (bulletdirection == 1) {
		if (singlebullet == 1) {
			screen[rowbullet][columnbullet] = '>';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet += 1;
				if (i > columnlvl1enemy1 - 6 && i < columnlvl1enemy1 + 6 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl1enemy1health--;
					break;

				}
			}


			//Enemy 1
			if (lvl1enemy1health > 0) {

				if (columnbullet > columnlvl1enemy1 - 6 && columnbullet < columnlvl1enemy1 + 6 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl1enemy1health--;

				}
			}

			//Enemy 2
			if (lvl1enemy2health > 0) {

				if (columnbullet > columnlvl1enemy2 - 6 && columnbullet < columnlvl1enemy2 + 6 && rowbullet > rowlvl1enemy2 && rowbullet < rowlvl1enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl1enemy2health--;

				}



			}
			////Enemy3
			//if (lvl3enemy3health > 0) {
			//
			//	if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero + 6;
			//		lvl3enemy3health--;
			//
			//	}
			//
			//
			//
			//}
			//
			////Enemy4
			//if (lvl3enemy4health > 0) {
			//
			//	if (columnbullet > columnlvl3enemy4 - 6 && columnbullet < columnlvl3enemy4 + 6 && rowbullet > rowlvl3enemy4 && rowbullet < rowlvl3enemy4 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero + 6;
			//		lvl3enemy4health--;
			//
			//	}
			//
			//
			//
			//}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}



	}

	if (bulletdirection == 2) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '<';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet -= 1;
				if (i > columnlvl1enemy1 - 6 && i < columnlvl1enemy1 + 6 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl1enemy1health--;
					break;

				}
				if (i > columnlvl1enemy2 - 6 && i < columnlvl1enemy2 + 6 && rowbullet > rowlvl1enemy2 && rowbullet < rowlvl1enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl1enemy2health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl1enemy1health > 0) {

				if (columnbullet > columnlvl1enemy1 - 6 && columnbullet < columnlvl1enemy1 + 6 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl1enemy1health--;

				}
			}
			//Enemy 2
			if (lvl1enemy2health > 0) {

				if (columnbullet > columnlvl1enemy2 - 6 && columnbullet < columnlvl1enemy2 + 6 && rowbullet > rowlvl1enemy2 && rowbullet < rowlvl1enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl1enemy2health--;

				}



			}
			////Enemy3
			//if (lvl3enemy3health > 0) {
			//
			//	if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero + 6;
			//		lvl3enemy3health--;
			//
			//	}
			//
			//
			//
			//}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}

		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}

	}



	if (bulletdirection == 3) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '^';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				rowbullet -= 1;
				if (i > columnlvl1enemy1 - 18 && i < columnlvl1enemy1 + 18 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl1enemy1health--;
					break;

				}
				if (i > columnlvl1enemy3 - 6 && i < columnlvl1enemy3 + 6 && rowbullet > rowlvl1enemy3 && rowbullet < rowlvl1enemy3 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl1enemy3health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			//if (lvl1enemy1health > 0) {
			//
			//	if (columnbullet > columnlvl1enemy1 - 6 && columnbullet < columnlvl1enemy1 + 6 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero;
			//		lvl1enemy1health--;
			//
			//	}
			//}




			////Enemy 3
			if (lvl1enemy3health > 0) {

				if (columnbullet > columnlvl1enemy3 - 6 && columnbullet < columnlvl1enemy3 + 6 && rowbullet > rowlvl1enemy3 && rowbullet < rowlvl1enemy3 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl1enemy3health--;

				}



			}


		}

		if (vsinglebullet > 20) {
			vsinglebullet = 0;
			singlebullet = 0;
		}



	}






	screen[rowhero - 26][1] = 'L';
	screen[rowhero - 26][2] = 'e';
	screen[rowhero - 26][3] = 'v';
	screen[rowhero - 26][4] = 'e';
	screen[rowhero - 26][5] = 'L';
	screen[rowhero - 26][6] = '1';

	screen[rowhero - 26][9] = 'P';
	screen[rowhero - 26][10] = 'l';
	screen[rowhero - 26][11] = 'a';
	screen[rowhero - 26][12] = 'y';
	screen[rowhero - 26][13] = 'e';
	screen[rowhero - 26][14] = 'r';
	screen[rowhero - 26][15] = ':';


	for (int i = 0; i < playerhealth; i++) {
		screen[rowhero - 26][16 + i] = 178;

	}

	screen[rowhero - 26][22] = 'E';
	screen[rowhero - 26][23] = 'n';
	screen[rowhero - 26][24] = 'e';
	screen[rowhero - 26][25] = 'm';
	screen[rowhero - 26][26] = 'y';
	screen[rowhero - 26][27] = '1';
	screen[rowhero - 26][28] = ':';

	for (int i = 0; i < lvl1enemy1health; i++) {
		screen[rowhero - 26][29 + i] = 176;

	}



	screen[rowhero - 26][35] = 'E';
	screen[rowhero - 26][36] = 'n';
	screen[rowhero - 26][37] = 'e';
	screen[rowhero - 26][38] = 'm';
	screen[rowhero - 26][39] = 'y';
	screen[rowhero - 26][40] = '2';
	screen[rowhero - 26][41] = ':';

	for (int i = 0; i < lvl1enemy2health; i++) {
		screen[rowhero - 26][42 + i] = 176;

	}



	screen[rowhero - 26][48] = 'E';
	screen[rowhero - 26][49] = 'n';
	screen[rowhero - 26][50] = 'e';
	screen[rowhero - 26][51] = 'm';
	screen[rowhero - 26][52] = 'y';
	screen[rowhero - 26][53] = '3';
	screen[rowhero - 26][54] = ':';

	for (int i = 0; i < lvl1enemy3health; i++) {
		screen[rowhero - 26][55 + i] = 176;

	}

	screen[rowhero - 26][61] = 'M';
	screen[rowhero - 26][62] = 'A';
	screen[rowhero - 26][63] = 'G';
	screen[rowhero - 26][64] = ':';

	for (int i = 0; i < MAG; i++) {
		screen[rowhero - 26][65 + i] = 175;

	}







	//int rowground = 39;
	//int columnground = 0;
	//for (int i = 0; i < 156; i++) {
	//	screen[rowground][columnground] = '=';
	//	columnground++;
	//}
	//
	//int rowselm1 = 35;
	//int columnselm1 = 30;
	//for (int i = 0; i < 15; i++) {
	//	screen[rowselm1][columnselm1] = '=';
	//	columnselm1++;
	//}
	//int rowselm2 = 32;
	//int columnselm2 = 57;
	//for (int i = 0; i < 15; i++) {
	//	screen[rowselm2][columnselm2] = '=';
	//	columnselm2++;
	//}
	//
	//
	//for (int i = 33; i < 39; i++) {
	//	screen[i][71] = '+';
	//}
	//
	//
	//
	//int rowselm3 = 29;
	//int columnselm3 = 85;
	//for (int i = 0; i < 15; i++) {
	//	screen[rowselm3][columnselm3] = '=';
	//	columnselm3++;
	//}
	//
	//for (int i = 28; i > 8; i--) {
	//	screen[i][99] = '+';
	//}
	//
	//
	//
	//int rowselm4 = 22;
	//int columnselm4 = 50;
	//for (int i = 0; i < 15; i++) {
	//	screen[rowselm4][columnselm4] = '=';
	//	columnselm4++;
	//}
	//int rowselm5 = 20;
	//int columnselm5 = 38;
	//for (int i = 0; i < 18; i++) {
	//	screen[rowselm5][columnselm5] = '=';
	//	columnselm5--;
	//}
	//
	//screen[20][20] = '=';
	//
	//for (int i = 19; i >= 0; i--) {
	//	screen[i][20] = '+';
	//
	//}
	//
	//
	//int rowselm = 17;
	//for (int i = 0; i < 10; i++) {
	//	screen[rowselm][30] = 204;
	//	screen[rowselm][30] = 185;
	//	screen[rowselm][30] = 205;
	//	screen[rowselm][30] = 205;
	//	rowselm--;
	//}
	//int rowsellm = 18;
	//for (int i = 0; i < 10; i++) {
	//	screen[rowsellm - 1][35] = 204;
	//	screen[rowsellm - 1][35] = 205;
	//	screen[rowsellm - 1][35] = 205;
	//	screen[rowsellm - 1][35] = 185;
	//	rowsellm--;
	//}
	//
	//int rselm = 17;
	//int cselm = 31;
	//for (int i = 0; i < 10; i++) {
	//	screen[rselm][cselm + 1] = 205;
	//	rselm--;
	//}
	//
	//int rselm3 = 17;
	//int cselm3 = 33;
	//for (int i = 0; i < 10; i++) {
	//	screen[rselm3][cselm3 + 1] = 205;
	//	rselm3--;
	//
	//}
	//
	//int rselm4 = 17;
	//int cselm4 = 32;
	//for (int i = 0; i < 10; i++) {
	//	screen[rselm4][cselm4 + 1] = 205;
	//	rselm4--;
	//
	//}
	//
	//int rselm5 = 17;
	//int cselm5 = 30;
	//for (int i = 0; i < 10; i++) {
	//	screen[rselm5][cselm5 + 1] = 205;
	//	rselm5--;
	//}
	//
	//
	//int c = 37;
	//for (int i = 0; i < 120; i++) {
	//	screen[9][c] = '=';
	//	c++;
	//}
	//
	//int rowdoor = 9;
	//int columndoor = 138;
	//screen[rowdoor][columndoor] = '=';
	//screen[rowdoor][columndoor + 10] = '=';
	//for (int i = 0; i < 6; i++) {
	//	screen[rowdoor - 1][columndoor] = 186;
	//	screen[rowdoor - 1][columndoor + 10] = 186;
	//	rowdoor--;
	//}
	//rowdoor -= 1;
	//screen[rowdoor][columndoor] = 201;
	////screen[rowdoor][columndoor + 10] = 187;
	//for (int i = 0; i < 10; i++) {
	//	screen[rowdoor][columndoor + 1] = 205;
	//	columndoor++;
	//}
	//screen[5][141] = 248;
	//screen[2][148] = 187;
	//
	//int rselm6 = 17;
	//int cselm6 = 29;
	//for (int i = 0; i < 10; i++) {
	//	screen[rselm6][cselm6] = 204;
	//	rselm6--;
	//}
	//
	//
	//screen[0][1] = 'L';
	//screen[0][2] = 'e';
	//screen[0][3] = 'v';
	//screen[0][4] = 'e';
	//screen[0][5] = 'L';
	//screen[0][6] = '1';
	//
	//screen[0][9] = 'P';
	//screen[0][10] = 'l';
	//screen[0][11] = 'a';
	//screen[0][12] = 'y';
	//screen[0][13] = 'e';
	//screen[0][14] = 'r';
	//screen[0][15] = ':';
	//
	//
	//for (int i = 0; i < playerhealth; i++) {
	//	screen[0][16 + i] = 'X';
	//
	//}
	//
	//
	//
	//screen[0][23] = 'P';
	//screen[0][24] = 'l';
	//screen[0][25] = 'a';
	//screen[0][26] = 'y';
	//screen[0][27] = 'e';
	//screen[0][28] = 'r';
	//screen[0][29] = ':';
	//
	//
	//for (int i = 0; i < lvl1enemyhealth; i++) {
	//	screen[0][30 + i] = 'X';
	//
	//}
	//
	//
	//if (singlebullet == 1) {
	//
	//	screen[rowbullet][columnbullet] = '-';
	//	for (int i = 0; i < 6; i++) {
	//		vsinglebullet += 1;
	//		columnbullet += 1;
	//		if (i > columnlvl1enemy - 6 && i < columnlvl1enemy + 6 && rowbullet > rowlvl1enemy && rowbullet < rowlvl1enemy + 7) {
	//			vsinglebullet = 0;
	//			singlebullet = 0;
	//			columnbullet = columnhero + 6;
	//			lvl1enemyhealth--;
	//			break;
	//
	//		}
	//	}
	//	//Enemy1
	//	if (lvl1enemyhealth > 0) {
	//
	//		if (columnbullet > columnlvl1enemy - 6 && columnbullet < columnlvl1enemy + 6 && rowbullet > rowlvl1enemy && rowbullet < rowlvl1enemy + 7) {
	//			vsinglebullet = 0;
	//			singlebullet = 0;
	//			columnbullet = columnhero + 6;
	//			lvl1enemyhealth--;
	//
	//		}
	//	}
	//
	//
	//
	//}
	//
	//if (vsinglebullet > 100) {
	//	vsinglebullet = 0;
	//	singlebullet = 0;
	//}
	//
	//
	//
	//
	//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
	//	playerhealth = 0;
	//}


}

void drawlevel2(int& MAG, int& bulletdirection, int& rowlvl2enemy2, int& columnlvl2enemy2, int& lvl2enemy2health, int& rowbullet, int& columnbullet, int& lvl2enemy1health, int& rowlvl2enemy1, int& columnlvl2enemy1, int& vsinglebullet, int& singlebullet, char screen[][156], int rowhero, int columnhero, int& scrollcolumn, int& columns, int& playerhealth) {

	for (int i = 0; i < 245; i++) {
		for (int j = 0; j < 156; j++) {
			screen[i][j] = ' ';
		}
	}


	int rowground = 239;
	for (int i = 0; i < 156; i++) {
		screen[rowground][i] = 203;
		screen[rowground + 1][i] = 202;

	}


	for (int i = 0; i < 141; i++) {
		screen[189][i] = 202;
		screen[188][i] = 203;

	}




	//screen[rowlvl2laser][20] = 219;
	//screen[rowlvl2laser - 1][20] = 219;
	//screen[rowlvl2laser][21] = 223;
	//screen[rowlvl2laser][19] = 223;
	//screen[rowlvl2laser - 1][22] = 219;
	//screen[rowlvl2laser - 1][18] = 219;
	//screen[rowlvl2laser - 2][23] = 220;
	//screen[rowlvl2laser - 2][17] = 220;
	//screen[rowlvl2laser + 1][20] = 254;








	for (int i = 75; i >= 0; i--) {
		screen[188][i] = 206;
	}
	for (int i = 70; i >= 0; i--) {
		screen[187][i] = 206;
	}
	for (int i = 65; i >= 0; i--) {
		screen[186][i] = 206;
	}
	for (int i = 60; i >= 0; i--) {
		screen[185][i] = 206;
	}
	for (int i = 55; i >= 0; i--) {
		screen[184][i] = 206;
	}
	for (int i = 50; i >= 0; i--) {
		screen[183][i] = 206;
	}
	for (int i = 45; i >= 0; i--) {
		screen[182][i] = 206;
	}
	for (int i = 39; i >= 0; i--) {
		screen[181][i] = 203;
	}



	for (int i = 45; i < 156; i++) {
		screen[169][i] = 202;
		screen[168][i] = 203;

	}

	for (int i = 0; i < 19; i++) {
		screen[174][i] = 202;
		screen[173][i] = 203;

	}

	if (rowhero < 158) {
		for (int i = 0; i < 45; i++) {
			screen[169][i] = 202;
			screen[168][i] = 203;

		}
	}

	if (rowhero + 11 == 173) {
		playerhealth = 5;
		if (MAG < 15) {
			MAG += 1;
		}
	}

	if (rowhero > 158) {

		screen[166][2] = 'H';
		screen[167][2] = 'E';
		screen[168][2] = 'A';
		screen[169][2] = 'L';
		screen[170][2] = 'T';
		screen[171][2] = 'H';

		screen[164][1] = '[';
		screen[164][2] = '+';
		screen[164][3] = ']';
	}





	screen[188][75] = 206;

	screen[187][75] = 187;
	screen[187][74] = 203;
	screen[187][73] = 203;
	screen[187][72] = 203;
	screen[187][71] = 203;
	screen[187][70] = 203;
	screen[187][69] = 206;

	//screen[188][69] = 202;

	screen[186][69] = 187;
	screen[186][68] = 203;
	screen[186][67] = 203;
	screen[186][66] = 203;
	screen[186][65] = 203;
	screen[186][64] = 203;
	screen[186][63] = 206;

	screen[185][63] = 187;
	screen[185][62] = 203;
	screen[185][61] = 203;
	screen[185][60] = 203;
	screen[185][59] = 203;
	screen[185][58] = 203;
	screen[185][57] = 206;

	screen[184][57] = 187;
	screen[184][56] = 203;
	screen[184][55] = 203;
	screen[184][54] = 203;
	screen[184][53] = 203;
	screen[184][52] = 203;
	screen[184][51] = 206;

	screen[183][51] = 187;
	screen[183][50] = 203;
	screen[183][49] = 203;
	screen[183][48] = 203;
	screen[183][47] = 203;
	screen[183][46] = 203;
	screen[183][45] = 206;

	screen[182][45] = 187;
	screen[182][44] = 203;
	screen[182][43] = 203;
	screen[182][42] = 203;
	screen[182][41] = 203;
	screen[182][40] = 203;
	screen[182][39] = 206;

	screen[181][39] = 187;
	screen[181][38] = 203;
	screen[181][37] = 203;
	screen[181][36] = 203;
	screen[181][35] = 203;
	screen[181][34] = 203;
	screen[181][33] = 203;

	screen[rowhero - 26][1] = 'L';
	screen[rowhero - 26][2] = 'e';
	screen[rowhero - 26][3] = 'v';
	screen[rowhero - 26][4] = 'e';
	screen[rowhero - 26][5] = 'L';
	screen[rowhero - 26][6] = '2';

	screen[rowhero - 26][9] = 'P';
	screen[rowhero - 26][10] = 'l';
	screen[rowhero - 26][11] = 'a';
	screen[rowhero - 26][12] = 'y';
	screen[rowhero - 26][13] = 'e';
	screen[rowhero - 26][14] = 'r';
	screen[rowhero - 26][15] = ':';


	for (int i = 0; i < playerhealth; i++) {
		screen[rowhero - 26][16 + i] = 178;

	}

	screen[rowhero - 26][22] = 'E';
	screen[rowhero - 26][23] = 'n';
	screen[rowhero - 26][24] = 'e';
	screen[rowhero - 26][25] = 'm';
	screen[rowhero - 26][26] = 'y';
	screen[rowhero - 26][27] = '1';
	screen[rowhero - 26][28] = ':';

	for (int i = 0; i < lvl2enemy1health; i++) {
		screen[rowhero - 26][29 + i] = 176;

	}



	screen[rowhero - 26][35] = 'E';
	screen[rowhero - 26][36] = 'n';
	screen[rowhero - 26][37] = 'e';
	screen[rowhero - 26][38] = 'm';
	screen[rowhero - 26][39] = 'y';
	screen[rowhero - 26][40] = '2';
	screen[rowhero - 26][41] = ':';

	for (int i = 0; i < lvl2enemy2health; i++) {
		screen[rowhero - 26][42 + i] = 176;

	}


	screen[rowhero - 26][61] = 'M';
	screen[rowhero - 26][62] = 'A';
	screen[rowhero - 26][63] = 'G';
	screen[rowhero - 26][64] = ':';

	for (int i = 0; i < MAG; i++) {
		screen[rowhero - 26][65 + i] = 175;

	}



	if (lvl2enemy2health == 0) {
		for (int i = 0; i < 15; i++) {
			screen[162][i] = 205;

		}

		for (int i = 35; i < 50; i++) {
			screen[155][i] = 205;

		}

		for (int i = 70; i < 85; i++) {
			screen[148][i] = 205;

		}
		for (int i = 105; i < 120; i++) {
			screen[141][i] = 205;

		}
		for (int i = 140; i < 155; i++) {
			screen[134][i] = 205;

		}





		for (int i = 105; i < 120; i++) {
			screen[127][i] = 205;

		}
		for (int i = 70; i < 85; i++) {
			screen[120][i] = 205;

		}
		for (int i = 35; i < 50; i++) {
			screen[113][i] = 205;

		}

		screen[100][79] = 185;
		screen[100][78] = 205;
		screen[100][77] = 205;
		screen[100][76] = 205;
		screen[100][75] = 205;
		screen[100][74] = 205;
		screen[100][73] = 205;
		screen[100][72] = 205;
		screen[100][71] = 204;



		screen[99][79] = 185;
		screen[99][78] = 205;
		screen[99][77] = 205;
		screen[99][76] = 205;
		screen[99][75] = 205;
		screen[99][74] = 205;
		screen[99][73] = 205;
		screen[99][72] = 205;
		screen[99][71] = 204;



		screen[98][79] = 185;
		screen[98][78] = 205;
		screen[98][77] = 205;
		screen[98][76] = 205;
		screen[98][75] = 205;
		screen[98][74] = 205;
		screen[98][73] = 205;
		screen[98][72] = 205;
		screen[98][71] = 204;



		screen[97][79] = 185;
		screen[97][78] = 205;
		screen[97][77] = 205;
		screen[97][76] = 205;
		screen[97][75] = 205;
		screen[97][74] = 205;
		screen[97][73] = 205;
		screen[97][72] = 205;
		screen[97][71] = 204;

		screen[96][79] = 185;
		screen[96][78] = 205;
		screen[96][77] = 205;
		screen[96][76] = 205;
		screen[96][75] = 205;
		screen[96][74] = 205;
		screen[96][73] = 205;
		screen[96][72] = 205;
		screen[96][71] = 204;

		screen[95][79] = 185;
		screen[95][78] = 205;
		screen[95][77] = 205;
		screen[95][76] = 205;
		screen[95][75] = 205;
		screen[95][74] = 205;
		screen[95][73] = 205;
		screen[95][72] = 205;
		screen[95][71] = 204;

		screen[94][79] = 185;
		screen[94][78] = 205;
		screen[94][77] = 205;
		screen[94][76] = 205;
		screen[94][75] = 205;
		screen[94][74] = 205;
		screen[94][73] = 205;
		screen[94][72] = 205;
		screen[94][71] = 204;

		screen[93][79] = 185;
		screen[93][78] = 205;
		screen[93][77] = 205;
		screen[93][76] = 205;
		screen[93][75] = 205;
		screen[93][74] = 205;
		screen[93][73] = 205;
		screen[93][72] = 205;
		screen[93][71] = 204;

		screen[92][79] = 185;
		screen[92][78] = 205;
		screen[92][77] = 205;
		screen[92][76] = 205;
		screen[92][75] = 205;
		screen[92][74] = 205;
		screen[92][73] = 205;
		screen[92][72] = 205;
		screen[92][71] = 204;

		screen[91][79] = 185;
		screen[91][78] = 205;
		screen[91][77] = 205;
		screen[91][76] = 205;
		screen[91][75] = 205;
		screen[91][74] = 205;
		screen[91][73] = 205;
		screen[91][72] = 205;
		screen[91][71] = 204;

		screen[90][79] = 185;
		screen[90][78] = 205;
		screen[90][77] = 205;
		screen[90][76] = 205;
		screen[90][75] = 205;
		screen[90][74] = 205;
		screen[90][73] = 205;
		screen[90][72] = 205;
		screen[90][71] = 204;

		screen[89][79] = 185;
		screen[89][78] = 205;
		screen[89][77] = 205;
		screen[89][76] = 205;
		screen[89][75] = 205;
		screen[89][74] = 205;
		screen[89][73] = 205;
		screen[89][72] = 205;
		screen[89][71] = 204;

		screen[88][79] = 185;
		screen[88][78] = 205;
		screen[88][77] = 205;
		screen[88][76] = 205;
		screen[88][75] = 205;
		screen[88][74] = 205;
		screen[88][73] = 205;
		screen[88][72] = 205;
		screen[88][71] = 204;

		screen[87][79] = 185;
		screen[87][78] = 205;
		screen[87][77] = 205;
		screen[87][76] = 205;
		screen[87][75] = 205;
		screen[87][74] = 205;
		screen[87][73] = 205;
		screen[87][72] = 205;
		screen[87][71] = 204;

		screen[86][79] = 185;
		screen[86][78] = 205;
		screen[86][77] = 205;
		screen[86][76] = 205;
		screen[86][75] = 205;
		screen[86][74] = 205;
		screen[86][73] = 205;
		screen[86][72] = 205;
		screen[86][71] = 204;

		screen[85][79] = 185;
		screen[85][78] = 205;
		screen[85][77] = 205;
		screen[85][76] = 205;
		screen[85][75] = 205;
		screen[85][74] = 205;
		screen[85][73] = 205;
		screen[85][72] = 205;
		screen[85][71] = 204;

		screen[84][79] = 185;
		screen[84][78] = 205;
		screen[84][77] = 205;
		screen[84][76] = 205;
		screen[84][75] = 205;
		screen[84][74] = 205;
		screen[84][73] = 205;
		screen[84][72] = 205;
		screen[84][71] = 204;

		screen[83][79] = 185;
		screen[83][78] = 205;
		screen[83][77] = 205;
		screen[83][76] = 205;
		screen[83][75] = 205;
		screen[83][74] = 205;
		screen[83][73] = 205;
		screen[83][72] = 205;
		screen[83][71] = 204;

		screen[82][79] = 185;
		screen[82][78] = 205;
		screen[82][77] = 205;
		screen[82][76] = 205;
		screen[82][75] = 205;
		screen[82][74] = 205;
		screen[82][73] = 205;
		screen[82][72] = 205;
		screen[82][71] = 204;

		screen[81][79] = 185;
		screen[81][78] = 205;
		screen[81][77] = 205;
		screen[81][76] = 205;
		screen[81][75] = 205;
		screen[81][74] = 205;
		screen[81][73] = 205;
		screen[81][72] = 205;
		screen[81][71] = 204;

		screen[80][79] = 185;
		screen[80][78] = 205;
		screen[80][77] = 205;
		screen[80][76] = 205;
		screen[80][75] = 205;
		screen[80][74] = 205;
		screen[80][73] = 205;
		screen[80][72] = 205;
		screen[80][71] = 204;

		screen[79][79] = 185;
		screen[79][78] = 205;
		screen[79][77] = 205;
		screen[79][76] = 205;
		screen[79][75] = 205;
		screen[79][74] = 205;
		screen[79][73] = 205;
		screen[79][72] = 205;
		screen[79][71] = 204;

	}









	if (bulletdirection == 1) {
		if (singlebullet == 1) {
			screen[rowbullet][columnbullet] = '>';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet += 1;
				if (i > columnlvl2enemy1 - 6 && i < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl2enemy1health--;
					break;

				}
			}


			//Enemy 1
			if (lvl2enemy1health > 0) {

				if (columnbullet > columnlvl2enemy1 - 6 && columnbullet < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl2enemy1health--;

				}
			}

			//Enemy 2
			if (lvl2enemy2health > 0) {

				if (columnbullet > columnlvl2enemy2 - 6 && columnbullet < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl2enemy2health--;
					//if (columnlvl2enemy2 > columnhero && columnlvl2enemy2 <= columnhero + 25 ) {
					//	lvl2enemy2health += 1;
					//}
					lvl2enemy2health += 1;

				}



			}
			////Enemy3
			//if (lvl3enemy3health > 0) {
			//
			//	if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero + 6;
			//		lvl3enemy3health--;
			//
			//	}
			//
			//
			//
			//}
			//
			////Enemy4
			//if (lvl3enemy4health > 0) {
			//
			//	if (columnbullet > columnlvl3enemy4 - 6 && columnbullet < columnlvl3enemy4 + 6 && rowbullet > rowlvl3enemy4 && rowbullet < rowlvl3enemy4 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero + 6;
			//		lvl3enemy4health--;
			//
			//	}
			//
			//
			//
			//}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}



	}

	if (bulletdirection == 2) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '<';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet -= 1;
				if (i > columnlvl2enemy1 - 6 && i < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl2enemy1health--;
					break;

				}
				if (i > columnlvl2enemy2 - 6 && i < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl2enemy2health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl2enemy1health > 0) {

				if (columnbullet > columnlvl2enemy1 - 6 && columnbullet < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl2enemy1health--;

				}
			}
			//Enemy 2
			if (lvl2enemy2health > 0) {

				if (columnbullet > columnlvl2enemy2 - 6 && columnbullet < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl2enemy2health--;
					if (columnlvl2enemy2 < columnhero && columnlvl2enemy2 > columnhero - 25) {
						lvl2enemy2health += 1;
					}

				}



			}
			////Enemy3
			//if (lvl3enemy3health > 0) {
			//
			//	if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero + 6;
			//		lvl3enemy3health--;
			//
			//	}
			//
			//
			//
			//}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}

		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}

	}



	if (bulletdirection == 3) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '^';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				rowbullet -= 1;
				if (i > columnlvl2enemy1 - 18 && i < columnlvl2enemy1 + 18 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl2enemy1health--;
					break;

				}
				if (i > columnlvl2enemy2 - 6 && i < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl2enemy2health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			//if (lvl1enemy1health > 0) {
			//
			//	if (columnbullet > columnlvl1enemy1 - 6 && columnbullet < columnlvl1enemy1 + 6 && rowbullet > rowlvl1enemy1 && rowbullet < rowlvl1enemy1 + 7) {
			//		vsinglebullet = 0;
			//		singlebullet = 0;
			//		columnbullet = columnhero;
			//		lvl1enemy1health--;
			//
			//	}
			//}




			////Enemy 2
			if (lvl2enemy2health > 0) {

				if (columnbullet > columnlvl2enemy2 - 6 && columnbullet < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 9) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl2enemy2health--;

				}



			}


		}

		if (vsinglebullet > 20) {
			vsinglebullet = 0;
			singlebullet = 0;
		}



	}




	//int columnhero1 = columnhero - 9;
	//for (int r = 0; r < 40; r++) {
	//	for (int c = 0; c < 300; c++) {
	//
	//		screen[r][c] = ' ';
	//	}
	//}
	//
	//int rowground = 39;
	//int columnground = 0;
	//for (int i = 0; i < 100; i++) {
	//	screen[rowground][columnground] = '=';
	//	columnground++;
	//}
	//
	//int rowground2 = 12;
	//int columnground2 = 70;
	//for (int i = 0; i < 110; i++) {
	//	screen[rowground2][columnground2] = '=';
	//	columnground2++;
	//}
	//
	//int columnground3 = 170;
	//for (int i = 0; i < 120; i++) {
	//	screen[rowground][columnground3] = '=';
	//	columnground3++;
	//}
	//screen[12][195] = '=';
	//screen[12][196] = '=';
	//screen[12][197] = '=';
	//
	//for (int i = 11; i >= 0; i--) {
	//	screen[i][197] = '+';
	//}
	//
	//
	//int rowground4 = 24;
	//int columnground4 = 156;
	//for (int i = 0; i < 115; i++) {
	//	screen[rowground4][columnground4] = '=';
	//	columnground4++;
	//}
	//
	//int lvl2rowselm1 = 35;
	//int lvl2columnselm1 = 30;
	//for (int i = 0; i < 10; i++) {
	//	screen[lvl2rowselm1][lvl2columnselm1] = '=';
	//	lvl2columnselm1++;
	//}
	//
	//int lvl2rowselm2 = 17;
	//int lvl2columnselm2 = 40;
	//for (int i = 0; i < 10; i++) {
	//	screen[lvl2rowselm2][lvl2columnselm2] = '=';
	//	lvl2columnselm2++;
	//}
	//
	//int rowdoor = 30;
	//int columndoor = 170;
	//
	//for (int i = 0; i < 9; i++) {
	//	screen[rowdoor][columndoor] = 186;
	//	rowdoor++;
	//}
	//
	//int rowdoor2 = 30;
	//screen[rowdoor2][columndoor] = 201;
	//
	//for (int i = 0; i < 10; i++) {
	//	screen[rowdoor2][columndoor + 1] = 205;
	//	columndoor++;
	//}
	//
	//screen[rowdoor2][columndoor] = 187;
	//
	//int columndoor2 = 180;
	//for (int i = 0; i < 8; i++) {
	//	screen[rowdoor2 + 1][columndoor2] = 186;
	//	rowdoor2++;
	//}
	//
	//screen[34][178] = 248;
	//
	//screen[24][290] = '=';
	//screen[24][291] = '=';
	//screen[24][292] = '=';
	//
	//for (int i = 23; i >= 0; i--) {
	//	screen[i][292] = '+';
	//}
	//
	//
	//int rowlaser = 23;
	//int columnlaser = 156;
	//for (int i = rowlaser; i >= 13; i--) {
	//	screen[i][columnlaser] = '+';
	//}
	//
	//screen[39][156] = '=';
	//screen[39][161] = '=';
	//screen[39][162] = '=';
	//screen[39][163] = '=';
	//screen[39][164] = '=';
	//screen[39][165] = '=';
	//screen[39][166] = '=';
	//screen[39][167] = '=';
	//screen[39][168] = '=';
	//screen[39][169] = '=';
	//
	//
	//
	//
	//
	//int rowlaser2 = 38;
	//int columnlase2 = 156;
	//for (int i = rowlaser2; i >= 24; i--) {
	//	screen[i][columnlaser] = '+';
	//}
	//
	//
	//screen[0][columnhero1] = 'L';
	//screen[0][columnhero1 + 1] = 'e';
	//screen[0][columnhero1 + 2] = 'v';
	//screen[0][columnhero1 + 3] = 'e';
	//screen[0][columnhero1 + 4] = 'L';
	//screen[0][columnhero1 + 5] = ':';
	//
	//screen[0][columnhero1 + 6] = '2';
	//
	//screen[0][columnhero1 + 9] = 'P';
	//screen[0][columnhero1 + 10] = 'l';
	//screen[0][columnhero1 + 11] = 'a';
	//screen[0][columnhero1 + 12] = 'y';
	//screen[0][columnhero1 + 13] = 'e';
	//screen[0][columnhero1 + 14] = 'r';
	//screen[0][columnhero1 + 15] = ':';
	//
	//for (int i = 0; i < playerhealth; i++) {
	//	screen[0][columnhero1 + 16 + i] = 'X';
	//
	//}
	//
	//screen[0][columnhero1 + 23] = 'e';
	//screen[0][columnhero1 + 24] = 'n';
	//screen[0][columnhero1 + 25] = 'e';
	//screen[0][columnhero1 + 26] = 'm';
	//screen[0][columnhero1 + 27] = 'y';
	//screen[0][columnhero1 + 28] = '1';
	//screen[0][columnhero1 + 29] = ':';
	//
	//
	//for (int i = 0; i < lvl2enemy1health; i++) {
	//	screen[0][columnhero1 + 30 + i] = 'X';
	//
	//}
	//
	//
	//screen[0][columnhero1 + 37] = 'e';
	//screen[0][columnhero1 + 38] = 'n';
	//screen[0][columnhero1 + 39] = 'e';
	//screen[0][columnhero1 + 40] = 'm';
	//screen[0][columnhero1 + 41] = 'y';
	//screen[0][columnhero1 + 42] = '2';
	//screen[0][columnhero1 + 43] = ':';
	//
	//
	//for (int i = 0; i < lvl2enemy2health; i++) {
	//	screen[0][columnhero1 + 44 + i] = 'X';
	//
	//}
	//
	//
	//
	//if (singlebullet == 1) {
	//
	//	screen[rowbullet][columnbullet] = '-';
	//	for (int i = 0; i < 6; i++) {
	//		vsinglebullet += 1;
	//		columnbullet += 1;
	//		if (i > columnlvl2enemy1 - 6 && i < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 7) {
	//			vsinglebullet = 0;
	//			singlebullet = 0;
	//			columnbullet = columnhero + 6;
	//			lvl2enemy1health--;
	//			break;
	//
	//		}
	//	}
	//	//vsinglebullet += 1;
	//	//columnbullet += 1;
	//
	//	//Enemy 1
	//	if (lvl2enemy1health > 0) {
	//
	//		if (columnbullet > columnlvl2enemy1 - 6 && columnbullet < columnlvl2enemy1 + 6 && rowbullet > rowlvl2enemy1 && rowbullet < rowlvl2enemy1 + 7) {
	//			vsinglebullet = 0;
	//			singlebullet = 0;
	//			columnbullet = columnhero + 6;
	//			lvl2enemy1health--;
	//
	//		}
	//	}
	//	//Enemy 2
	//	if (lvl2enemy2health > 0) {
	//
	//		if (columnbullet > columnlvl2enemy2 - 6 && columnbullet < columnlvl2enemy2 + 6 && rowbullet > rowlvl2enemy2 && rowbullet < rowlvl2enemy2 + 7) {
	//			vsinglebullet = 0;
	//			singlebullet = 0;
	//			columnbullet = columnhero + 6;
	//			lvl2enemy2health--;
	//
	//		}
	//
	//
	//
	//	}
	//
	//
	//}
	//
	//if (vsinglebullet > 100) {
	//	vsinglebullet = 0;
	//	singlebullet = 0;
	//}
	//
	//
	//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
	//	playerhealth = 0;
	//}

}

void drawlevel3(int& ctofmove2, int& ctofmove1, int& lvl3enemy4health, int& rowlvl3enemy4, int& columnlvl3enemy4, int& lvl3enemy3health, int& rowlvl3enemy3, int& columnlvl3enemy3, int& rowbomb2, int& columnbomb2, int& rowbomb1, int& columnbomb1, int& scroll3, int& lcond, int& bulletdirection, int& columnlvl3enemy2, int& rowlvl3enemy2, int& vsinglebullet, int& rowlvl3enemy1, int& columnlvl3enemy1, int& singlebullet, int& rowbullet, int& columnbullet, int& lvl3enemy2health, int& lvl3enemy1health, int& playerhealth, int& rowhero, int& columnhero, char screen[][156]) {
	for (int r = 0; r < 40; r++) {
		for (int c = 0; c < 300; c++) {
			screen[r][c] = ' ';
		}
	}

	for (int i = 0; i < 300; i++) {
		screen[39][i] = '=';
	}


	int columnground1 = 20;
	int rowground1 = 9;

	for (int i = 0; i < 250; i++) {
		screen[rowground1][columnground1] = '=';
		columnground1++;
	}


	//int columnver1 = 140;
	//int rowver1 = 38;
	//for (int i = 0; i < 4; i++) {
	//	screen[rowver1][columnver1] = 186;
	//	rowver1--;
	//}
	//
	//int columnver2 = 156;
	//int rowver2 = 38;
	//for (int i = 0; i < 4; i++) {
	//	screen[rowver2][columnver2] = 186;
	//	rowver2--;
	//}


	//int columnhero1 = columnhero - 65;
	int columnhero1 = scroll3;


	screen[0][columnhero1] = 'L';
	screen[0][columnhero1 + 1] = 'e';
	screen[0][columnhero1 + 2] = 'v';
	screen[0][columnhero1 + 3] = 'e';
	screen[0][columnhero1 + 4] = 'L';
	screen[0][columnhero1 + 5] = ':';

	screen[0][columnhero1 + 6] = '2';

	screen[0][columnhero1 + 9] = 'P';
	screen[0][columnhero1 + 10] = 'l';
	screen[0][columnhero1 + 11] = 'a';
	screen[0][columnhero1 + 12] = 'y';
	screen[0][columnhero1 + 13] = 'e';
	screen[0][columnhero1 + 14] = 'r';
	screen[0][columnhero1 + 15] = ':';

	for (int i = 0; i < playerhealth; i++) {
		screen[0][columnhero1 + 16 + i] = 'X';

	}

	screen[0][columnhero1 + 23] = 'e';
	screen[0][columnhero1 + 24] = 'n';
	screen[0][columnhero1 + 25] = 'e';
	screen[0][columnhero1 + 26] = 'm';
	screen[0][columnhero1 + 27] = 'y';
	screen[0][columnhero1 + 28] = '1';
	screen[0][columnhero1 + 29] = ':';


	for (int i = 0; i < lvl3enemy1health; i++) {
		screen[0][columnhero1 + 30 + i] = 'X';

	}


	screen[0][columnhero1 + 37] = 'e';
	screen[0][columnhero1 + 38] = 'n';
	screen[0][columnhero1 + 39] = 'e';
	screen[0][columnhero1 + 40] = 'm';
	screen[0][columnhero1 + 41] = 'y';
	screen[0][columnhero1 + 42] = '2';
	screen[0][columnhero1 + 43] = ':';


	for (int i = 0; i < lvl3enemy2health; i++) {
		screen[0][columnhero1 + 44 + i] = 'X';

	}



	screen[0][columnhero1 + 51] = 'e';
	screen[0][columnhero1 + 52] = 'n';
	screen[0][columnhero1 + 53] = 'e';
	screen[0][columnhero1 + 54] = 'm';
	screen[0][columnhero1 + 55] = 'y';
	screen[0][columnhero1 + 56] = '3';
	screen[0][columnhero1 + 57] = ':';


	for (int i = 0; i < lvl3enemy3health; i++) {
		screen[0][columnhero1 + 58 + i] = 'X';

	}



	screen[0][columnhero1 + 65] = 'e';
	screen[0][columnhero1 + 66] = 'n';
	screen[0][columnhero1 + 67] = 'e';
	screen[0][columnhero1 + 68] = 'm';
	screen[0][columnhero1 + 69] = 'y';
	screen[0][columnhero1 + 70] = '4';
	screen[0][columnhero1 + 71] = ':';


	for (int i = 0; i < lvl3enemy4health; i++) {
		screen[0][columnhero1 + 72 + i] = 'X';

	}



	int rowdoor = 1;
	int columndoor = 143;
	for (int i = 0; i < 16; i++) {
		screen[rowdoor][columndoor] = 205;
		columndoor++;
	}

	screen[rowdoor][columndoor] = 187;
	for (int i = 0; i < 7; i++) {
		screen[rowdoor + 1][columndoor] = 186;
		rowdoor++;
	}


	int rowdoor1 = 1;
	int columndoor1 = 143;

	screen[rowdoor1][columndoor1] = 201;
	for (int i = 0; i < 7; i++) {
		screen[rowdoor1 + 1][columndoor1] = 186;
		rowdoor1++;
	}


	if (bulletdirection == 1) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '-';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet += 1;
				if (i > columnlvl3enemy1 - 6 && i < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy1health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl3enemy1health > 0) {

				if (columnbullet > columnlvl3enemy1 - 6 && columnbullet < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy1health--;

				}
			}
			//Enemy 2
			if (lvl3enemy2health > 0) {

				if (columnbullet > columnlvl3enemy2 - 6 && columnbullet < columnlvl3enemy2 + 6 && rowbullet > rowlvl3enemy2 && rowbullet < rowlvl3enemy2 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy2health--;

				}



			}
			//Enemy3
			if (lvl3enemy3health > 0) {

				if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy3health--;

				}



			}

			//Enemy4
			if (lvl3enemy4health > 0) {

				if (columnbullet > columnlvl3enemy4 - 6 && columnbullet < columnlvl3enemy4 + 6 && rowbullet > rowlvl3enemy4 && rowbullet < rowlvl3enemy4 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy4health--;

				}



			}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}

		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}

	}

	if (bulletdirection == 2) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '-';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				columnbullet -= 1;
				if (i > columnlvl3enemy1 - 6 && i < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy1health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl3enemy1health > 0) {

				if (columnbullet > columnlvl3enemy1 - 6 && columnbullet < columnlvl3enemy1 + 6 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl3enemy1health--;

				}
			}
			//Enemy 2
			if (lvl3enemy2health > 0) {

				if (columnbullet > columnlvl3enemy2 - 6 && columnbullet < columnlvl3enemy2 + 6 && rowbullet > rowlvl3enemy2 && rowbullet < rowlvl3enemy2 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero - 6;
					lvl3enemy2health--;

				}



			}
			//Enemy3
			if (lvl3enemy3health > 0) {

				if (columnbullet > columnlvl3enemy3 - 6 && columnbullet < columnlvl3enemy3 + 6 && rowbullet > rowlvl3enemy3 && rowbullet < rowlvl3enemy3 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero + 6;
					lvl3enemy3health--;

				}



			}


		}

		if (vsinglebullet > 100) {
			vsinglebullet = 0;
			singlebullet = 0;
		}

		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}

	}



	if (bulletdirection == 3) {
		if (singlebullet == 1) {

			screen[rowbullet][columnbullet] = '^';
			for (int i = 0; i < 6; i++) {
				vsinglebullet += 1;
				rowbullet -= 1;
				if (i > columnlvl3enemy1 - 18 && i < columnlvl3enemy1 + 18 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl3enemy1health--;
					break;

				}
			}
			//vsinglebullet += 1;
			//columnbullet += 1;

			//Enemy 1
			if (lvl3enemy1health > 0) {

				if (columnbullet > columnlvl3enemy1 - 18 && columnbullet < columnlvl3enemy1 + 18 && rowbullet > rowlvl3enemy1 && rowbullet < rowlvl3enemy1 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl3enemy1health--;

				}
			}
			//Enemy 2
			if (lvl3enemy2health > 0) {

				if (columnbullet > columnlvl3enemy2 - 18 && columnbullet < columnlvl3enemy2 + 18 && rowbullet > rowlvl3enemy2 && rowbullet < rowlvl3enemy2 + 7) {
					vsinglebullet = 0;
					singlebullet = 0;
					columnbullet = columnhero;
					lvl3enemy2health--;

				}



			}


		}

		if (vsinglebullet > 20) {
			vsinglebullet = 0;
			singlebullet = 0;
		}


		if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
			playerhealth = 0;
		}



















	}


	if (lcond == 1) {

		if (columnhero < 143) {
			for (int i = 38; i > 9; i--) {
				screen[i][156] = '+';
			}
			lcond = 0;
		}
	}
	else {
		for (int i = 38; i > 9; i--) {
			screen[i][156] = '+';
		}
	}


	if (lcond == 1) {

		if (columnhero > 156) {
			for (int i = 38; i > 9; i--) {
				screen[i][149] = '+';
			}
			lcond = 0;
		}
	}
	else {
		for (int i = 38; i > 9; i--) {
			screen[i][149] = '+';
		}
	}

	if (lvl3enemy1health > 0) {


		screen[rowbomb1][columnbomb1] = 'O';
		if (ctofmove1 >= 15 && ctofmove1 < 20) {
			if (rowbomb1 == 38) {

				columnbomb1 = columnlvl3enemy1 + 15;
			}
		}
		else {
			columnbomb1 = columnlvl3enemy1;

		}
		rowbomb1 += 1;
		if (rowbomb1 == 38) {
			if (columnbomb1 < columnhero + 10 && columnbomb1 > columnhero - 10) {
				playerhealth -= 1;
			}
			rowbomb1 = rowlvl3enemy1 + 7;
		}
	}

	if (lvl3enemy2health > 0) {

		screen[rowbomb2][columnbomb2] = '@';
		if (ctofmove2 >= 15 && ctofmove2 < 20) {
			if (rowbomb2 == 38) {

				columnbomb2 = columnlvl3enemy2 - 15;
			}
		}
		else {
			columnbomb2 = columnlvl3enemy2;

		}
		rowbomb2 += 1;
		if (rowbomb2 == 38) {

			rowbomb2 = rowlvl3enemy2 + 7;
		}

		if (columnbomb2 < columnhero + 10 && columnbomb2 > columnhero - 10 && rowbomb2 > rowhero) {
			playerhealth -= 1;
		}
	}



}

void Drawobstaclelvl3(char screen[][156], int robs1lvl3, int cobs1lvl3, int lvl3dirocbst1, int robs2lvl3, int cobs2lvl3, int lvl3dirocbst2, int robs3lvl3, int cobs3lvl3, int lvl3dirocbst3, int robs4lvl3, int cobs4lvl3, int lvl3dirocbst4) {
	for (int i = 0; i < 12; i++) {
		screen[robs1lvl3][cobs1lvl3] = 'x';
		cobs1lvl3++;
	}

	for (int i = 0; i < 12; i++) {
		screen[robs2lvl3][cobs2lvl3] = 'x';
		cobs2lvl3--;
	}

	for (int i = 0; i < 12; i++) {
		screen[robs3lvl3][cobs3lvl3] = 'x';
		cobs3lvl3++;
	}

	for (int i = 0; i < 12; i++) {
		screen[robs4lvl3][cobs4lvl3] = 'x';
		cobs4lvl3--;
	}
}

void Moveobstacles3(char screen[][156], int& robs1lvl3, int& cobs1lvl3, int& lvl3dirocbst1, int& robs2lvl3, int& cobs2lvl3, int& lvl3dirocbst2, int& robs3lvl3, int& cobs3lvl3, int& lvl3dirocbst3, int& robs4lvl3, int& cobs4lvl3, int& lvl3dirocbst4) {
	if (lvl3dirocbst1 == -1)
	{
		if (cobs1lvl3 == 161)
		{
			lvl3dirocbst1 *= -1;
		}
	}
	else
	{
		if ((cobs1lvl3 + 10) == 296)
		{
			lvl3dirocbst1 *= -1;
		}
	}

	cobs1lvl3 += lvl3dirocbst1;

	if (lvl3dirocbst2 == -1)
	{
		if (cobs2lvl3 == 172)
		{
			lvl3dirocbst2 *= -1;
		}
	}
	else
	{
		if ((cobs2lvl3 + 10) == 296)
		{
			lvl3dirocbst2 *= -1;
		}
	}

	cobs2lvl3 += lvl3dirocbst2;

	if (lvl3dirocbst3 == -1)
	{
		if (cobs3lvl3 == 161)
		{
			lvl3dirocbst3 *= -1;
		}
	}
	else
	{
		if ((cobs3lvl3 + 10) == 296)
		{
			lvl3dirocbst3 *= -1;
		}
	}

	cobs3lvl3 += lvl3dirocbst3;

	if (lvl3dirocbst4 == -1)
	{
		if (cobs4lvl3 == 172)
		{
			lvl3dirocbst4 *= -1;
		}
	}
	else
	{
		if ((cobs4lvl3 + 10) == 296)
		{
			lvl3dirocbst4 *= -1;
		}
	}

	cobs4lvl3 += lvl3dirocbst4;
}

void DrawElevator3(char screen[][156], int rowelevatorlvl3, int columnelevatorlvl3) {

	for (int i = 0; i < 15; i++) {
		screen[rowelevatorlvl3][columnelevatorlvl3] = 'x';
		columnelevatorlvl3++;
	}
}

void MoveElevator3(int& rowelevatorlvl3, int& columnelevatorlvl3, int& directionelevatorlvl3, int columnhero, int& rowhero) {
	int ct = 0;
	int pos1;
	if ((columnelevatorlvl3 + 7) == columnhero) {
		if (directionelevatorlvl3 == 1) {
			rowelevatorlvl3--;
			rowhero--;
			if (rowelevatorlvl3 == 9) {

				directionelevatorlvl3 *= -1;
				ct++;
			}
		}
		//else {
		//	rowhero++;
		//	if (rowelevatorlvl3 == 9) {
		//		
		//		directionelevatorlvl3 *= 1;
		//	}
		//}
		//rowelevatorlvl3 -= directionelevatorlvl3;
	}
	//if (ct == 1) {
	//	
	//}
}

void Drawobstacle2(char screen[][156], int robs1lvl2, int cobs1lvl2, int robs2lvl2, int cobs2lvl2, int robs3lvl2, int cobs3lvl2, int lvl2dirobs3) {

	for (int i = 0; i < 12; i++) {
		screen[robs1lvl2][cobs1lvl2] = 'x';
		cobs1lvl2++;
	}

	cobs1lvl2 += 5;

	//for (int i = 0; i < 12; i++) {
	//	screen[robs2lvl2][cobs2lvl2] = 'x';
	//	cobs2lvl2--;
	//}
	//cobs2lvl2 += 5;

	for (int i = 0; i < 12; i++) {
		screen[robs3lvl2][cobs3lvl2] = 'x';
		cobs3lvl2--;
	}
	cobs3lvl2 += 5;

}

void Obstcalemove2(int& robs1lvl2, int& cobs1lvl2, int& lvl2dirobs1, int& robs2lvl2, int& cobs2lvl2, int& lvl2dirobs2, int& robs3lvl2, int& cobs3lvl2, int& lvl2dirobs3) {
	if (lvl2dirobs1 == -1)
	{
		if (cobs1lvl2 == 0)
		{
			lvl2dirobs1 *= -1;
		}
	}
	else
	{
		if ((cobs1lvl2 + 10) == 149)
		{
			lvl2dirobs1 *= -1;
		}
	}

	cobs1lvl2 += lvl2dirobs1;


	//if (lvl2dirobs2 == 1)
	//{
	//	if ((cobs2lvl2) == 298)
	//	{
	//		lvl2dirobs2 *= -1;
	//	}
	//}
	//else
	//{
	//	if ((cobs2lvl2 - 10) == 156)
	//	{
	//		lvl2dirobs2 *= -1;
	//	}
	//}


	cobs2lvl2 += lvl2dirobs2;

	if (lvl2dirobs3 == 1)
	{
		if ((cobs3lvl2) == 149)
		{
			lvl2dirobs3 *= -1;
		}
	}
	else
	{
		if ((cobs3lvl2 - 10) == 0)
		{
			lvl2dirobs3 *= -1;
		}
	}

	cobs3lvl2 += lvl2dirobs3;
}

void drawelevator1(int& columnhero, int& columnelevator1, char screen[][156], int& rowelevator1) {
	for (int i = 0; i < 15; i++) {
		screen[rowelevator1][i] = 'x';
	}
	if (columnhero == columnelevator1 + 2) {
		screen[rowelevator1 - 1][15] = 186;
		screen[rowelevator1 - 2][15] = 186;
		screen[rowelevator1 - 3][15] = 186;
		screen[rowelevator1 - 4][15] = 186;
		screen[rowelevator1 - 5][15] = 186;
		screen[rowelevator1 - 6][15] = 186;
		screen[rowelevator1 - 7][15] = 186;
		screen[rowelevator1 - 8][15] = 186;
		screen[rowelevator1 - 9][15] = 186;
		screen[rowelevator1 - 10][15] = 186;
		screen[rowelevator1 - 11][15] = 186;
		screen[rowelevator1 - 12][15] = 187;

		screen[rowelevator1 - 1][0] = 186;
		screen[rowelevator1 - 2][0] = 186;
		screen[rowelevator1 - 3][0] = 186;
		screen[rowelevator1 - 4][0] = 186;
		screen[rowelevator1 - 5][0] = 186;
		screen[rowelevator1 - 6][0] = 186;
		screen[rowelevator1 - 7][0] = 186;
		screen[rowelevator1 - 8][0] = 186;
		screen[rowelevator1 - 9][0] = 186;
		screen[rowelevator1 - 10][0] = 186;
		screen[rowelevator1 - 11][0] = 186;
		screen[rowelevator1 - 12][0] = 201;

		screen[rowelevator1 - 12][1] = 205;
		screen[rowelevator1 - 12][2] = 205;
		screen[rowelevator1 - 12][3] = 205;
		screen[rowelevator1 - 12][4] = 205;
		screen[rowelevator1 - 12][5] = 205;
		screen[rowelevator1 - 12][6] = 205;
		screen[rowelevator1 - 12][7] = 205;
		screen[rowelevator1 - 12][8] = 205;
		screen[rowelevator1 - 12][9] = 205;
		screen[rowelevator1 - 12][10] = 205;
		screen[rowelevator1 - 12][11] = 205;
		screen[rowelevator1 - 12][12] = 205;
		screen[rowelevator1 - 12][13] = 205;
		screen[rowelevator1 - 12][14] = 205;



	}

}

void drawelevator3(int& columnhero, int& columnelevator1, char screen[][156], int& rowelevator1) {
	for (int i = 141; i < 156; i++) {
		screen[rowelevator1][i] = 'x';
	}
	if (columnhero == columnelevator1 + 2) {
		screen[rowelevator1 - 1][155] = 186;
		screen[rowelevator1 - 2][155] = 186;
		screen[rowelevator1 - 3][155] = 186;
		screen[rowelevator1 - 4][155] = 186;
		screen[rowelevator1 - 5][155] = 186;
		screen[rowelevator1 - 6][155] = 186;
		screen[rowelevator1 - 7][155] = 186;
		screen[rowelevator1 - 8][155] = 186;
		screen[rowelevator1 - 9][155] = 186;
		screen[rowelevator1 - 10][155] = 186;
		screen[rowelevator1 - 11][155] = 186;
		screen[rowelevator1 - 12][155] = 187;

		screen[rowelevator1 - 1][141] = 186;
		screen[rowelevator1 - 2][141] = 186;
		screen[rowelevator1 - 3][141] = 186;
		screen[rowelevator1 - 4][141] = 186;
		screen[rowelevator1 - 5][141] = 186;
		screen[rowelevator1 - 6][141] = 186;
		screen[rowelevator1 - 7][141] = 186;
		screen[rowelevator1 - 8][141] = 186;
		screen[rowelevator1 - 9][141] = 186;
		screen[rowelevator1 - 10][141] = 186;
		screen[rowelevator1 - 11][141] = 186;
		screen[rowelevator1 - 12][141] = 201;

		screen[rowelevator1 - 12][142] = 205;
		screen[rowelevator1 - 12][143] = 205;
		screen[rowelevator1 - 12][144] = 205;
		screen[rowelevator1 - 12][145] = 205;
		screen[rowelevator1 - 12][146] = 205;
		screen[rowelevator1 - 12][147] = 205;
		screen[rowelevator1 - 12][148] = 205;
		screen[rowelevator1 - 12][149] = 205;
		screen[rowelevator1 - 12][150] = 205;
		screen[rowelevator1 - 12][151] = 205;
		screen[rowelevator1 - 12][152] = 205;
		screen[rowelevator1 - 12][153] = 205;
		screen[rowelevator1 - 12][154] = 205;


	}

}

void drawelevator2(int& columnhero, int& columnelevator1, int& lvl1enemy3health, char screen[][156], int& rowelevator1) {
	if (lvl1enemy3health == 0) {
		for (int i = 71; i < 85; i++) {
			screen[rowelevator1][i] = 'x';
		}

		if (columnhero == columnelevator1 + 2) {
			screen[rowelevator1 - 1][85] = 186;
			screen[rowelevator1 - 2][85] = 186;
			screen[rowelevator1 - 3][85] = 186;
			screen[rowelevator1 - 4][85] = 186;
			screen[rowelevator1 - 5][85] = 186;
			screen[rowelevator1 - 6][85] = 186;
			screen[rowelevator1 - 7][85] = 186;
			screen[rowelevator1 - 8][85] = 186;
			screen[rowelevator1 - 9][85] = 186;
			screen[rowelevator1 - 10][85] = 186;
			screen[rowelevator1 - 11][85] = 186;
			screen[rowelevator1 - 12][85] = 187;

			screen[rowelevator1 - 1][71] = 186;
			screen[rowelevator1 - 2][71] = 186;
			screen[rowelevator1 - 3][71] = 186;
			screen[rowelevator1 - 4][71] = 186;
			screen[rowelevator1 - 5][71] = 186;
			screen[rowelevator1 - 6][71] = 186;
			screen[rowelevator1 - 7][71] = 186;
			screen[rowelevator1 - 8][71] = 186;
			screen[rowelevator1 - 9][71] = 186;
			screen[rowelevator1 - 10][71] = 186;
			screen[rowelevator1 - 11][71] = 186;
			screen[rowelevator1 - 12][71] = 201;

			screen[rowelevator1 - 12][72] = 205;
			screen[rowelevator1 - 12][73] = 205;
			screen[rowelevator1 - 12][74] = 205;
			screen[rowelevator1 - 12][75] = 205;
			screen[rowelevator1 - 12][76] = 205;
			screen[rowelevator1 - 12][77] = 205;
			screen[rowelevator1 - 12][78] = 205;
			screen[rowelevator1 - 12][79] = 205;
			screen[rowelevator1 - 12][80] = 205;
			screen[rowelevator1 - 12][81] = 205;
			screen[rowelevator1 - 12][82] = 205;
			screen[rowelevator1 - 12][83] = 205;
			screen[rowelevator1 - 12][84] = 205;
			//screen[rowelevator1 - 12][85] = 205;



		}

	}


}

void moveelevator1(int& TOGGLEGRAVITY, int& rowelevator1, int& columnelevator1, int& columnhero, int& rowhero, int& elevator1stat, int& verscroll) {
	if (columnhero == columnelevator1 + 2) {
		if (elevator1stat == 0) {
			TOGGLEGRAVITY = 0;
			rowelevator1--;
			rowhero--;
			verscroll--;
			if (rowelevator1 == 193) {
				elevator1stat = 1;
				columnhero += 1;
			}
		}
		else if (elevator1stat == 1) {
			TOGGLEGRAVITY = 0;
			rowelevator1++;
			rowhero++;
			verscroll++;
			if (rowelevator1 == 213) {
				elevator1stat = 0;
				columnhero += 1;
			}
		}
	}
}

void moveelevator2(int& lvl1enemy3health, int& level, int& TOGGLEGRAVITY, int& rowelevator1, int& columnelevator1, int& columnhero, int& rowhero, int& elevator1stat, int& verscroll) {
	if (lvl1enemy3health == 0) {

		if (columnhero == columnelevator1 + 2) {
			if (elevator1stat == 0) {
				TOGGLEGRAVITY = 0;
				rowelevator1--;
				rowhero--;
				//verscroll--;
				if (rowelevator1 == 145) {
					level = 2;
					columnhero = 12;
					rowhero = 228;
					verscroll = rowhero - 26;
				}
			}
		}
		//else if (elevator1stat == 1) {
		//	TOGGLEGRAVITY = 0;
		//	rowelevator1++;
		//	rowhero++;
		//	//verscroll++;
		//	if (rowelevator1 == 213) {
		//		elevator1stat = 0;
		//		columnhero += 1;
		//	}
		//}
	}
}

void moveelevator3(int& TOGGLEGRAVITY, int& rowelevator1, int& columnelevator1, int& columnhero, int& rowhero, int& elevator1stat, int& verscroll) {
	if (columnhero == columnelevator1 + 2) {
		if (elevator1stat == 0) {
			TOGGLEGRAVITY = 0;
			rowelevator1--;
			rowhero--;
			verscroll--;
			if (rowelevator1 == 188) {
				elevator1stat = 1;
				columnhero -= 1;
			}
		}
		else if (elevator1stat == 1) {
			TOGGLEGRAVITY = 0;
			rowelevator1++;
			rowhero++;
			verscroll++;
			if (rowelevator1 == 238) {
				elevator1stat = 0;
				columnhero -= 1;
			}
		}
	}
}

void DrawHero(char screen[][156], int rowhero, int columnhero) {


	screen[rowhero][columnhero] = '.';
	screen[rowhero][columnhero + 1] = '_';
	screen[rowhero][columnhero - 1] = '_';
	screen[rowhero + 1][columnhero] = '"';
	screen[rowhero + 1][columnhero + 1] = '~';
	screen[rowhero + 1][columnhero - 1] = '~';
	screen[rowhero + 1][columnhero - 2] = '/';
	screen[rowhero + 1][columnhero + 2] = '\\';
	screen[rowhero + 2][columnhero] = '_';
	screen[rowhero + 2][columnhero + 1] = 148;
	screen[rowhero + 2][columnhero - 1] = 148;
	screen[rowhero + 2][columnhero - 2] = '|';
	screen[rowhero + 2][columnhero + 2] = '|';
	screen[rowhero + 2][columnhero + 3] = '}';
	screen[rowhero + 2][columnhero - 3] = '{';
	screen[rowhero + 3][columnhero] = 126;
	//screen[rowhero + 4][columnhero] = 'V';


	screen[rowhero + 3][columnhero + 1] = '/';
	screen[rowhero + 3][columnhero + 2] = '.';
	screen[rowhero + 3][columnhero + 3] = '-';
	screen[rowhero + 5][columnhero + 3] = '-';
	screen[rowhero + 5][columnhero + 2] = '/';
	screen[rowhero + 4][columnhero] = '*';
	screen[rowhero + 6][columnhero] = 240;



	screen[rowhero + 6][columnhero + 1] = '|';
	screen[rowhero + 6][columnhero - 1] = '|';

	screen[rowhero + 8][columnhero + 2] = '|';
	screen[rowhero + 8][columnhero - 2] = '|';


	screen[rowhero + 7][columnhero + 2] = '\\';
	screen[rowhero + 9][columnhero + 2] = '|';
	screen[rowhero + 9][columnhero + 1] = '_';
	screen[rowhero + 9][columnhero - 1] = '_';
	screen[rowhero + 9][columnhero + 3] = '_';
	screen[rowhero + 10][columnhero + 4] = ')';
	screen[rowhero + 10][columnhero + 3] = '_';
	screen[rowhero + 10][columnhero + 2] = '_';
	screen[rowhero + 10][columnhero + 1] = '\\';
	screen[rowhero + 10][columnhero - 1] = '/';
	screen[rowhero + 10][columnhero - 2] = '_';
	screen[rowhero + 10][columnhero - 3] = '_';

	screen[rowhero + 9][columnhero + 3] = '_';

	screen[rowhero + 7][columnhero + 1] = '_';
	screen[rowhero + 7][columnhero] = '_';
	screen[rowhero + 7][columnhero - 1] = '_';

	screen[rowhero + 3][columnhero + 4] = '_';
	screen[rowhero + 5][columnhero + 6] = '\\';
	screen[rowhero + 5][columnhero + 4] = '\\';
	screen[rowhero + 7][columnhero + 6] = ')';
	screen[rowhero + 7][columnhero + 5] = '{';
	screen[rowhero + 3][columnhero + 5] = ',';
	screen[rowhero + 4][columnhero + 5] = '\\';


	screen[rowhero + 6][columnhero + 6] = '|';
	screen[rowhero + 6][columnhero + 5] = '\\';


	screen[rowhero + 3][columnhero - 1] = '\\';
	screen[rowhero + 3][columnhero - 2] = '.';
	screen[rowhero + 3][columnhero - 3] = '-';
	screen[rowhero + 5][columnhero - 3] = '-';
	screen[rowhero + 5][columnhero - 2] = '\\';
	screen[rowhero + 7][columnhero - 2] = '/';
	screen[rowhero + 9][columnhero - 2] = '|';
	screen[rowhero + 9][columnhero - 3] = '_';
	screen[rowhero + 10][columnhero - 4] = '(';
	screen[rowhero + 9][columnhero] = '|';
	screen[rowhero + 8][columnhero] = '|';


	screen[rowhero + 3][columnhero - 4] = '_';
	screen[rowhero + 5][columnhero - 4] = '/';
	screen[rowhero + 7][columnhero - 5] = '}';

	screen[rowhero + 5][columnhero - 6] = '/';
	screen[rowhero + 7][columnhero - 6] = '(';
	screen[rowhero + 3][columnhero - 5] = ',';
	screen[rowhero + 4][columnhero - 5] = '/';

	screen[rowhero + 6][columnhero - 6] = '|';
	screen[rowhero + 6][columnhero - 5] = '/';



	//screen[rowhero][columnhero] = '.';
	//screen[rowhero][columnhero + 1] = '_';
	//screen[rowhero][columnhero - 1] = '_';
	//screen[rowhero + 1][columnhero] = '"';
	//screen[rowhero + 1][columnhero + 1] = '~';
	//screen[rowhero + 1][columnhero - 1] = '~';
	//screen[rowhero + 1][columnhero - 2] = '(';
	//screen[rowhero + 1][columnhero + 2] = ')';
	//screen[rowhero + 2][columnhero] = '_';
	//screen[rowhero + 2][columnhero + 1] = '0';
	//screen[rowhero + 2][columnhero - 1] = '0';
	//screen[rowhero + 2][columnhero - 2] = '|';
	//screen[rowhero + 2][columnhero + 2] = '|';
	//screen[rowhero + 2][columnhero + 3] = ')';
	//screen[rowhero + 2][columnhero - 3] = '(';
	//screen[rowhero + 3][columnhero] = '=';
	//
	//screen[rowhero + 3][columnhero + 1] = '/';
	//screen[rowhero + 3][columnhero + 2] = '.';
	//screen[rowhero + 4][columnhero + 2] = '/';
	//screen[rowhero + 4][columnhero] = '*';
	//
	//screen[rowhero + 5][columnhero + 2] = '\\';
	//screen[rowhero + 6][columnhero + 2] = '/';
	//screen[rowhero + 6][columnhero + 1] = '_';
	//screen[rowhero + 6][columnhero - 1] = '_';
	//screen[rowhero + 6][columnhero + 3] = '_';
	//screen[rowhero + 7][columnhero + 4] = ')';
	//screen[rowhero + 7][columnhero + 3] = '_';
	//screen[rowhero + 7][columnhero + 2] = '_';
	//screen[rowhero + 7][columnhero + 1] = '\\';
	//screen[rowhero + 7][columnhero - 1] = '/';
	//screen[rowhero + 7][columnhero - 2] = '_';
	//screen[rowhero + 7][columnhero - 3] = '_';
	//
	//screen[rowhero + 6][columnhero + 3] = '_';
	//
	//screen[rowhero + 5][columnhero + 1] = '_';
	//screen[rowhero + 5][columnhero] = '_';
	//screen[rowhero + 5][columnhero - 1] = '_';
	//
	//screen[rowhero + 3][columnhero + 3] = '_';
	//screen[rowhero + 4][columnhero + 5] = '\\';
	//screen[rowhero + 4][columnhero + 3] = '\\';
	//screen[rowhero + 5][columnhero + 5] = '}';
	//screen[rowhero + 5][columnhero + 4] = '{';
	//screen[rowhero + 3][columnhero + 4] = ',';
	//
	//screen[rowhero + 3][columnhero - 1] = '\\';
	//screen[rowhero + 3][columnhero - 2] = '.';
	//screen[rowhero + 4][columnhero - 2] = '\\';
	//screen[rowhero + 5][columnhero - 2] = '/';
	//screen[rowhero + 6][columnhero - 2] = '\\';
	//screen[rowhero + 6][columnhero - 3] = '_';
	//screen[rowhero + 7][columnhero - 4] = '(';
	//screen[rowhero + 6][columnhero] = '|';
	//
	//screen[rowhero + 3][columnhero - 3] = '_';
	//screen[rowhero + 4][columnhero - 3] = '/';
	//screen[rowhero + 5][columnhero - 4] = '}';
	//
	//screen[rowhero + 4][columnhero - 5] = '/';
	//screen[rowhero + 5][columnhero - 5] = '{';
	//screen[rowhero + 3][columnhero - 4] = ',';




}

void Drawlvl2enemy1(char screen[][156], int& rowlvl1enemy3, int& columnlvl1enemy3) {



	screen[rowlvl1enemy3][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3] = '"';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 1] = '^';

	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 2] = '(';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = '}';

	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = ' ';
	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3] = '~';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 1] = '/';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 1] = '^';


	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 3] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3] = 'V';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 + 2] = '/';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 + 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 4] = ')';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3] = ' ';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 4] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 6] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 7] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 5] = '/';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 7] = '}';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 6] = '{';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 4] = ' ';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 4] = '\\';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 6] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 7] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 5] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 7] = '{';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 6] = '}';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 4] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 1] = '\\';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 3] = '\\';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 - 2] = '\\';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 - 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 4] = '(';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3] = '|';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 2] = '/';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 2] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 2] = ')';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = '{';





}

void Drawlvl2enemy2(char screen[][156], int& rowlvl1enemy3, int& columnlvl1enemy3) {



	screen[rowlvl1enemy3][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3] = '"';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 1] = '^';

	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 2] = '(';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = '}';

	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = ' ';
	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3] = '~';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 1] = '/';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 1] = '^';


	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 3] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3] = 'V';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 + 2] = '/';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 + 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 4] = ')';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3] = ' ';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 4] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 6] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 7] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 5] = '/';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 7] = '}';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 6] = '{';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 4] = ' ';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 4] = '\\';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 6] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 7] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 5] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 7] = '{';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 6] = '}';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 4] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 1] = '\\';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 3] = '\\';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 - 2] = '\\';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 - 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 4] = '(';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3] = '|';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 2] = '/';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 2] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 2] = ')';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = '{';





}

void Drawlvl1enemyone(char screen[][156], int& rowlvl1enemy3, int& columnlvl1enemy3) {



	screen[rowlvl1enemy3][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3] = '"';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 1] = '^';

	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 2] = '(';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = '}';

	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = ' ';
	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3] = '~';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 1] = '/';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 1] = '^';


	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 3] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3] = 'V';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 + 2] = '/';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 + 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 4] = ')';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3] = ' ';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 4] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 6] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 7] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 5] = '/';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 7] = '}';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 6] = '{';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 4] = ' ';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 4] = '\\';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 6] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 7] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 5] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 7] = '{';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 6] = '}';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 4] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 1] = '\\';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 3] = '\\';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 - 2] = '\\';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 - 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 4] = '(';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3] = '|';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 2] = '/';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 2] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 2] = ')';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = '{';





}

void Drawlvl1enemytow(char screen[][156], int& rowlvl1enemy3, int& columnlvl1enemy3) {



	screen[rowlvl1enemy3][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3] = '"';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 2] = '/';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 2] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 2] = ')';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = '{';

	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 2] = '(';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = '}';

	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = ' ';
	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3] = '~';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 1] = '/';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 1] = '^';


	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 3] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3] = 'V';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 + 2] = '/';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 + 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 4] = ')';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3] = ' ';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 4] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 6] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 7] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 5] = '/';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 7] = '}';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 6] = '{';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 4] = ' ';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 4] = '\\';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 6] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 7] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 5] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 7] = '{';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 6] = '}';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 4] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 1] = '\\';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 3] = '\\';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 - 2] = '\\';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 - 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 4] = '(';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3] = '|';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 3] = '_';





}

void Drawlvl1enemythree(char screen[][156], int& rowlvl1enemy3, int& columnlvl1enemy3) {



	screen[rowlvl1enemy3][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3] = '"';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 - 2] = '/';
	screen[rowlvl1enemy3 + 1][columnlvl1enemy3 + 2] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3] = '_';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 1] = 232;
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 2] = ')';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = '{';

	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 2] = '(';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = '}';

	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 3] = ' ';
	//screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 3] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3] = '~';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 1] = '/';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 1] = '^';


	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 3] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3] = 'V';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 + 2] = '/';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 + 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 1] = '_';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 4] = ')';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 2] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 + 1] = '\\';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3] = ' ';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 1] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 3] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 4] = '/';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 + 6] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 7] = '/';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 + 5] = '/';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 7] = '}';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 + 6] = '{';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 + 4] = ' ';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 4] = '\\';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 5] = '_';
	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 6] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 7] = '\\';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 5] = '\\';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 7] = '{';
	screen[rowlvl1enemy3 + 2][columnlvl1enemy3 - 6] = '}';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 5] = ' ';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 4] = ' ';
	screen[rowlvl1enemy3 + 3][columnlvl1enemy3 - 1] = '\\';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 2] = '-';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 1] = '^';
	screen[rowlvl1enemy3 + 5][columnlvl1enemy3 - 3] = '\\';
	screen[rowlvl1enemy3 + 6][columnlvl1enemy3 - 2] = '\\';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3 - 2] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 2] = '|';

	screen[rowlvl1enemy3 + 8][columnlvl1enemy3 - 3] = '_';
	screen[rowlvl1enemy3 + 9][columnlvl1enemy3 - 4] = '(';
	screen[rowlvl1enemy3 + 7][columnlvl1enemy3] = '|';
	screen[rowlvl1enemy3 + 8][columnlvl1enemy3] = '|';

	screen[rowlvl1enemy3 + 4][columnlvl1enemy3 - 3] = '_';





}

void Drawlvl3enemy2(char screen[][156], int& rowlvl3enemy1, int& columnlvl3enemy1) {



	screen[rowlvl3enemy1][columnlvl3enemy1] = '_';
	screen[rowlvl3enemy1][columnlvl3enemy1 + 1] = 'A';
	screen[rowlvl3enemy1][columnlvl3enemy1 - 1] = 'A';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1] = '"';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 1] = '~';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 1] = '~';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 2] = '/';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 2] = '\\';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1] = '_';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 1] = 'o';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 1] = 'o';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 2] = '|';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 2] = '|';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 3] = ' ';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 3] = ' ';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1] = '~';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 1] = '/';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 2] = '.';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 3] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1] = '*';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 + 2] = '|';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 2] = '/';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 1] = '_';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 - 1] = '_';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 4] = ')';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 2] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 + 1] = '\\';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 1] = '/';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 2] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 3] = '_';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 + 1] = '_';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1] = '_';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 - 1] = '_';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 3] = '_';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 5] = '_';




	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 4] = '/';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 5] = '/';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 6] = ')';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 5] = '\\';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 4] = '\\';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 4] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 5] = '_';

	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 6] = '/';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 7] = '/';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 8] = ')';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 7] = '\\';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 6] = '\\';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 6] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 7] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 8] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 9] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 10] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 + 11] = '_';

	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 12] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 13] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 10] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 11] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 8] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 9] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 + 7] = '^';


	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 14] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 15] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 12] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 13] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 11] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 10] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 8] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 + 9] = '*';

	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 16] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 17] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 14] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 15] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 12] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 13] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 10] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 11] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 + 9] = '^';




	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 17] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 18] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 15] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 16] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 13] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 14] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 8] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 9] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 10] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 11] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 12] = '*';



	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 18] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 17] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 15] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 16] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 13] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 14] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 11] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 12] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 7] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 8] = '^';



	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 18] = '^';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 17] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 16] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 15] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 14] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 13] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 12] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 11] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 10] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 + 9] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 8] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 7] = '\\';








	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 4] = '\\';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 5] = '\\';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 6] = '(';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 5] = '/';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 4] = '/';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 4] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 5] = '_';

	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 6] = '\\';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 7] = '\\';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 8] = '(';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 7] = '/';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 6] = '/';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 6] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 7] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 8] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 9] = '^';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 10] = '_';
	screen[rowlvl3enemy1 + -2][columnlvl3enemy1 - 11] = '_';

	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 12] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 13] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 11] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 10] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 8] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 9] = '^';
	screen[rowlvl3enemy1 + -1][columnlvl3enemy1 - 7] = '^';


	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 14] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 15] = '^';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 12] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 13] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 11] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 10] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 8] = '*';
	screen[rowlvl3enemy1 + 0][columnlvl3enemy1 - 9] = '*';


	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 16] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 17] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 14] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 15] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 12] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 13] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 11] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 10] = '^';
	screen[rowlvl3enemy1 + 1][columnlvl3enemy1 - 9] = '^';




	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 17] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 18] = '^';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 16] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 15] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 14] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 13] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 12] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 11] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 10] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 9] = '*';
	screen[rowlvl3enemy1 + 2][columnlvl3enemy1 - 8] = '*';








	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 18] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 17] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 16] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 15] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 14] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 13] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 12] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 11] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 7] = '^';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 8] = '^';



	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 18] = '^';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 17] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 16] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 15] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 14] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 13] = '/';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 12] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 11] = '/';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 10] = '/';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 9] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 8] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 7] = '/';







	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 6] = ' ';
	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 5] = ' ';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 5] = ' ';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 + 4] = ' ';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 4] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 5] = '_';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 6] = '\\';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 5] = ' ';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 4] = ' ';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 1] = '\\';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 2] = '.';
	screen[rowlvl3enemy1 + 4][columnlvl3enemy1 - 3] = '\\';
	screen[rowlvl3enemy1 + 5][columnlvl3enemy1 - 2] = '|';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 - 2] = '\\';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1 - 3] = '_';
	screen[rowlvl3enemy1 + 7][columnlvl3enemy1 - 4] = '(';
	screen[rowlvl3enemy1 + 6][columnlvl3enemy1] = '|';
	screen[rowlvl3enemy1 + 3][columnlvl3enemy1 - 3] = '_';





}

void Drawlvl3enemy1(char screen[][156], int& rowlvl3enemy2, int& columnlvl3enemy2) {



	screen[rowlvl3enemy2][columnlvl3enemy2] = '_';
	screen[rowlvl3enemy2][columnlvl3enemy2 + 1] = 'A';
	screen[rowlvl3enemy2][columnlvl3enemy2 - 1] = 'A';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2] = '"';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 1] = '~';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 1] = '~';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 2] = '/';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 2] = '\\';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2] = '_';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 1] = 'o';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 1] = 'o';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 2] = '|';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 2] = '|';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 3] = ' ';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 3] = ' ';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2] = '~';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 1] = '/';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 2] = '.';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 3] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2] = '*';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 + 2] = '|';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 2] = '/';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 1] = '_';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 - 1] = '_';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 4] = ')';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 2] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 + 1] = '\\';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 1] = '/';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 2] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 3] = '_';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 + 1] = '_';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2] = '_';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 - 1] = '_';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 3] = '_';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 5] = '_';




	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 4] = '/';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 5] = '/';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 6] = ')';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 5] = '\\';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 4] = '\\';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 4] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 5] = '_';

	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 6] = '/';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 7] = '/';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 8] = ')';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 7] = '\\';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 6] = '\\';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 6] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 7] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 8] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 9] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 10] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 + 11] = '_';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 12] = '^';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 + 13] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 14] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 + 15] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 16] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 + 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 + 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 17] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 18] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 17] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 16] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 15] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 14] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 13] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 12] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 11] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 10] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 + 9] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 8] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 7] = '\\';








	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 4] = '\\';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 5] = '\\';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 6] = '(';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 5] = '/';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 4] = '/';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 4] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 5] = '_';

	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 6] = '\\';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 7] = '\\';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 8] = '(';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 7] = '/';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 6] = '/';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 6] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 7] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 8] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 9] = '^';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 10] = '_';
	screen[rowlvl3enemy2 + -2][columnlvl3enemy2 - 11] = '_';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 12] = '^';
	screen[rowlvl3enemy2 + -1][columnlvl3enemy2 - 13] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 14] = '^';
	screen[rowlvl3enemy2 + 0][columnlvl3enemy2 - 15] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 16] = '^';
	screen[rowlvl3enemy2 + 1][columnlvl3enemy2 - 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 17] = '^';
	screen[rowlvl3enemy2 + 2][columnlvl3enemy2 - 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 18] = '^';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 17] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 18] = '^';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 17] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 16] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 15] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 14] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 13] = '/';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 12] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 11] = '/';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 10] = '/';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 9] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 8] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 7] = '/';







	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 6] = ' ';
	//screen[rowlvl3enemy1 + 2][columnlvl3enemy1 + 5] = ' ';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 5] = ' ';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 + 4] = ' ';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 4] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 5] = '_';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 6] = '\\';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 5] = ' ';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 4] = ' ';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 1] = '\\';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 2] = '.';
	screen[rowlvl3enemy2 + 4][columnlvl3enemy2 - 3] = '\\';
	screen[rowlvl3enemy2 + 5][columnlvl3enemy2 - 2] = '|';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 - 2] = '\\';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2 - 3] = '_';
	screen[rowlvl3enemy2 + 7][columnlvl3enemy2 - 4] = '(';
	screen[rowlvl3enemy2 + 6][columnlvl3enemy2] = '|';
	screen[rowlvl3enemy2 + 3][columnlvl3enemy2 - 3] = '_';





}

void Drawlvl3enemy3(char screen[][156], int& rowlvl3enemy3, int& columnlvl3enemy3) {



	screen[rowlvl3enemy3][columnlvl3enemy3] = '_';
	screen[rowlvl3enemy3][columnlvl3enemy3 + 1] = 'A';
	screen[rowlvl3enemy3][columnlvl3enemy3 - 1] = 'A';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3] = '"';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 + 1] = '~';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 - 1] = '~';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 - 2] = '/';
	screen[rowlvl3enemy3 + 1][columnlvl3enemy3 + 2] = '\\';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3] = '_';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 1] = 'o';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 1] = 'o';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 2] = '|';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 2] = '|';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 3] = ' ';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 3] = ' ';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3] = '~';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 1] = '/';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 2] = '.';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 + 3] = '/';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3] = '*';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 + 2] = '|';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 2] = '/';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 1] = '_';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 - 1] = '_';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 4] = ')';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 2] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 + 1] = '\\';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 1] = '/';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 2] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 3] = '_';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 + 1] = '_';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3] = '_';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 - 1] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 3] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 4] = '/';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 5] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 + 6] = '/';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 6] = '}';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 + 5] = '{';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 + 5] = ' ';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 + 4] = ' ';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 4] = '\\';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 5] = '_';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 6] = '\\';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 6] = '{';
	screen[rowlvl3enemy3 + 2][columnlvl3enemy3 - 5] = '}';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 - 5] = ' ';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 - 4] = ' ';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 1] = '\\';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 2] = '.';
	screen[rowlvl3enemy3 + 4][columnlvl3enemy3 - 3] = '\\';
	screen[rowlvl3enemy3 + 5][columnlvl3enemy3 - 2] = '|';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 - 2] = '\\';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3 - 3] = '_';
	screen[rowlvl3enemy3 + 7][columnlvl3enemy3 - 4] = '(';
	screen[rowlvl3enemy3 + 6][columnlvl3enemy3] = '|';
	screen[rowlvl3enemy3 + 3][columnlvl3enemy3 - 3] = '_';





}

void Drawlvl3enemy4(char screen[][156], int& rowlvl3enemy4, int& columnlvl3enemy4) {



	screen[rowlvl3enemy4][columnlvl3enemy4] = '_';
	screen[rowlvl3enemy4][columnlvl3enemy4 + 1] = 'A';
	screen[rowlvl3enemy4][columnlvl3enemy4 - 1] = 'A';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4] = '"';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 + 1] = '~';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 - 1] = '~';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 - 2] = '/';
	screen[rowlvl3enemy4 + 1][columnlvl3enemy4 + 2] = '\\';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4] = '_';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 1] = 'o';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 1] = 'o';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 2] = '|';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 2] = '|';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 3] = ' ';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 3] = ' ';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4] = '~';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 1] = '/';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 2] = '.';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 + 3] = '/';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4] = '*';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 + 2] = '|';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 2] = '/';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 1] = '_';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 - 1] = '_';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 4] = ')';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 2] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 + 1] = '\\';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 1] = '/';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 2] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 3] = '_';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 + 1] = '_';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4] = '_';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 - 1] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 3] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 4] = '/';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 5] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 + 6] = '/';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 6] = '}';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 + 5] = '{';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 + 5] = ' ';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 + 4] = ' ';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 4] = '\\';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 5] = '_';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 6] = '\\';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 6] = '{';
	screen[rowlvl3enemy4 + 2][columnlvl3enemy4 - 5] = '}';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 - 5] = ' ';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 - 4] = ' ';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 1] = '\\';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 2] = '.';
	screen[rowlvl3enemy4 + 4][columnlvl3enemy4 - 3] = '\\';
	screen[rowlvl3enemy4 + 5][columnlvl3enemy4 - 2] = '|';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 - 2] = '\\';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4 - 3] = '_';
	screen[rowlvl3enemy4 + 7][columnlvl3enemy4 - 4] = '(';
	screen[rowlvl3enemy4 + 6][columnlvl3enemy4] = '|';
	screen[rowlvl3enemy4 + 3][columnlvl3enemy4 - 3] = '_';





}

void Movelvl1enemyone(int& lvl1enemy1jump, int& rowlvl1enemy, int& columnlvl1enemy, int& rowhero, int& columnhero, int& dirlvl1enemy1, char screen[][156], int& playerhealth) {

	if (dirlvl1enemy1 == 1) {

		if (columnlvl1enemy < 130) {
			if (lvl1enemy1jump >= 0 && lvl1enemy1jump < 3) {
				columnlvl1enemy += 1;
				rowlvl1enemy -= 1;
				lvl1enemy1jump++;
			}
			else if (lvl1enemy1jump >= 3 && lvl1enemy1jump < 6) {
				columnlvl1enemy += 1;
				rowlvl1enemy += 1;
				lvl1enemy1jump++;
			}
			else if (lvl1enemy1jump == 6) {
				lvl1enemy1jump = 0;
			}
		}
		else if (columnlvl1enemy == 130) {
			dirlvl1enemy1 = 0;
		}

		if (columnlvl1enemy < columnhero + 3 && columnlvl1enemy > columnhero - 3 && rowlvl1enemy == rowhero + 1) {
			playerhealth -= 1;
		}
	}
	else if (dirlvl1enemy1 == 0) {
		if (columnlvl1enemy > 70) {
			if (lvl1enemy1jump >= 0 && lvl1enemy1jump < 3) {
				columnlvl1enemy -= 1;
				rowlvl1enemy -= 1;
				lvl1enemy1jump++;
			}
			else if (lvl1enemy1jump >= 3 && lvl1enemy1jump < 6) {
				columnlvl1enemy -= 1;
				rowlvl1enemy += 1;
				lvl1enemy1jump++;
			}
			else if (lvl1enemy1jump == 6) {
				lvl1enemy1jump = 0;
			}
		}
		else if (columnlvl1enemy == 70) {
			dirlvl1enemy1 = 1;
		}

		if (columnlvl1enemy < columnhero + 3 && columnlvl1enemy > columnhero - 3 && rowlvl1enemy == rowhero + 1) {
			playerhealth -= 1;
		}
	}

}

void Movelvl1enemytow(int& lvl1enemy2jump, int& rowlvl1enemy2, int& columnlvl1enemy2, int& rowhero, int& columnhero, int& dirlvl1enemy2, char screen[][156], int& playerhealth) {

	if (dirlvl1enemy2 == 1) {
		if (columnlvl1enemy2 < 90) {
			if (lvl1enemy2jump >= 0 && lvl1enemy2jump < 3) {
				columnlvl1enemy2 += 1;
				rowlvl1enemy2 -= 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump >= 3 && lvl1enemy2jump < 6) {
				columnlvl1enemy2 += 1;
				rowlvl1enemy2 += 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump == 6) {
				lvl1enemy2jump = 0;
			}
		}
		else if (columnlvl1enemy2 == 90) {
			dirlvl1enemy2 = 0;
		}

		if (columnlvl1enemy2 < columnhero + 1 && columnlvl1enemy2 > columnhero - 1 && rowlvl1enemy2 <= rowhero + 1) {
			playerhealth -= 1;
		}
	}
	else if (dirlvl1enemy2 == 0) {
		if (columnlvl1enemy2 > 30) {
			if (lvl1enemy2jump >= 0 && lvl1enemy2jump < 3) {
				columnlvl1enemy2 -= 1;
				rowlvl1enemy2 -= 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump >= 3 && lvl1enemy2jump < 6) {
				columnlvl1enemy2 -= 1;
				rowlvl1enemy2 += 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump == 6) {
				lvl1enemy2jump = 0;
			}
		}
		else if (columnlvl1enemy2 == 30) {
			dirlvl1enemy2 = 1;
		}

		if (columnlvl1enemy2 < columnhero + 1 && columnlvl1enemy2 > columnhero - 1 && rowlvl1enemy2 <= rowhero + 1) {
			playerhealth -= 1;
		}
	}

}

void Movelvl1enemythree(int& click, int& rowbomb, int& colbomb, int& lvl1enemy2jump, int& rowlvl1enemy2, int& columnlvl1enemy2, int& rowhero, int& columnhero, int& dirlvl1enemy2, char screen[][156], int& playerhealth) {

	if (dirlvl1enemy2 == 1) {
		if (columnlvl1enemy2 < 138) {

			if (lvl1enemy2jump >= 0 && lvl1enemy2jump < 10) {
				columnlvl1enemy2 += 1;
				rowlvl1enemy2 -= 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump >= 10 && lvl1enemy2jump < 20) {
				columnlvl1enemy2 += 1;
				rowlvl1enemy2 += 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump == 20) {
				lvl1enemy2jump = 0;
				rowbomb = rowlvl1enemy2 + 10;
				colbomb = columnlvl1enemy2;
				click = 1;
			}
		}
		else if (columnlvl1enemy2 == 138) {
			dirlvl1enemy2 = 0;
		}

		//if (columnlvl1enemy2 < columnhero + 1 && columnlvl1enemy2 > columnhero - 1 && rowlvl1enemy2 < rowhero) {
		//	playerhealth -= 1;
		//}
	}
	else if (dirlvl1enemy2 == 0) {
		if (columnlvl1enemy2 > 18) {
			if (lvl1enemy2jump >= 0 && lvl1enemy2jump < 10) {
				columnlvl1enemy2 -= 1;
				rowlvl1enemy2 -= 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump >= 10 && lvl1enemy2jump < 20) {
				columnlvl1enemy2 -= 1;
				rowlvl1enemy2 += 1;
				lvl1enemy2jump++;
			}
			else if (lvl1enemy2jump == 20) {
				lvl1enemy2jump = 0;
				rowbomb = rowlvl1enemy2 + 10;
				colbomb = columnlvl1enemy2;
				click = 1;
			}
		}
		else if (columnlvl1enemy2 == 18) {
			dirlvl1enemy2 = 1;
		}

		//if (columnlvl1enemy2 < columnhero + 1 && columnlvl1enemy2 > columnhero - 1 && rowlvl1enemy2 == rowhero) {
		//	playerhealth -= 1;
		//}
	}

}

void Movelvl2enemyone(int& direction, int& rowlvl1enemy, int& columnlvl1enemy, int& rowhero, int& columnhero, char screen[][156], int& playerhealth) {

	if (columnlvl1enemy < columnhero + 15 && direction == 1) {

		if (columnlvl1enemy < 145) {
			columnlvl1enemy += 1;

		}


		if (columnlvl1enemy < columnhero + 1 && columnlvl1enemy > columnhero - 1 && rowlvl1enemy == rowhero + 1) {
			playerhealth -= 1;
		}
	}
	else if (columnlvl1enemy >= columnhero + 15) {
		direction = 0;
	}


	if (columnlvl1enemy > columnhero - 15 && direction == 0) {
		if (columnlvl1enemy > 10) {
			columnlvl1enemy -= 1;

		}


		if (columnlvl1enemy < columnhero + 1 && columnlvl1enemy > columnhero - 1 && rowlvl1enemy == rowhero + 1) {
			playerhealth -= 1;
		}
	}
	else if (columnlvl1enemy <= columnhero - 15) {
		direction = 1;
	}

}

void Movelvl2enemytow(int& lvl2enemy2jump, int& direction, int& rowlvl1enemy, int& columnlvl1enemy, int& rowhero, int& columnhero, char screen[][156], int& playerhealth) {

	//if (screen[rowlvl1enemy + 10][columnlvl1enemy] == ' ' && lvl2enemy2jump == 0) {
	//	rowlvl1enemy -= 1;
	//}

	if (columnlvl1enemy < columnhero + 25 && direction == 1 || direction == 1 && lvl2enemy2jump != 0) {

		if (columnlvl1enemy < 145) {
			if (rowlvl1enemy == 158) {

				columnlvl1enemy += 1;
			}

			if (screen[rowlvl1enemy + 6][columnlvl1enemy + 16] == '<' || screen[rowlvl1enemy + 6][columnlvl1enemy + 17] == '<' || screen[rowlvl1enemy + 6][columnlvl1enemy + 18] == '<' || screen[rowlvl1enemy + 6][columnlvl1enemy + 19] == '<' || screen[rowlvl1enemy + 6][columnlvl1enemy + 20] == '<' || screen[rowlvl1enemy + 6][columnlvl1enemy + 21] == '<' || screen[rowlvl1enemy + 6][columnlvl1enemy + 22] == '<') {
				lvl2enemy2jump = 1;
			}
			if (lvl2enemy2jump > 0) {

				if (lvl2enemy2jump >= 1 && lvl2enemy2jump < 10) {
					rowlvl1enemy -= 2;
					columnlvl1enemy += 1;
					lvl2enemy2jump += 1;
				}
				else if (lvl2enemy2jump >= 10 && lvl2enemy2jump < 15) {
					columnlvl1enemy += 2;
					lvl2enemy2jump += 1;
				}
				else if (lvl2enemy2jump >= 15 && lvl2enemy2jump < 33) {
					rowlvl1enemy += 1;
					columnlvl1enemy += 2;
					lvl2enemy2jump += 1;
				}
				else if (lvl2enemy2jump == 33) {
					lvl2enemy2jump = 0;
				}
			}

		}


		if (columnlvl1enemy < columnhero + 1 && columnlvl1enemy > columnhero - 1 && rowhero == 157) {
			playerhealth -= 1;
		}
	}
	else if (columnlvl1enemy >= columnhero + 25 && lvl2enemy2jump == 0) {
		direction = 0;
	}

	if (columnlvl1enemy > columnhero - 25 && direction == 0 || direction == 0 && lvl2enemy2jump != 0) {
		if (columnlvl1enemy > 10) {

			if (rowlvl1enemy == 158) {

				columnlvl1enemy -= 1;
			}

			if (screen[rowlvl1enemy + 6][columnlvl1enemy - 16] == '>' || screen[rowlvl1enemy + 6][columnlvl1enemy - 17] == '>' || screen[rowlvl1enemy + 6][columnlvl1enemy - 18] == '>' || screen[rowlvl1enemy + 6][columnlvl1enemy - 19] == '>' || screen[rowlvl1enemy + 6][columnlvl1enemy - 20] == '>' || screen[rowlvl1enemy + 6][columnlvl1enemy - 21] == '>' || screen[rowlvl1enemy + 6][columnlvl1enemy - 22] == '>') {
				lvl2enemy2jump = 1;
			}
			if (lvl2enemy2jump > 0) {

				if (lvl2enemy2jump >= 1 && lvl2enemy2jump < 10) {
					rowlvl1enemy -= 2;
					columnlvl1enemy -= 1;
					lvl2enemy2jump += 1;
				}
				else if (lvl2enemy2jump >= 10 && lvl2enemy2jump < 15) {
					columnlvl1enemy -= 2;
					lvl2enemy2jump += 1;
				}
				else if (lvl2enemy2jump >= 15 && lvl2enemy2jump < 33) {
					rowlvl1enemy += 1;
					columnlvl1enemy -= 2;
					lvl2enemy2jump += 1;
				}
				else if (lvl2enemy2jump == 33) {
					lvl2enemy2jump = 0;
				}
			}

		}


		if (columnlvl1enemy < columnhero + 1 && columnlvl1enemy > columnhero - 1 && rowhero == 157) {
			playerhealth -= 1;
		}
	}
	else if (columnlvl1enemy <= columnhero - 25 && lvl2enemy2jump == 0) {
		direction = 1;
	}

}

void Moveenemy(int& rowlvl2enemy, int& columnlvl2enemy, int& rowhero, int& columnhero, char screen[][156], int& playerhealth, int& directionenemy1lvl2) {
	int ct = 0;

	if (columnhero >= 80) {
		if (directionenemy1lvl2 == 1) {
			if (columnlvl2enemy == 80) {
				directionenemy1lvl2 *= -1;
			}
		}
		else {
			if (columnlvl2enemy == 175) {
				directionenemy1lvl2 *= -1;
			}
		}
		columnlvl2enemy -= directionenemy1lvl2;
	}

	if (columnhero == columnlvl2enemy) {
		playerhealth--;
	}

}

void Moveenemy2(int& rowlvl2enemy2, int& columnlvl2enemy2, int& rowhero, int& columnhero, char screen[][156], int& playerhealth, int& directionenemy2lvl2) {
	int ct = 0;

	if (columnhero >= 180 && rowhero == rowlvl2enemy2) {
		if (directionenemy2lvl2 == 1) {
			if (columnlvl2enemy2 == 180) {
				directionenemy2lvl2 *= -1;
			}
		}
		else {
			if (columnlvl2enemy2 == 250) {
				directionenemy2lvl2 *= -1;
			}
		}
		columnlvl2enemy2 -= directionenemy2lvl2;
	}

	if (columnhero == columnlvl2enemy2) {
		playerhealth--;
	}

}

void Moveenemy3(int& rowlvl3enemy3, int& columnlvl3enemy3, int& rowhero, int& columnhero, int& directionenemy3lvl3, char screen[][156], int& playerhealth) {

	if (columnhero >= 15 && rowlvl3enemy3 == rowhero) {
		if (directionenemy3lvl3 == 1) {
			if (columnlvl3enemy3 == 15) {
				directionenemy3lvl3 *= -1;
			}
		}
		else {
			if (columnlvl3enemy3 == 135) {
				directionenemy3lvl3 *= -1;
			}
		}
		columnlvl3enemy3 -= directionenemy3lvl3;
	}

	if (columnhero == columnlvl3enemy3) {
		playerhealth--;
	}

}

void Moveenemy4(int& rowlvl3enemy4, int& columnlvl2enemy4, int& rowhero, int& columnhero, int& directionenemy4lvl3, char screen[][156], int& playerhealth) {

	if (columnhero <= 285 && rowlvl3enemy4 == rowhero) {
		if (directionenemy4lvl3 == -1) {
			if (columnlvl2enemy4 == 265) {
				directionenemy4lvl3 *= -1;
			}
		}
		else {
			if (columnlvl2enemy4 == 170) {
				directionenemy4lvl3 *= -1;
			}
		}
		columnlvl2enemy4 -= directionenemy4lvl3;
	}

	if (columnhero == columnlvl2enemy4) {
		playerhealth--;
	}

}

void MoveHero1(int& columnlvl2enemy2, int& rowbiglaser, int& rowlvl2enemy2, int& rowelevator1, int& rowelevator2, int& rowelevator3, int& directionelevator, int& directionelevator2, int& directionelevatorlvl3, int& lvl1enemy3health, int& lvl1enemy2health, int& MAG, int& bulletdirection, int& verscroll, int& ctofjump, int& airborne, int& lvl1enemyhealth, int& lvl2enemy1health, int& lvl2enemy2health, int& singlebullet, int& rowbullet, int& columnbullet, int& playerhealth, int& rowhero, int& columnhero, int& rvrsjump, int& TOGGLEGRAVITY, int& ctofgravity, char UserMove, int& rows, int& columns, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, char screen[][156], int& level) {

	//LEVEL 1 ONLY!!!!!!



	if (UserMove == 'c') {

		if (level == 1) {
			playerhealth = 5;
			lvl1enemyhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			level = 1;
			rowhero = 228;
			columnhero = 12;
			rows = 40;
			columns = 156;
			verscroll = rowhero - 26;
			MAG = 30;
			rowelevator1 = 213;
			rowelevator2 = 192;

			directionelevator = 0;
			directionelevator2 = 1;

		}
		else if (level == 2) {
			playerhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			rowhero = 228;
			columnhero = 12;
			verscroll = rowhero - 26;
			MAG = 10;
			rowelevator3 = 238;
			directionelevatorlvl3 = 0;
			rowlvl2enemy2 = 158;
			columnlvl2enemy2 = 141;
			rowbiglaser = 180;

		}

	}


	if (UserMove == 'r') {



		playerhealth = 5;
		lvl1enemyhealth = 5;
		lvl1enemy2health = 5;
		lvl1enemy3health = 5;
		lvl2enemy1health = 5;
		lvl2enemy2health = 5;
		level = 1;
		rowhero = 228;
		columnhero = 12;
		rows = 40;
		columns = 156;
		verscroll = rowhero - 26;
		MAG = 30;
		rowelevator1 = 213;
		rowelevator2 = 192;
		rowelevator3 = 238;

		directionelevator = 0;
		directionelevator2 = 1;
		directionelevatorlvl3 = 0;

		rowlvl2enemy2 = 158;
		columnlvl2enemy2 = 141;
		rowbiglaser = 180;

	}

	if (UserMove == 'u') {
		if (MAG > 0) {

			if (singlebullet == 0) {

				MAG -= 1;
				columnbullet = columnhero;
				rowbullet = rowhero - 1;
			}
			singlebullet = 1;
			bulletdirection = 3;
		}


	}


	if (UserMove == 'g') {

		if (MAG > 0) {

			if (singlebullet == 0) {

				MAG -= 1;
				columnbullet = columnhero - 6;
				rowbullet = rowhero + 7;
			}
			singlebullet = 1;
			bulletdirection = 2;
		}


	}


	if (UserMove == 'l') {

		if (MAG > 0) {

			if (singlebullet == 0) {

				MAG -= 1;
				columnbullet = columnhero + 6;
				rowbullet = rowhero + 7;
			}
			singlebullet = 1;
			bulletdirection = 1;
		}

	}


	if (UserMove == 'w') {
		if (level == 1 && rowhero < 230 && rowhero > 208 && columnhero > 142 && columnhero <= 150) {
			rowhero--;
			verscroll--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 1;
		}
		else if (level == 2 && rowhero + 11 <= 106 && columnhero == 75) {
			rowhero--;
			//verscroll++;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 0;
			if (rowhero + 11 == 106 - 26) {
				level = 4;
			}
		}

	}

	if (UserMove == 's') {
		if (level == 1 && rowhero < 223 && rowhero >= 207 && columnhero > 142 && columnhero <= 150) {
			rowhero++;
			verscroll++;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 1;
		}
		else if (level == 2 && rowhero + 11 < 106 && columnhero == 75) {
			rowhero++;
			//verscroll = 137;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 0;
		}

	}





	//MOVE RIGHT:::::::::::::
	if (UserMove == 'D') {
		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 6] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 7] == ' ' && screen[rowhero + 6][columnhero + 7] == ' ' && screen[rowhero + 7][columnhero + 7] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 9][columnhero + 4] == ' ' && screen[rowhero + 10][columnhero + 5] == ' ') {
			if (columnhero < 151) {
				columnhero += 3;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				ctofgravity = 0;
				rvrsjump = 0;
				TOGGLEGRAVITY = 1;
			}
		}
	}


	if (UserMove == 'd') {
		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 6] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 7] == ' ' && screen[rowhero + 6][columnhero + 7] == ' ' && screen[rowhero + 7][columnhero + 7] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 9][columnhero + 4] == ' ' && screen[rowhero + 10][columnhero + 5] == ' ') {
			if (columnhero < 151) {
				columnhero++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				ctofgravity = 0;
				rvrsjump = 0;
				TOGGLEGRAVITY = 1;
			}
		}
		//control jump:
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero < 151) {
				columnhero++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				ctofgravity = 0;
				rvrsjump = 0;
				TOGGLEGRAVITY = 1;
			}
		}
		//stairs:
		else if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 6] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 7] == ' ' && screen[rowhero + 6][columnhero + 7] == ' ' && screen[rowhero + 7][columnhero + 7] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 9][columnhero + 4] == ' ' && screen[rowhero + 10][columnhero + 5] != ' ') {
			if (columnhero < 151) {
				rowhero--;
				columnhero++;
				verscroll--;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				ctofgravity = 0;
				rvrsjump = 0;
				TOGGLEGRAVITY = 1;
			}
		}
		//ladder1:
		else if (level == 1 && rowhero <= 224 && rowhero >= 213 && columnhero >= 137 && columnhero < 150) {
			columnhero++;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 1;
		}
	}







	//MOVE LEFT::::::::::::::::

	if (UserMove == 'A') {
		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 6] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 7] == ' ' && screen[rowhero + 6][columnhero - 7] == ' ' && screen[rowhero + 7][columnhero - 7] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 9][columnhero - 4] == ' ' && screen[rowhero + 10][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				columnhero -= 3;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

			}
		}
	}



	if (UserMove == 'a') {

		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 6] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 7] == ' ' && screen[rowhero + 6][columnhero - 7] == ' ' && screen[rowhero + 7][columnhero - 7] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 9][columnhero - 4] == ' ' && screen[rowhero + 10][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				columnhero--;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero > 3) {
				columnhero--;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

			}
		}
		//stairs:
		else if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 6] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 7] == ' ' && screen[rowhero + 6][columnhero - 7] == ' ' && screen[rowhero + 7][columnhero - 7] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 9][columnhero - 4] == ' ' && screen[rowhero + 10][columnhero - 5] != ' ') {
			if (columnhero > 3) {
				rowhero--;
				columnhero--;
				verscroll--;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

			}
		}
		//ladder1:
		else if (level == 1 && rowhero <= 227 && rowhero >= 210 && columnhero >= 145 && columnhero <= 150) {
			columnhero--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			rvrsjump = 0;
			ctofgravity = 0;
			TOGGLEGRAVITY = 1;
		}
	}
	//if (columnhero + 6 >= 138 && rowhero < 6) {
	//	level = 2;
	//	rowhero = 31;
	//	columnhero = 12;
	//}

}

void MoveHero2(int& lcond, int& airborne, int& lvl1enemyhealth, int& lvl2enemy1health, int& lvl2enemy2health, int& playerhealth, int& rowbullet, int& columnbullet, int& singlebullet, int& rowhero, int& columnhero, int& rvrsjump, int& TOGGLEGRAVITY, int& ctofgravity, char UserMove, int& rows, int& columns, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& scrollcolumn, char screen[][156], int& level, int& C, int& column2, int& F) {

	int ct1 = 0;
	int ct2 = 0;
	int ctj = 0;
	int column = columnhero - 5;
	//int column2 = columnhero + 5;
	int A = 0;


	if (UserMove == 'c') {

		if (level == 1) {
			playerhealth = 5;
			lvl1enemyhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			level = 1;
			rowhero = 31;
			columnhero = 12;
			rows = 40;
			columns = 156;
		}
		else if (level == 2) {
			playerhealth = 5;
			lvl2enemy1health = 5;
			lvl2enemy2health = 5;
			rowhero = 31;
			columnhero = 12;

		}

	}



	if (UserMove == 'R') {

		playerhealth = 5;
		lvl1enemyhealth = 5;
		lvl2enemy1health = 5;
		lvl2enemy2health = 5;
		level = 1;
		rowhero = 31;
		columnhero = 12;
		rows = 40;
		columns = 156;


	}

	if (UserMove == 'l') {

		if (singlebullet == 0) {

			columnbullet = columnhero + 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;

	}

	if (UserMove == 'w' && rowhero < 11 && rowhero > 2) {
		if (rowhero > 0) {
			rowhero--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			TOGGLEGRAVITY = 0;
		}

	}
	if (UserMove == 'd') {


		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {
			if (column2 < 297 && columnhero < 296) {
				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				//scroll:
				if (columns < 300) {
					columns += 1;
				}

				F++;
			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (column2 < 297 && columnhero < 296) {
				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				//scroll:
				if (columns < 300) {
					columns += 1;
				}

				F++;
			}
		}
	}
	if (UserMove == 'a') {

		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				if (columns > 149) {
					columns -= 1;
				}
			}

		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero > 3) {
				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				if (columns > 149) {
					columns -= 1;
				}
			}
		}
	}


	if (rowhero == 31 && columnhero == 186) {
		level = 3;
		rowhero = 31;
		columnhero = 156;
		lcond = 1;
	}



	if (ct1 == 5) {
		rows++;

	}
	if (ct2 == 5) {
		rows--;
	}
}

void MoveHero3(int& ctofjump, int& lcond, int& bulletdirection, int& airborne, int& lvl1enemyhealth, int& lvl2enemy1health, int& lvl2enemy2health, int& playerhealth, int& rowbullet, int& columnbullet, int& singlebullet, int& rowhero, int& columnhero, int& rvrsjump, int& TOGGLEGRAVITY, int& ctofgravity, char UserMove, int& rows, int& columns, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& scrollcolumn, char screen[][156], int& level, int& C, int& column2, int& F) {

	int ct1 = 0;
	int ct2 = 0;
	int ctj = 0;
	int column = columnhero - 5;
	//int column2 = columnhero + 5;
	int A = 0;


	if (UserMove == 'c') {

		if (level == 3) {
			playerhealth = 5;
			rowhero = 31;
			columnhero = 156;
			lcond = 1;
			//JUMPRIGHT = 0;
			//JUMPLEFT = 0;
			//ctofjump = 40;
		}

	}



	if (UserMove == 'R') {

		playerhealth = 5;
		lvl1enemyhealth = 5;
		lvl2enemy1health = 5;
		lvl2enemy2health = 5;
		level = 1;
		rowhero = 31;
		columnhero = 12;
		rows = 40;
		columns = 156;


	}

	if (UserMove == 'u') {

		if (singlebullet == 0) {

			columnbullet = columnhero;
			rowbullet = rowhero - 1;
		}
		singlebullet = 1;
		bulletdirection = 3;

	}


	if (UserMove == 'g') {

		if (singlebullet == 0) {

			columnbullet = columnhero - 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;
		bulletdirection = 2;

	}


	if (UserMove == 'l') {

		if (singlebullet == 0) {

			columnbullet = columnhero + 6;
			rowbullet = rowhero + 5;
		}
		singlebullet = 1;
		bulletdirection = 1;

	}

	if (UserMove == 'w' && rowhero < 11 && rowhero > 2) {
		if (rowhero > 0) {
			rowhero--;
			JUMP = 0;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;
			TOGGLEGRAVITY = 0;
		}

	}
	if (UserMove == 'd') {

		if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 5] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 6] == ' ' && screen[rowhero + 6][columnhero + 4] == ' ' && screen[rowhero + 7][columnhero + 5] == ' ') {
			if (column2 < 297 && columnhero < 296) {
				if (rvrsjump > 20 || rvrsjump == 0) {
					columnhero++;
					ct1++;
					JUMP = 0;
					JUMPRIGHT = 0;
					JUMPLEFT = 0;
					rvrsjump = 0;
					ctofgravity = 0;
					TOGGLEGRAVITY = 1;

					//scroll:
					if (columns < 300) {
						columns += 1;
					}

					F++;
				}

			}
		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (column2 < 297 && columnhero < 296) {

				columnhero++;
				ct1++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				//scroll:
				if (columns < 300) {
					columns += 1;
				}

				F++;


			}
		}
	}
	if (UserMove == 'a') {

		if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 5] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 6] == ' ' && screen[rowhero + 6][columnhero - 4] == ' ' && screen[rowhero + 7][columnhero - 5] == ' ') {
			if (columnhero > 3) {
				if (rvrsjump > 20 || rvrsjump == 0) {
					columnhero--;
					ct2++;
					JUMP = 0;
					JUMPRIGHT = 0;
					JUMPLEFT = 0;
					rvrsjump = 0;
					ctofgravity = 0;
					TOGGLEGRAVITY = 1;

					if (columns > 149) {
						columns -= 1;
					}
				}

			}

		}
		else if (JUMP == 1 || JUMPRIGHT == 1 || JUMPLEFT == 1 || airborne == 1) {
			if (columnhero > 3) {

				columnhero--;
				ct2++;
				JUMP = 0;
				JUMPRIGHT = 0;
				JUMPLEFT = 0;
				rvrsjump = 0;
				ctofgravity = 0;
				TOGGLEGRAVITY = 1;

				if (columns > 149) {
					columns -= 1;
				}


			}
		}
	}

	if (ct1 == 5) {
		rows++;

	}
	if (ct2 == 5) {
		rows--;
	}
}

void Screen1(int& verscroll, char screen[240][156], int rowhero, int columnhero, int& rows, int& columns) {

	system("cls");

	for (int r = verscroll; r < verscroll + 40; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}

void Screen2(int& verscroll, char screen[][156], int rowhero, int columnhero, int& rows, int& columns, int& C, int& column2, int& F, int& scrollcolumn) {

	system("cls");

	for (int r = verscroll; r < verscroll + 40; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}

void Screen3(int& scroll3, char screen[][156], int rowhero, int columnhero, int& rows, int& columns) {

	if (columnhero > 145 && columnhero < 156) {
		system("cls");

		int column = columnhero - 65;
		scroll3 = columnhero - 65;
		for (int r = 0; r < rows; r++) {
			for (int c = column; c < column + 156; c++) {
				cout << screen[r][c];
				if (c < 1) {
					c = 2;
				}
			}
			if (column > 156) {
				column = 156;
			}
			cout << endl;
		}

		cout.flush();
	}
	else if (columnhero < 145) {
		system("cls");

		int column = columnhero - 10;
		scroll3 = 0;

		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < 152; c++) {
				cout << screen[r][c];
				if (c < 1) {
					c = 2;
				}
			}
			if (column > 156) {
				column = 156;
			}
			cout << endl;
		}

		cout.flush();
	}
	else if (columnhero > 156) {
		system("cls");

		int column = columnhero - 10;
		scroll3 = 156;

		for (int r = 0; r < rows; r++) {
			for (int c = 156; c < 300; c++) {
				cout << screen[r][c];
				if (c < 1) {
					c = 2;
				}
			}
			if (column > 156) {
				column = 156;
			}
			cout << endl;
		}

		cout.flush();
	}

}

void jumpnow(int& verscroll, int& playerhealth, int& level, int& rowhero, int& columnhero, int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump, char screen[][156]) {

	if (JUMP == 1) {
		if (rvrsjump < 8) {
			if (screen[rowhero - 1][columnhero] == ' ' && screen[rowhero - 1][columnhero - 1] == ' ' && screen[rowhero - 1][columnhero + 1] == ' ' && rowhero - 1 != 0) {
				rowhero -= 1;
				verscroll -= 1;
				ctofjump++;
			}
		}
		else {
			if (screen[rowhero + 11][columnhero] == ' ' && screen[rowhero + 11][columnhero + 1] == ' ' && screen[rowhero + 11][columnhero + 2] == ' ' && screen[rowhero + 11][columnhero + 3] == ' ' && screen[rowhero + 11][columnhero + 4] == ' ' && screen[rowhero + 11][columnhero] != 'x') {
				rowhero += 1;
				verscroll += 1;
				ctofjump++;
			}
		}
		rvrsjump++;
	}

	if (JUMPRIGHT == 1) {
		//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
		//	playerhealth = 0;
		//}
		if (rvrsjump < 8) {
			if (screen[rowhero - 1][columnhero] == ' ' && screen[rowhero - 1][columnhero - 1] == ' ' && screen[rowhero - 1][columnhero + 1] == ' ' && rowhero - 1 != 0 && screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 6] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 7] == ' ' && screen[rowhero + 6][columnhero + 7] == ' ' && screen[rowhero + 7][columnhero + 7] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 9][columnhero + 4] == ' ' && screen[rowhero + 10][columnhero + 5] == ' ') {
				//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
				//	playerhealth = 0;
				//}
				rowhero -= 1;
				verscroll -= 1;
				columnhero += 2;
				ctofjump++;

			}
		}
		else if (rvrsjump > 8 && rvrsjump < 13) {
			if (screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 6] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 7] == ' ' && screen[rowhero + 6][columnhero + 7] == ' ' && screen[rowhero + 7][columnhero + 7] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 9][columnhero + 4] == ' ' && screen[rowhero + 10][columnhero + 5] == ' ') {

				//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
				//	playerhealth = 0;
				//}
				columnhero++;



			}
		}
		else {
			if (screen[rowhero + 11][columnhero] == ' ' && screen[rowhero + 11][columnhero + 1] == ' ' && screen[rowhero + 11][columnhero + 2] == ' ' && screen[rowhero + 11][columnhero + 3] == ' ' && screen[rowhero + 11][columnhero + 4] == ' ' && screen[rowhero + 11][columnhero] == ' ' && screen[rowhero][columnhero + 2] == ' ' && screen[rowhero + 1][columnhero + 3] == ' ' && screen[rowhero + 2][columnhero + 4] == ' ' && screen[rowhero + 3][columnhero + 6] == ' ' && screen[rowhero + 4][columnhero + 6] == ' ' && screen[rowhero + 5][columnhero + 7] == ' ' && screen[rowhero + 6][columnhero + 7] == ' ' && screen[rowhero + 7][columnhero + 7] == ' ' && screen[rowhero + 8][columnhero + 3] == ' ' && screen[rowhero + 9][columnhero + 4] == ' ' && screen[rowhero + 10][columnhero + 5] == ' ') {

				//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
				//	playerhealth = 0;
				//}
				rowhero += 1;
				verscroll += 1;
				columnhero += 2;
				ctofjump++;



			}
		}
		rvrsjump++;
	}

	if (JUMPLEFT == 1) {
		//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
		//	playerhealth = 0;
		//}
		if (rvrsjump < 8) {
			if (screen[rowhero - 1][columnhero] == ' ' && screen[rowhero - 1][columnhero - 1] == ' ' && screen[rowhero - 1][columnhero + 1] == ' ' && rowhero - 1 != 0 && screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 6] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 7] == ' ' && screen[rowhero + 6][columnhero - 7] == ' ' && screen[rowhero + 7][columnhero - 7] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 9][columnhero - 4] == ' ' && screen[rowhero + 10][columnhero - 5] == ' ') {


				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				rowhero -= 1;
				verscroll -= 1;
				columnhero -= 2;
				ctofjump++;

			}

		}
		else if (rvrsjump > 8 && rvrsjump < 13) {
			if (screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 6] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 7] == ' ' && screen[rowhero + 6][columnhero - 7] == ' ' && screen[rowhero + 7][columnhero - 7] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 9][columnhero - 4] == ' ' && screen[rowhero + 10][columnhero - 5] == ' ') {
				if (columnhero > 3) {
					//if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					//	playerhealth = 0;
					//}
					columnhero--;

				}
			}

		}
		else {
			if (screen[rowhero + 11][columnhero] == ' ' && screen[rowhero + 11][columnhero - 1] == ' ' && screen[rowhero + 11][columnhero - 2] == ' ' && screen[rowhero + 11][columnhero - 3] == ' ' && screen[rowhero + 11][columnhero - 4] == ' ' && screen[rowhero + 11][columnhero + 1] == ' ' && screen[rowhero + 11][columnhero + 2] == ' ' && screen[rowhero + 11][columnhero + 3] == ' ' && screen[rowhero + 11][columnhero + 4] == ' ' && screen[rowhero][columnhero - 2] == ' ' && screen[rowhero + 1][columnhero - 3] == ' ' && screen[rowhero + 2][columnhero - 4] == ' ' && screen[rowhero + 3][columnhero - 6] == ' ' && screen[rowhero + 4][columnhero - 6] == ' ' && screen[rowhero + 5][columnhero - 7] == ' ' && screen[rowhero + 6][columnhero - 7] == ' ' && screen[rowhero + 7][columnhero - 7] == ' ' && screen[rowhero + 8][columnhero - 3] == ' ' && screen[rowhero + 9][columnhero - 4] == ' ' && screen[rowhero + 10][columnhero - 5] == ' ') {
				if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
					playerhealth = 0;
				}
				rowhero += 1;
				verscroll += 1;
				columnhero -= 2;
				ctofjump++;

			}

		}

		rvrsjump++;
	}
}

void jump1(int& rowhero, int& columnhero, char UserMove, char screen[][156], int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump) {

	if (UserMove == 'j') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMP = 1;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;

		}
	}



	if (UserMove == 'k') {
		if (columnhero < 140) {
			if (rvrsjump > 20 || rvrsjump == 0) {
				rvrsjump = 0;
				ctofjump = 0;
				JUMPRIGHT = 1;
				JUMPLEFT = 0;
				JUMP = 0;

			}
		}
	}

	if (UserMove == 'h') {
		if (columnhero > 20) {
			if (rvrsjump > 20 || rvrsjump == 0) {
				rvrsjump = 0;
				ctofjump = 0;
				JUMPLEFT = 1;
				JUMPRIGHT = 0;
				JUMP = 0;

			}
		}
	}

	if (UserMove == 'w') {
		rvrsjump = 0;
		ctofjump = 0;
		JUMPLEFT = 0;
		JUMPRIGHT = 0;
		JUMP = 0;
	}

}

void jump2(int& rowhero, int& columnhero, char UserMove, char screen[][156], int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump) {

	if (UserMove == 'j') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMP = 1;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;

		}
	}



	if (UserMove == 'k') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPRIGHT = 1;
			JUMPLEFT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'h') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPLEFT = 1;
			JUMPRIGHT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'w') {
		rvrsjump = 0;
		ctofjump = 0;
		JUMPLEFT = 0;
		JUMPRIGHT = 0;
		JUMP = 0;
	}

}

void jump3(int& rowhero, int& columnhero, char UserMove, char screen[][156], int& ctofjump, int& JUMP, int& JUMPRIGHT, int& JUMPLEFT, int& rvrsjump) {

	if (UserMove == 'j') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMP = 1;
			JUMPRIGHT = 0;
			JUMPLEFT = 0;

		}
	}



	if (UserMove == 'k') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPRIGHT = 1;
			JUMPLEFT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'h') {
		if (rvrsjump > 20 || rvrsjump == 0) {
			rvrsjump = 0;
			ctofjump = 0;
			JUMPLEFT = 1;
			JUMPRIGHT = 0;
			JUMP = 0;

		}
	}

	if (UserMove == 'w') {
		rvrsjump = 0;
		ctofjump = 0;
		JUMPLEFT = 0;
		JUMPRIGHT = 0;
		JUMP = 0;
	}

}

void firebullets(int& vsinglebullet, int& singlebullet, int rowhero, int columnhero, char screen[][156]) {

	if (singlebullet == 1) {
		screen[rowhero + 1][columnhero + 6 + vsinglebullet] = '-';
		vsinglebullet++;
	}

	if (vsinglebullet > 298) {
		vsinglebullet = 0;
		singlebullet = 0;
	}
}

void togglegravity(int& verscroll, int& playerhealth, int& airborne, int& rowhero, int& columnhero, int& TOGGLEGRAVITY, int& ctofgravity, char screen[][156]) {

	if (screen[rowhero + 11][columnhero] == '+') {
		playerhealth = 0;
	}

	if (TOGGLEGRAVITY == 1) {
		if (screen[rowhero + 11][columnhero] == ' ' && screen[rowhero + 11][columnhero + 1] == ' ' && screen[rowhero + 11][columnhero + 2] == ' ' && screen[rowhero + 11][columnhero + 3] == ' ' && screen[rowhero + 11][columnhero + 4] == ' ' && screen[rowhero + 11][columnhero - 1] == ' ' && screen[rowhero + 11][columnhero - 2] == ' ' && screen[rowhero + 11][columnhero - 3] == ' ' && screen[rowhero + 11][columnhero - 4] == ' ') {

			airborne = 1;
			rowhero += 1;
			verscroll += 1;
			ctofgravity++;
		}
		else {
			ctofgravity = 24;
			airborne = 0;
		}
	}

	//if (rowhero - 8 == 'x') {
	//	TOGGLEGRAVITY == 0;
	//}

	if (screen[rowhero + 4][columnhero - 6] == '+' || screen[rowhero + 4][columnhero + 6] == '+') {
		playerhealth = 0;
	}
}

void youlost(char screen[][156]) {


	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 300; j++) {
			screen[i][j] = ' ';
		}
	}


	screen[20][72] = 'Y';
	screen[20][73] = 'o';
	screen[20][74] = 'u';
	screen[20][75] = ' ';
	screen[20][76] = 'L';
	screen[20][77] = 'o';
	screen[20][78] = 's';
	screen[20][79] = 't';

	screen[22][66] = 'P';
	screen[22][67] = 'r';
	screen[22][68] = 'e';
	screen[22][69] = 's';
	screen[22][70] = 's';
	screen[22][71] = ' ';
	screen[22][72] = '\'';
	screen[22][73] = 'R';
	screen[22][74] = '\'';
	screen[22][75] = ' ';
	screen[22][76] = 'T';
	screen[22][77] = 'o';
	screen[22][78] = ' ';
	screen[22][79] = 'R';
	screen[22][80] = 'e';
	screen[22][81] = 's';
	screen[22][82] = 't';
	screen[22][83] = 'a';
	screen[22][84] = 'r';
	screen[22][85] = 't';

	screen[24][66] = 'P';
	screen[24][67] = 'r';
	screen[24][68] = 'e';
	screen[24][69] = 's';
	screen[24][70] = 's';
	screen[24][71] = ' ';
	screen[24][72] = '\'';
	screen[24][73] = 'C';
	screen[24][74] = '\'';
	screen[24][75] = ' ';
	screen[24][76] = 'T';
	screen[24][77] = 'o';
	screen[24][78] = ' ';
	screen[24][79] = 'R';
	screen[24][80] = 'e';
	screen[24][81] = 's';
	screen[24][82] = 't';
	screen[24][83] = 'a';
	screen[24][84] = 'r';
	screen[24][85] = 't';
	screen[24][85] = ' ';
	screen[24][86] = 'C';
	screen[24][87] = 'h';
	screen[24][88] = 'e';
	screen[24][89] = 'c';
	screen[24][90] = 'k';
	screen[24][91] = 'p';
	screen[24][92] = 'o';
	screen[24][93] = 'i';
	screen[24][94] = 'n';
	screen[24][95] = 't';



}

void youwon(char screen[][156]) {

	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 300; j++) {
			screen[i][j] = ' ';
		}
	}


	screen[20][72] = 'Y';
	screen[20][73] = 'o';
	screen[20][74] = 'u';
	screen[20][75] = ' ';
	screen[20][76] = 'W';
	screen[20][77] = 'o';
	screen[20][78] = 'n';


	screen[22][66] = 'P';
	screen[22][67] = 'r';
	screen[22][68] = 'e';
	screen[22][69] = 's';
	screen[22][70] = 's';
	screen[22][71] = ' ';
	screen[22][72] = '\'';
	screen[22][73] = 'R';
	screen[22][74] = '\'';
	screen[22][75] = ' ';
	screen[22][76] = 'T';
	screen[22][77] = 'o';
	screen[22][78] = ' ';
	screen[22][79] = 'R';
	screen[22][80] = 'e';
	screen[22][81] = 's';
	screen[22][82] = 't';
	screen[22][83] = 'a';
	screen[22][84] = 'r';
	screen[22][85] = 't';
}

void screenlost(char screen[][156]) {

	system("cls");
	int rows = 39;
	int columns = 149;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}

void screenwon(char screen[][156]) {

	system("cls");
	int rows = 39;
	int columns = 149;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout << screen[r][c];

		}

		cout << endl;
	}

	cout.flush();
}

void moveenemy1(char screen[][156], int& rowbomb1, int& columnbomb1, int& rowlvl3enemy1, int& columnlvl3enemy1, int& ctofmove1) {
	if (ctofmove1 >= 0 && ctofmove1 < 15) {
		columnlvl3enemy1 += 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//rowbomb1 = rowlvl3enemy1 + 7;
		//columnbomb1 = columnlvl3enemy1;
		//}
	}
	else if (ctofmove1 >= 15 && ctofmove1 < 18) {
		rowlvl3enemy1 += 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//	rowbomb1 = rowlvl3enemy1 + 7;
		//	columnbomb1 = columnlvl3enemy1;
		//}

	}
	else if (ctofmove1 >= 18 && ctofmove1 < 33) {
		columnlvl3enemy1 -= 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//	rowbomb1 = rowlvl3enemy1 + 7;
		//	columnbomb1 = columnlvl3enemy1;
		//}

	}
	else if (ctofmove1 >= 33 && ctofmove1 < 36) {
		rowlvl3enemy1 -= 1;
		ctofmove1 += 1;
		//if (rowbomb1 == 38) {
		//
		//	rowbomb1 = rowlvl3enemy1 + 7;
		//	columnbomb1 = columnlvl3enemy1;
		//}

	}
	else if (ctofmove1 == 36) {
		ctofmove1 = 0;
		rowlvl3enemy1 = 16;
		columnlvl3enemy1 = 110;
	}
}

void moveenemy2(char screen[][156], int& rowbomb1, int& columnbomb1, int& rowlvl3enemy1, int& columnlvl3enemy1, int& ctofmove1) {
	if (ctofmove1 >= 0 && ctofmove1 < 15) {
		columnlvl3enemy1 -= 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1;
		}
	}
	else if (ctofmove1 >= 15 && ctofmove1 < 18) {
		rowlvl3enemy1 -= 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1 + 15;
		}

	}
	else if (ctofmove1 >= 18 && ctofmove1 < 33) {
		columnlvl3enemy1 += 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1;
		}

	}
	else if (ctofmove1 >= 33 && ctofmove1 < 36) {
		rowlvl3enemy1 += 1;
		ctofmove1 += 1;
		if (rowbomb1 == 38) {

			rowbomb1 = rowlvl3enemy1 + 7;
			columnbomb1 = columnlvl3enemy1;
		}

	}
	else if (ctofmove1 == 36) {
		ctofmove1 = 0;
	}
}

void drawlaser(char screen[][156], int& rowlvl2laser, int& columnlvl2laser) {
	screen[rowlvl2laser][columnlvl2laser] = 219;
	screen[rowlvl2laser - 1][columnlvl2laser] = 219;
	screen[rowlvl2laser][columnlvl2laser + 1] = 223;
	screen[rowlvl2laser][columnlvl2laser - 1] = 223;
	screen[rowlvl2laser - 1][columnlvl2laser + 2] = 219;
	screen[rowlvl2laser - 1][columnlvl2laser - 2] = 219;
	screen[rowlvl2laser - 2][columnlvl2laser + 3] = 220;
	screen[rowlvl2laser - 2][columnlvl2laser - 3] = 220;
	screen[rowlvl2laser + 1][columnlvl2laser] = 254;
}

void drawlaser2(char screen[][156], int& rowlvl2laser, int& columnlvl2laser) {
	screen[rowlvl2laser][columnlvl2laser] = 219;
	screen[rowlvl2laser - 1][columnlvl2laser] = 219;
	screen[rowlvl2laser][columnlvl2laser + 1] = 223;
	screen[rowlvl2laser][columnlvl2laser - 1] = 223;
	screen[rowlvl2laser - 1][columnlvl2laser + 2] = 219;
	screen[rowlvl2laser - 1][columnlvl2laser - 2] = 219;
	screen[rowlvl2laser - 2][columnlvl2laser + 3] = 220;
	screen[rowlvl2laser - 2][columnlvl2laser - 3] = 220;
	screen[rowlvl2laser + 1][columnlvl2laser] = 254;
}

void drawlaser3(char screen[][156], int& rowlvl2laser, int& columnlvl2laser) {
	screen[rowlvl2laser][columnlvl2laser] = 219;
	screen[rowlvl2laser - 1][columnlvl2laser] = 219;
	screen[rowlvl2laser][columnlvl2laser + 1] = 223;
	screen[rowlvl2laser][columnlvl2laser - 1] = 223;
	screen[rowlvl2laser - 1][columnlvl2laser + 2] = 219;
	screen[rowlvl2laser - 1][columnlvl2laser - 2] = 219;
	screen[rowlvl2laser - 2][columnlvl2laser + 3] = 220;
	screen[rowlvl2laser - 2][columnlvl2laser - 3] = 220;
	screen[rowlvl2laser + 1][columnlvl2laser] = 254;
}

void drawlaserray(char screen[][156], int& rowlvl2laser, int& columnlvl2laser) {

	screen[rowlvl2laser][columnlvl2laser] = '+';
	screen[rowlvl2laser + 1][columnlvl2laser] = '+';
	screen[rowlvl2laser + 2][columnlvl2laser] = '+';


}

void drawlaser2ray(char screen[][156], int& rowlvl2laser, int& columnlvl2laser) {

	screen[rowlvl2laser][columnlvl2laser] = '+';
	screen[rowlvl2laser + 1][columnlvl2laser] = '+';
	screen[rowlvl2laser + 2][columnlvl2laser] = '+';


}

void drawlaser3ray(char screen[][156], int& rowlvl2laser, int& columnlvl2laser) {

	screen[rowlvl2laser][columnlvl2laser] = '+';
	screen[rowlvl2laser + 1][columnlvl2laser] = '+';
	screen[rowlvl2laser + 2][columnlvl2laser] = '+';


}

void movelaser(int& rowhero, int& columnhero, int& playerhealth, char screen[][156], int& rowlvl2laserray, int& columnlvl2laser) {

	if (screen[rowlvl2laserray + 3][columnlvl2laser] == ' ') {
		rowlvl2laserray += 1;
	}
	else {
		rowlvl2laserray = 209;
	}

	if (rowlvl2laserray >= rowhero - 3 && columnlvl2laser >= columnhero - 6 && columnlvl2laser <= columnhero + 6 && rowhero > 205) {
		playerhealth -= 1;
		rowlvl2laserray = 209;
	}

}

void drawbiglaser(char screen[][156], int& row) {

	for (int i = 0; i < 156; i++) {
		screen[row][i] = '+';
	}


}

void movebiglaser(int& row, int& ct) {

	ct++;
	if (ct == 5) {
		row -= 1;
		ct = 0;
	}

}

void drawlast(char screen[][156], int& col, int& m) {
	for (int i = col; i < col + 15; i++) {
		screen[106][i] = 'X';

	}

	if (m == 68) {

	}
}

void movelast(int& col, int& rowhero, int& columnhero, int& m) {
	if (rowhero + 11 == 106 && columnhero == col + 7 && m < 68) {
		col += 2;
		columnhero += 2;
		m += 2;
	}
}

void movebomb(char screen[][156], int& rowbomb, int& colbomb, int& playerhealth, int& rowhero, int& columnhero, int& click) {


	if (click == 1) {
		screen[rowbomb][colbomb] = 147;
		if (colbomb < columnhero) {
			colbomb += 1;
			rowbomb += 1;
		}
		else if (colbomb > columnhero) {
			colbomb -= 1;
			rowbomb += 1;
		}
		else if (colbomb == columnhero) {
			rowbomb += 1;
		}
	}

	if (rowbomb == rowhero + 5 && colbomb < columnhero + 15 && colbomb > columnhero - 15) {
		playerhealth -= 1;
	}
	//click = 0;

	if (rowbomb == 193) {
		click = 0;
	}



}



void main() {
	char screen[245][156];
	int rowelevator1 = 213;
	int columnelevator1 = 5;
	int lvl1enemy1health = 5;
	int rowlvl1enemy1 = 224;
	int columnlvl1enemy1 = 130;
	int vsinglebullet = 0;
	int singlebullet = 0;
	int playerhealth = 5;
	int lvl2enemy1health = 5;
	int lvl2enemy2health = 5;
	int lvl3enemy1health = 5;
	int lvl3enemy2health = 5;
	int lvl3enemy3health = 5;
	int lvl3enemy4health = 5;
	int rowlvl3enemy2 = 16;
	int columnlvl3enemy2 = 55;
	int scrollcolumn = 0;
	int ctofgravity = 0;
	int TOGGLEGRAVITY = 0;
	int rvrsjump = 0;
	int JUMP = 0;
	int JUMPRIGHT = 0;
	int JUMPLEFT = 0;
	int ctofjump = 0;




	int level = 1;
	int columnhero = 12;
	int rowhero = 228;





	int verscroll = rowhero - 26;
	int columnbullet = 0;
	int rowbullet = 0;
	int rowlvl2enemy1 = 229;
	int columnlvl2enemy1 = 140;
	int rowlvl2enemy2 = 158;
	int columnlvl2enemy2 = 141;
	int rowlvl3enemy1 = 16;
	int columnlvl3enemy1 = 110;
	int columnelevator = 180;
	int rowlvl3enemy3 = 1;
	int columnlvl3enemy3 = 130;
	int rowlvl3enemy4 = 1;
	int columnlvl3enemy4 = 170;
	int dirlvl1enemy1 = 0;
	int directionenemy1lvl2 = 1;
	int directionenemy2lvl2 = 1;
	int directionenemy3lvl3 = 1;
	int directionenemy4lvl3 = -1;
	int directionelevator = 1;
	int directionelevator2 = 1;
	int rowelevatorlvl3 = 39;
	int columnelevatorlvl3 = 2;
	int directionelevatorlvl3 = 1;
	int rows = 40;
	int columns = 156;
	int robs1lvl2 = 30;
	int cobs1lvl2 = 3;
	int lvl2dirobs1 = 1;
	int robs2lvl2 = 25;
	int cobs2lvl2 = 394;
	int lvl2dirobs2 = -1;
	int robs3lvl2 = 23;
	int cobs3lvl2 = 149;
	int lvl2dirobs3 = 1;
	int robs1lvl3 = 35;
	int cobs1lvl3 = 165;
	int robs2lvl3 = 29;
	int cobs2lvl3 = 296;
	int robs3lvl3 = 24;
	int cobs3lvl3 = 165;
	int robs4lvl3 = 17;
	int cobs4lvl3 = 296;
	int lvl3dirocbst4 = -1;
	int lvl3dirocbst1 = 1;
	int lvl3dirocbst2 = -1;
	int lvl3dirocbst3 = 1;
	int C = 0;
	int column2 = columnhero + 138;
	int F = 0;
	int airborne = 0;
	int bulletdirection = 0;
	int lcond = 1;
	int scroll3 = 0;
	int rowbomb1 = rowlvl3enemy1 + 7;
	int columnbomb1 = columnlvl3enemy1;
	int rowbomb2 = rowlvl3enemy2 + 7;
	int columnbomb2 = columnlvl3enemy2;
	int ctofmove1 = 0;
	int ctofmove2 = 0;
	int finish = 0;
	int elevator1stat = 0;
	int rowlvl1enemy2 = 204;
	int columnlvl1enemy2 = 30;
	int lvl1enemy2health = 5;
	int dirlvl1enemy2 = 1;
	int lvl1enemy1jump = 0;
	int lvl1enemy2jump = 0;
	int columnlvl1enemy3 = 138;
	int rowlvl1enemy3 = 170;
	int lvl1enemy3health = 5;
	int lvl1enemy3jump = 0;
	int dirlvl1enemy3 = 0;
	int elevator2stat = 0;
	int rowelevator2 = 192;
	int columnelevator2 = 76;
	int MAG = 30;
	int dirlvl2enemy1 = 0;
	int rowelevator3 = 238;
	int columnelevator3 = 146;
	int elevator3stat = 0;
	int dirlvl2enemy2 = 0;
	int lvl2enemy2jump = 0;
	int rowlvl2laser = 207;
	int rowlvl2laser2 = 207;
	int rowlvl2laser3 = 207;
	int columnlvl2laser = 35;
	int columnlvl2laser2 = 82;
	int columnlvl2laser3 = 129;
	int rowlvl2laserray = rowlvl2laser + 2;
	int rowlvl2laser2ray = rowlvl2laser2 + 2;
	int rowlvl2laser3ray = rowlvl2laser3 + 2;
	int lvl2laserdelay = 0;
	int rowbiglaser = 180;
	int ctbiglaser = 0;
	int lvl2columnlast = 0;
	int mvlast = 0;
	int colbomb = columnlvl1enemy3;
	int rowbomb = rowlvl1enemy3 + 10;
	int click = 0;
	char UserMove;

	for (;;) {

		for (; !_kbhit();) {

			if (playerhealth > 0) {

				if (level == 1) {

					drawlevel1(MAG, columnlvl1enemy3, rowlvl1enemy3, lvl1enemy3health, columnlvl1enemy2, rowlvl1enemy2, lvl1enemy2health, bulletdirection, singlebullet, columnbullet, rowbullet, vsinglebullet, columnlvl1enemy1, rowlvl1enemy1, lvl1enemy1health, rowhero, columnhero, playerhealth, screen);

					DrawHero(screen, rowhero, columnhero);
					drawelevator1(columnhero, columnelevator1, screen, rowelevator1);
					moveelevator1(TOGGLEGRAVITY, rowelevator1, columnelevator1, columnhero, rowhero, elevator1stat, verscroll);
					drawelevator2(columnhero, columnelevator2, lvl1enemy3health, screen, rowelevator2);
					moveelevator2(lvl1enemy3health, level, TOGGLEGRAVITY, rowelevator2, columnelevator2, columnhero, rowhero, elevator2stat, verscroll);
					if (lvl1enemy1health > 0) {

						Drawlvl1enemyone(screen, rowlvl1enemy1, columnlvl1enemy1);
						Movelvl1enemyone(lvl1enemy1jump, rowlvl1enemy1, columnlvl1enemy1, rowhero, columnhero, dirlvl1enemy1, screen, playerhealth);
					}
					if (lvl1enemy2health > 0) {

						Drawlvl1enemytow(screen, rowlvl1enemy2, columnlvl1enemy2);
						Movelvl1enemytow(lvl1enemy2jump, rowlvl1enemy2, columnlvl1enemy2, rowhero, columnhero, dirlvl1enemy2, screen, playerhealth);
					}
					if (lvl1enemy3health > 0) {

						Drawlvl1enemythree(screen, rowlvl1enemy3, columnlvl1enemy3);
						Movelvl1enemythree(click, rowbomb, colbomb, lvl1enemy3jump, rowlvl1enemy3, columnlvl1enemy3, rowhero, columnhero, dirlvl1enemy3, screen, playerhealth);
						movebomb(screen, rowbomb, colbomb, playerhealth, rowhero, columnhero, click);
					}




					Screen1(verscroll, screen, rowhero, columnhero, rows, columns); //cout elmatrix llscreen



					if (ctofjump < 40) {
						jumpnow(verscroll, playerhealth, level, rowhero, columnhero, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump, screen);
					}
					if (ctofjump == 40) {
						JUMP = 0;
						JUMPRIGHT = 0;
						JUMPLEFT = 0;
					}

					if (ctofgravity < 40) {
						togglegravity(verscroll, playerhealth, airborne, rowhero, columnhero, TOGGLEGRAVITY, ctofgravity, screen);
					}
					if (ctofgravity == 40) {
						TOGGLEGRAVITY = 0;
					}

				}














				if (level == 2) {


					drawlevel2(MAG, bulletdirection, rowlvl2enemy2, columnlvl2enemy2, lvl2enemy2health, rowbullet, columnbullet, lvl2enemy1health, rowlvl2enemy1, columnlvl2enemy1, vsinglebullet, singlebullet, screen, rowhero, columnhero, scrollcolumn, columns, playerhealth);

					DrawHero(screen, rowhero, columnhero);
					if (lvl2enemy1health > 0) {

						Drawlvl2enemy1(screen, rowlvl2enemy1, columnlvl2enemy1);
						Movelvl2enemyone(dirlvl2enemy1, rowlvl2enemy1, columnlvl2enemy1, rowhero, columnhero, screen, playerhealth);

					}
					//if (lvl2enemy2health > 0) {
					//
					//	Drawlvl2enemy2(screen, rowlvl2enemy2, columnlvl2enemy2);
					//	Moveenemy2(rowlvl2enemy2, columnlvl2enemy2, rowhero, columnhero, screen, playerhealth, directionenemy2lvl2);
					//}

					if (lvl2enemy1health == 0) {

						drawelevator3(columnhero, columnelevator3, screen, rowelevator3);
						moveelevator3(TOGGLEGRAVITY, rowelevator3, columnelevator3, columnhero, rowhero, elevator3stat, verscroll);
					}

					if (lvl2enemy2health > 0) {
						Drawlvl2enemy2(screen, rowlvl2enemy2, columnlvl2enemy2);
						if (rowhero < 158) {

							Movelvl2enemytow(lvl2enemy2jump, dirlvl2enemy2, rowlvl2enemy2, columnlvl2enemy2, rowhero, columnhero, screen, playerhealth);
						}
					}

					drawlaser(screen, rowlvl2laser, columnlvl2laser);
					drawlaser2(screen, rowlvl2laser, columnlvl2laser2);
					drawlaser3(screen, rowlvl2laser, columnlvl2laser3);

					drawlaserray(screen, rowlvl2laserray, columnlvl2laser);
					drawlaser2ray(screen, rowlvl2laser2ray, columnlvl2laser2);
					drawlaser3ray(screen, rowlvl2laser3ray, columnlvl2laser3);

					movelaser(rowhero, columnhero, playerhealth, screen, rowlvl2laserray, columnlvl2laser);
					if (lvl2laserdelay > 5) {

						movelaser(rowhero, columnhero, playerhealth, screen, rowlvl2laser2ray, columnlvl2laser2);
					}
					if (lvl2laserdelay > 13) {

						movelaser(rowhero, columnhero, playerhealth, screen, rowlvl2laser3ray, columnlvl2laser3);
					}
					lvl2laserdelay++;

					if (lvl2enemy2health == 0) {
						if (rowhero + 11 > 107 && columnhero != 75) {
							verscroll = rowhero - 15;

						}
						drawbiglaser(screen, rowbiglaser);
						movebiglaser(rowbiglaser, ctbiglaser);
						drawlast(screen, lvl2columnlast, mvlast);
						movelast(lvl2columnlast, rowhero, columnhero, mvlast);
					}



					Screen2(verscroll, screen, rowhero, columnhero, rows, columns, C, column2, F, scrollcolumn); //cout elmatrix llscreen


					//firebullets(vsinglebullet, singlebullet, rowhero, columnhero, screen);
					if (ctofjump < 40) {
						jumpnow(verscroll, playerhealth, level, rowhero, columnhero, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump, screen);
					}
					if (ctofjump == 40) {
						JUMP = 0;
						JUMPRIGHT = 0;
						JUMPLEFT = 0;
					}

					if (ctofgravity < 40) {
						togglegravity(verscroll, playerhealth, airborne, rowhero, columnhero, TOGGLEGRAVITY, ctofgravity, screen);
					}
					if (ctofgravity == 40) {
						TOGGLEGRAVITY = 0;
					}

				}


				if (level == 4) {
					finish = 1;

					youwon(screen);
					screenwon(screen);

				}

			}
			else {
				youlost(screen);
				screenlost(screen);
			}
		}


		UserMove = _getch();


		DrawHero(screen, rowhero, columnhero);
		if (level == 1) {
			MoveHero1(columnlvl2enemy2, rowbiglaser, rowlvl2enemy2, rowelevator1, rowelevator2, rowelevator3, elevator1stat, directionelevator2, elevator3stat, lvl1enemy3health, lvl1enemy2health, MAG, bulletdirection, verscroll, ctofjump, airborne, lvl1enemy1health, lvl2enemy1health, lvl2enemy2health, singlebullet, rowbullet, columnbullet, playerhealth, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, screen, level);
			jump1(rowhero, columnhero, UserMove, screen, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump);
		}
		if (level == 2) {
			MoveHero1(columnlvl2enemy2, rowbiglaser, rowlvl2enemy2, rowelevator1, rowelevator2, rowelevator3, elevator1stat, directionelevator2, elevator3stat, lvl1enemy3health, lvl1enemy2health, MAG, bulletdirection, verscroll, ctofjump, airborne, lvl1enemy1health, lvl2enemy1health, lvl2enemy2health, singlebullet, rowbullet, columnbullet, playerhealth, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, screen, level);
			jump2(rowhero, columnhero, UserMove, screen, ctofjump, JUMP, JUMPRIGHT, JUMPLEFT, rvrsjump);
		}
		if (level == 4) {
			MoveHero1(columnlvl2enemy2, rowbiglaser, rowlvl2enemy2, rowelevator1, rowelevator2, rowelevator3, elevator1stat, directionelevator2, elevator3stat, lvl1enemy3health, lvl1enemy2health, MAG, bulletdirection, verscroll, ctofjump, airborne, lvl1enemy1health, lvl2enemy1health, lvl2enemy2health, singlebullet, rowbullet, columnbullet, playerhealth, rowhero, columnhero, rvrsjump, TOGGLEGRAVITY, ctofgravity, UserMove, rows, columns, JUMP, JUMPRIGHT, JUMPLEFT, screen, level);
		}


	}
}