#include <iostream>
#include <sstream>
#include "tinyxml.h"
using namespace std;

int main()
{
    TiXmlDocument doc( "cfg.xml" );
    bool loadOkay = doc.LoadFile();
    if ( !loadOkay )
    {
        printf( "Could not load test file 'demotest.xml'. Error='%s'. Exiting.\n", doc.ErrorDesc() );
        exit( 1 );
    }
    printf( "** Printing via operator<< **\n" );
    std::cout << doc << std::endl;    
    return 0;
}