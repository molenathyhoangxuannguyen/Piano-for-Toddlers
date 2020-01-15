/* L01: Intro to VS, Github, and ASCII Art
   Piano for Toddlers
	by Thy H. Nguyen

	hello-name, a class example for learning to use Visual Studio 2019
	practice with conditionals in C++
	References to original ASCII art: https://asciiart.website/index.php?art=music/pianos
	Original author: Alexander Craxton
 */  


#include <iostream>
#include <string> 
using namespace std;

int main() {
	string note;
	char stop;
	
	cout << "\n Welcome to the very first class of the \"Introduction of Piano class\"\n";


	cout << "	_____________________________ " << endl;
	cout << "	|  | | | |  |  | | | | | |  | " << endl;
	cout << "	|  | | | |  |  | | | | | |  | " << endl;
	cout << "	|  | | | |  |  | | | | | |  | " << endl;
	cout << "	|  |_| |_|  |  |_| |_| |_|  |" << endl;
	cout << "	|   |   |   |   |   |   |   |" << endl;
	cout << "	|   |   |   |   |   |   |   |" << endl;
	cout << "	|___|___|___|___|___|___|___|" << endl;


	cout << "\n Which music note and key do you want to know?\n\n";
	cin >> note;
	
	if (note == "C" || note == "c")
	{
		cout << "	_____________________________ " << endl;
		cout << "	|||| | | |  |  | | | | | |  | " << endl;
		cout << "	|||| | | |  |  | | | | | |  | " << endl;
		cout << "	|||| | | |  |  | | | | | |  | " << endl;
		cout << "	||||_| |_|  |  |_| |_| |_|  |" << endl;
		cout << "	|||||   |   |   |   |   |   |" << endl;
		cout << "	|||||   |   |   |   |   |   |" << endl;
		cout << "	|||||___|___|___|___|___|___|" << endl;
		cout << "\n This is Do (Notation: C)\n"<< endl;
	}

	else if (note == "D" || note == "d")
	{

		cout << "	_____________________________ " << endl;
		cout << "	|  | ||| |  |  | | | | | |  | " << endl;
		cout << "	|  | ||| |  |  | | | | | |  | " << endl;
		cout << "	|  | ||| |  |  | | | | | |  | " << endl;
		cout << "	|  |_|||_|  |  |_| |_| |_|  |" << endl;
		cout << "	|   |||||   |   |   |   |   |" << endl;
		cout << "	|   |||||   |   |   |   |   |" << endl;
		cout << "	|___|||||___|___|___|___|___|" << endl;
		cout << "\n This is Re (Notation: D)\n" << endl;
	}


	else if (note == "E" || note == "e")
	{

		cout << "	_____________________________ " << endl;
		cout << "	|  | | | ||||  | | | | | |  | " << endl;
		cout << "	|  | | | ||||  | | | | | |  | " << endl;
		cout << "	|  | | | ||||  | | | | | |  | " << endl;
		cout << "	|  |_| |_||||  |_| |_| |_|  |" << endl;
		cout << "	|   |   |||||   |   |   |   |" << endl;
		cout << "	|   |   |||||   |   |   |   |" << endl;
		cout << "	|___|___|||||___|___|___|___|" << endl;
		cout << "\n This is Mi (Notation: E)\n" << endl;
	}


	else if (note == "F" || note == "f")
	{

		cout << "	_____________________________ " << endl;
		cout << "	|  | | | |  |||| | | | | |  | " << endl;
		cout << "	|  | | | |  |||| | | | | |  | " << endl;
		cout << "	|  | | | |  |||| | | | | |  | " << endl;
		cout << "	|  |_| |_|  ||||_| |_| |_|  |" << endl;
		cout << "	|   |   |   |||||   |   |   |" << endl;
		cout << "	|   |   |   |||||   |   |   |   |" << endl;
		cout << "	|___|___|___|||||___|___|___|" << endl;
		cout << "\n This is Fa (Notation: F)\n" << endl;
	}


	else if (note == "G" || note == "g")
	{
		cout << "	_____________________________ " << endl;
		cout << "	|  | | | |  |  | ||| | | |  | " << endl;
		cout << "	|  | | | |  |  | ||| | | |  | " << endl;
		cout << "	|  | | | |  |  | ||| | | |  | " << endl;
		cout << "	|  |_| |_|  |  |_|||_| |_|  |" << endl;
		cout << "	|   |   |   |   |||||   |   |" << endl;
		cout << "	|   |   |   |   |||||   |   |" << endl;
		cout << "	|___|___|___|___|||||___|___|" << endl;
		cout << "\n This is Sol (Notation: G)\n" << endl;
	}


	else if (note == "A" || note == "a")
	{

		cout << "	_____________________________ " << endl;
		cout << "	|  | | | |  |  | | | ||| |  | " << endl;
		cout << "	|  | | | |  |  | | | ||| |  | " << endl;
		cout << "	|  | | | |  |  | | | ||| |  | " << endl;
		cout << "	|  |_| |_|  |  |_| |_|||_|  |" << endl;
		cout << "	|   |   |   |   |   |||||   |" << endl;
		cout << "	|   |   |   |   |   |||||   |" << endl;
		cout << "	|___|___|___|___|___|||||___|" << endl;
		cout << "\n This is La (Notation: A)\n" << endl;
	}


	else if (note == "B" || note == "b")
	{
		cout << "	_____________________________ " << endl;
		cout << "	|  | | | |  |  | | | | | |||| " << endl;
		cout << "	|  | | | |  |  | | | | | |||| " << endl;
		cout << "	|  | | | |  |  | | | | | |||| " << endl;
		cout << "	|  |_| |_|  |  |_| |_| |_||||" << endl;
		cout << "	|   |   |   |   |   |   |||||" << endl;
		cout << "	|   |   |   |   |   |   |||||" << endl;
		cout << "	|___|___|___|___|___|___|||||" << endl;
		cout << "\n This is Si (Notation: B)\n" << endl;
	}

	else
	{
		cout << "\n This is not one of the seven keys of the piano! " <<endl;

	}

	cout << "\n The next session will be about \"piano cords\"! \n\n The piano class is to be continued soon!" << endl;
/*
	cout << "           _____________________________________ " << endl;
	cout << "         //_________________(o)_________________\\ " << endl;
	cout << endl;
	cout << "         || > Hello,                            || " << endl;
	cout << "            > " << yourname << "!" << endl;
	cout << "         || > Welcome to CSC 236!               || " << endl;
	cout << "            > We're happy you are here," << endl;
	cout << "         || > and want to help!                 || " << endl;
	cout << "                       - Dr. Jan and TAs" << endl;
	cout << "         ||                                     || " << endl;
	cout << endl;
	cout << "         ||_____________________________________|| " << endl;
	cout << "        /_______________________________________ \\ " << endl;
	cout << "       /_| _| _| _| _| _| _| _| _| _| _| _| _| _| \\ " << endl;
	cout << "      /____| _| _| _| _| _| _| _| _| _| _| _| ___| \\ " << endl;		
	cout << "     /___| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\ " << endl;
	cout << "    /__| _| _| _| _| _| _| _| _| _| _| _| _| _| ___  \\ " << endl;
	cout << "   /_| _| _| _| _|______________________|  _| _|_|_|  \\ " << endl;
	cout << "  /________________/                  \\________________\\ " << endl;
	cout << " (________________/____________________\\_______________) " << endl;


*/
	cin >> stop; //Keeps window open in some cases
	return 0;
}
