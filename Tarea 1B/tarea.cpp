#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


int * matrices(string filename)
{ 
    string line;
    int size,pos1=0,pos2=0;
    ifstream myfile (filename);
	myfile>>size;
    int array[size][size]; 
    for(int i=0;i<size;i++)
    {
	for(int j=0;j<size;j++) array[i][j]=0;
    }

    if (myfile.is_open())
    {
	while (getline(myfile,line))
	{

	    if(line!=to_string(size))
	    {
		stringstream (line) >> pos1;
		line.erase(0,1);
		stringstream (line) >> pos2;
		cout<<pos1<<" "<<pos2<<endl;
		array[pos1][pos2]=1;
	    }
	}
    }


    myfile.close();

    return *array;
} 


int main()
{
}
