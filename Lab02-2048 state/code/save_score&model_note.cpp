//save score into .txt
std::ofstream output;
output.open("要存的檔名")");
/*for 迴圈
   bla bla bla 運算式
*/
std::cout << "Score of this episode:" << score << std::endl;
output <<  score << std::endl;


// store the model each 10000 episode 且自動更名 
if(n%10000==0){
    ver++;
	std::stringstream ss;
	std::string strVer;
	ss << ver;
	ss >> strVer;
	std::string strSaveFile;
	strSaveFile = "TD(0)_ver5_num" + strVer;
	tdl.save(strSaveFile);
}