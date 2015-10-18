////////////////////////////////////////////
//	Concole application C++		          //
//					                      //
//	       <LISTS>                        //
//					                      //
//	 Author Dmitry Murat		          //
///////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// data structure
struct Data
{
    int key;
};

// list element - node
struct Node
{
    Data datum;
    Node* next;
};

int main( int argc, char* argv[])
{
    srand(time(NULL));
    Node* begin = NULL;
    begin = new Node;

    begin->datum.key = 35;
    begin->next = NULL;

    Data massdata[5] = {1,2,3,4,5};

    Node *end = begin;
    for (int i(0); i < 5 ; i++ )
    {
        end->next = new Node;
        end = end->next;
        end->datum = massdata[i];
        end->next = NULL;
    }




    system("pause");
    return 0;
}
