#include "includes.h"

using namespace std;

const string InputPrefix = "..\\Sets\\";
const string OutputPrefix = "..\\Out\\";

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        cout << "Zla liczba parametrow";
        return 1;
    }

    string filename(argv[1]);
    string inputFilename(InputPrefix + filename + ".in");
    string outputFilename(OutputPrefix + filename + ".ans");

    cout << "Plik wejsciowy: " << inputFilename << endl;
    cout << "Plik wyjsciowy: " << outputFilename << endl;

    fstream inFile;
    fstream outFile;
    inFile.open(inputFilename.c_str(), ios_base::in);
    outFile.open(outputFilename.c_str(), ios_base::out | ios_base::trunc);

    
    if(inFile.is_open())
        cout << "Plik wejsciowy otwarty" << endl;

    if(outFile.is_open())
        cout << "Plik wyjsciowy otwarty" << endl;

    //////////////////////////////////////////////////////////////////////////
    // Tutaj magia :)
    //////////////////////////////////////////////////////////////////////////



    //////////////////////////////////////////////////////////////////////////
    // Koniec magii
    //////////////////////////////////////////////////////////////////////////

    inFile.close();
    outFile.close();

    return 0;
}