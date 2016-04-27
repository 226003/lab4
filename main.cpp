#include <iostream>
#include <cstring>
#include <cmath>

string NumberConversion (int n);

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);

	if (n == 0)
		cout << "zero";
	else if (n == 1000000)
		cout << "milion";

	
	NumberConversion(n);


	
	
}

string NumberConversion (int n)
{
	string words[5][10] = {
		{"","jeden","dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec"}
		{"jedenascie","dwanascie","trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewietnascie"}
		{"","dziesiec ","dwadziescia ","trzydzieci ","czterdziesci ","piecdziesiat "," szescdziesiat ","siedemdziesiat ","osiemdziesiat ","dziewiecdziesiat "}
		{"","sto ","dwiescie ","trzysta ","czterysta ","piecset ","szescset ","siedemset ","osiemset ","dziewiecset ","szescset ","siedemset ","osiemset ","dziewiecset "}
		{"tysiac ","tysiace ","tysiecy "}
	};

	//int digits = (int)log10(n)+1; //ilosc cyfr
	inr * index = new int[(int)log10(n)+1];
	int p = 10;





}