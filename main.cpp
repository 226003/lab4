#include <stdio.h>
#include <string>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);

	string words[5][10];

	// jednostki
	words[0] = ("","jeden","dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec");
	// dziesiatki
	words[1] = ( "jedenascie","dwanascie","trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewietnascie");
	// -nastki
	words[2] = ("dziesiec","dwadziescia","trzydzieci","czterdziesci","piecdziesiat","szescdziesiat","siedemdziesiat","osiemdziesiat","dziewiecdziesiat");
	// setki 
	words[3] = ("sto","dwiescie","trzysta","czterysta","piecset","szescset","siedemset","osiemset","dziewiecset","szescset","siedemset","osiemset","dziewiecset");
	// tysiace
	words[4]=("tysiac","tysiace","tysiecy");


	int n_0 = n % 10;
	int n_1 = n % 

	
	
}