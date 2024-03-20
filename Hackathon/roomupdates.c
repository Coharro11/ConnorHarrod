void create_cubicles(){
	int rmi, rmj;
	//cubicles b
	rmi = 1; rmj = 1;
	strcpy(rooms[rmi][rmj].tile[4][9].type , "cv");
	strcpy(rooms[rmi][rmj].tile[4][10].type , "dd");
	strcpy(rooms[rmi][rmj].tile[4][11].type , "cv");

	strcpy(rooms[rmi][rmj].tile[5][8].type , "ch");
	strcpy(rooms[rmi][rmj].tile[5][9].type , "cp");
	strcpy(rooms[rmi][rmj].tile[5][10].type , "ch");
	strcpy(rooms[rmi][rmj].tile[5][11].type , "ctl");

	strcpy(rooms[rmi][rmj].tile[6][8].type , "dr");
	strcpy(rooms[rmi][rmj].tile[6][9].type , "cv");
	strcpy(rooms[rmi][rmj].tile[6][10].type , "du");
	strcpy(rooms[rmi][rmj].tile[6][11].type , "cv");

	strcpy(rooms[rmi][rmj].tile[7][8].type , "ch");
	strcpy(rooms[rmi][rmj].tile[7][9].type , "ctl");

	strcpy(rooms[rmi][rmj].tile[8][8].type , "dr");
	strcpy(rooms[rmi][rmj].tile[8][9].type , "cv");
	strcpy(rooms[rmi][rmj].tile[8][10].type , "dl");

	strcpy(rooms[rmi][rmj].tile[9][8].type , "ch");
	strcpy(rooms[rmi][rmj].tile[9][9].type , "ctu");
	strcpy(rooms[rmi][rmj].tile[9][10].type , "ch");

	//cubicles A
	rmi = 1; rmj = 0;
	strcpy(rooms[rmi][rmj].tile[1][4].type , "dr");
	strcpy(rooms[rmi][rmj].tile[1][5].type , "cv");
	strcpy(rooms[rmi][rmj].tile[1][6].type , "dl");

	strcpy(rooms[rmi][rmj].tile[2][4].type , "ch");
	strcpy(rooms[rmi][rmj].tile[2][5].type , "cp");
	strcpy(rooms[rmi][rmj].tile[2][6].type , "ch");

	strcpy(rooms[rmi][rmj].tile[3][4].type , "dr");
	strcpy(rooms[rmi][rmj].tile[3][5].type , "cv");
	strcpy(rooms[rmi][rmj].tile[3][6].type , "dl");

	strcpy(rooms[rmi][rmj].tile[4][4].type , "ch");
	strcpy(rooms[rmi][rmj].tile[4][5].type , "cp");
	strcpy(rooms[rmi][rmj].tile[4][6].type , "ch");

	strcpy(rooms[rmi][rmj].tile[5][4].type , "dr");
	strcpy(rooms[rmi][rmj].tile[5][5].type , "cv");
	strcpy(rooms[rmi][rmj].tile[5][6].type , "dl");

	strcpy(rooms[rmi][rmj].tile[6][3].type , "ch");
	strcpy(rooms[rmi][rmj].tile[6][4].type , "ctd");
	strcpy(rooms[rmi][rmj].tile[6][5].type , "ctu");
	strcpy(rooms[rmi][rmj].tile[6][6].type , "ctd");

	strcpy(rooms[rmi][rmj].tile[7][3].type , "du");
	strcpy(rooms[rmi][rmj].tile[7][4].type , "cv");
	strcpy(rooms[rmi][rmj].tile[7][5].type , "du");
	strcpy(rooms[rmi][rmj].tile[7][6].type , "cv");

	//cubicles c
	rmi = 2; rmj = 1;
	strcpy(rooms[rmi][rmj].tile[7][1].type , "dd");
	strcpy(rooms[rmi][rmj].tile[7][2].type , "cv");
	strcpy(rooms[rmi][rmj].tile[7][3].type , "dd");
	strcpy(rooms[rmi][rmj].tile[7][4].type , "cv");
	strcpy(rooms[rmi][rmj].tile[7][5].type , "dd");
	strcpy(rooms[rmi][rmj].tile[7][6].type , "ctr");
	strcpy(rooms[rmi][rmj].tile[7][7].type , "ch");

	strcpy(rooms[rmi][rmj].tile[8][1].type , "ch");
	strcpy(rooms[rmi][rmj].tile[8][2].type , "cp");
	strcpy(rooms[rmi][rmj].tile[8][3].type , "ch");
	strcpy(rooms[rmi][rmj].tile[8][4].type , "cp");
	strcpy(rooms[rmi][rmj].tile[8][5].type , "ch");
	strcpy(rooms[rmi][rmj].tile[8][6].type , "ctl");
	strcpy(rooms[rmi][rmj].tile[8][7].type , "dl");

	strcpy(rooms[rmi][rmj].tile[9][1].type , "du");
	strcpy(rooms[rmi][rmj].tile[9][2].type , "cv");
	strcpy(rooms[rmi][rmj].tile[9][3].type , "du");
	strcpy(rooms[rmi][rmj].tile[9][4].type , "cv");
	strcpy(rooms[rmi][rmj].tile[9][5].type , "du");
	strcpy(rooms[rmi][rmj].tile[9][6].type , "ctr");
	strcpy(rooms[rmi][rmj].tile[9][7].type , "ch");

	strcpy(rooms[rmi][rmj].tile[10][6].type , "cv");
	strcpy(rooms[rmi][rmj].tile[10][7].type , "dl");
}