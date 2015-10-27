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
    TiXmlElement *root_element = doc.RootElement();
    if (NULL == root_element)
    {
        return -1;
    }
	std::cout<<root_element->FirstChild()->Value() ;
    TiXmlElement *first_element = root_element->FirstChildElement();

    if (NULL == first_element)
    {
        return -1;
    }
    TiXmlElement *name_element = first_element->FirstChildElement();
    if (NULL == name_element)
    {
        return -1;
    }
	std::cout<<name_element->FirstChild()->Value() ;
    TiXmlElement *age_element = name_element->NextSiblingElement();
    if (NULL == age_element)
    {
        return -1;
    }
	std::cout<<age_element->FirstChild()->Value() ;
    
    return 0;
}