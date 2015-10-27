#include "getConfig.h"
using namespace std;

int getConfig(string docName)
{
	string username,passwd,url,port,servername;
    TiXmlDocument doc(docName);
    bool loadOkay = doc.LoadFile();
    if ( !loadOkay )
    {
        printf( "Could not load test file 'demotest.xml'. Error='%s'. Exiting.\n", doc.ErrorDesc() );
        exit( 1 );
    }
    //printf( "** Printing via operator<< **\n" );
    //std::cout << doc << std::endl;
	TiXmlElement *pRoot=doc.FirstChildElement();
	if(pRoot!=0&&0==strcmp("dbcfg",pRoot->ToElement()->Value()))
	{
		TiXmlNode* pNode=pRoot->FirstChild();
		while(pNode!=0)
		{
			if(0==strcmp(pNode->ToElement()->Value(),"username"))
			{
				username=pNode->ToElement()->GetText();
			}
			if(0==strcmp(pNode->ToElement()->Value(),"passwd"))
			{
				passwd=pNode->ToElement()->GetText();
			}
			if(0==strcmp(pNode->ToElement()->Value(),"url"))
			{
				url=pNode->ToElement()->GetText();
			}
			if(0==strcmp(pNode->ToElement()->Value(),"port"))
			{
				port=pNode->ToElement()->GetText();
			}
			if(0==strcmp(pNode->ToElement()->Value(),"servername"))
			{
				servername=pNode->ToElement()->GetText();
			}
			pNode=pNode->NextSibling();
		}
	}
	cout<<url;
	return 0;
}